
//************* alarm.h file *************

#pragma once

#include "time.h"
#include <iostream>

using std::cout;
using std::endl;

// Alarm abstract data type (ADT) definition:

class Alarm {

public:
  void setRealTime(int, int, int);    // set hour, minute, second for real time
  void setAlarmTime(int, int, int);   // set hour, minute, second for alarm
  void setAlarmType(int);             // set format of the clocks
  void tickRealTime();                // tick real time by a second
  void printAlarm();                  // print real and alarm time
  bool alarmTime();                   // check if it's alarm time
  void beepAlarm();                   // ringing

private:
  Time m_real_time;                   // real time
  Time m_alarm_time;                  // alarm time

}; // end class Alarm