// Defines structure of Time class

#ifndef TIME_H
#define TIME_H

class Time {
private:
  int hours;
  int minutes;
  int seconds;
public:
  int getHours() const { return hours; }
  bool setHours(int);
  
  int getMinutes() const { return minutes; }
  bool setMinutes(int);
  
  int getSeconds() const { return seconds; }
  bool setSeconds(int);
  
  double timeInHours() const;
  double timeInMinutes() const;
  double timeInSeconds() const;
};

#endif // TIME_H
