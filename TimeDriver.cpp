// Uses and tests Time class

#include <iostream>

using namespace std;

#include "Time.h"
#include "Time.h" // test ifndef

int main() {
  Time time;
  
  // Test setters and getters
  
  cout << "Hours:" << endl;
  cout << should("default to 0", time.getHours() == 0) << endl;
  cout << should("return true for positive input (4)", time.setHours(4) == true) << endl;
  cout << should("now be 4", time.getHours() == 4) << endl;
  cout << should("return false for negative input (-1)", time.setHours(-1) == false) << endl;
  cout << should("be 0 after invalid input", time.getHours() == 0) << endl;
  
  cout << "Minutes:" << endl;
  cout << should("default to 0", time.getMinutes() == 0) << endl;
  cout << should("return true for positive input (10)", time.setMinutes(10) == true) << endl;
  cout << should("now be 10", time.getMinutes() == 10) << endl;
  cout << should("return false for negative input (-1)", time.setMinutes(-1) == false) << endl;
  cout << should("be 0 after invalid input", time.getMinutes() == 0) << endl;
  
  cout << "Seconds:" << endl;
  cout << should("default to 0", time.getSeconds() == 0) << endl;
  cout << should("return true for positive input (30)", time.setSeconds(30) == true) << endl;
  cout << should("now be 30", time.getSeconds() == 30) << endl;
  cout << should("return false for negative input (-1)", time.setSeconds(-1) == false) << endl;
  cout << should("be 0 after invalid input", time.getSeconds() == 0) << endl;
  
  time.setHours(4);
  time.setMinutes(10);
  time.setSeconds(30);
  
  // Test methods
  
  cout << endl;
  cout << "Total time (4h 10m 30s):" << endl;
  cout << should("be 4.175 hours", time.timeInHours() == 4.175) << endl;
  cout << should("be 250.5 minutes", time.timeInMinutes() == 250.5) << endl;
  cout << should("be 15030 seconds", time.timeInSeconds() == 15030.0) << endl;
  
  return 0;
}
