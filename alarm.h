
//************* alarm.h file *************

#pragma once

#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <time.h>
#include "time.h"

using std::cin;
using std::cout;
using std::endl;
// using std::flush;
using std::setfill;
using std::setw; // Alarm clock program in OOP paradigm

class Alarm {

public:
  void setRealTime(int, int, int);
  void setAlarmTime(int, int, int);
  void setAlarmType(int);
  void tickRealTime();
  void printAlarm();
  bool alarmTime();
  void beepAlarm();

private:
  Time m_real_time;
  Time m_alarm_time;
};