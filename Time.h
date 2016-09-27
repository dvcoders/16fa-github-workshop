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
  
  double timeInHours() const { return hour + (minutes / 60.0) + (seconds / 3600.0); }
  double timeInMinutes() const { return hour * 60.0 + minutes + (seconds / 60.0); }
  double timeInSeconds() const { return hour * 3600.0 + minutes * 60.0 + seconds };
};

#endif // TIME_H
