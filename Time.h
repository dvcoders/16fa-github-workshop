// Defines structure of Time class

#ifndef TIME_H
#define TIME_H

class Time {
public:
  Time();
  int getHours() const { return hours; }
  bool setHours(int);
  
  int getMinutes() const { return minutes; }
  bool setMinutes(int);
  
  int getSeconds() const { return seconds; }
  bool setSeconds(int);
  
  double timeInHours() const;
  double timeInMinutes() const;
  double timeInSeconds() const;
  
private:
  int hours;
  int minutes;
  int seconds;
};

#endif // TIME_H
