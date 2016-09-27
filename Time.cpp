// Implements Time class methods

#include "Time.h"

Time::Time() {
  hours = 0;
  minutes = 0;
  seconds = 0;
}

bool Time::setHours(int val) {
  if (val < 0) {
    hours = 0;
    return false;
  }
  
  hours = val;
  return true;
}

bool Time::setMinutes(int val) {
  if (val < 0) {
    minutes = 0;
    return false;
  }
  
  minutes = val;
  return true;
}

bool Time::setSeconds(int val) {
  if (val < 0) {
    seconds = 0;
    return false;
  }
  
  seconds = val;
  return true;
}

double Time::timeInHours() const {
  return hours + (minutes + seconds / 60.0) / 60.0;
};

double Time::timeInMinutes() const {
  return hours * 60.0 + minutes + seconds / 60.0;
};

double Time::timeInSeconds() const {
  return (hours * 60 + minutes) * 60 + seconds;
};
