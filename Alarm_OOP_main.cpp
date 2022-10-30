//************* main.cpp file ***************

#include "alarm.h"
#include <iostream>
#include <thread>
#include <chrono>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  Alarm my_alarm;            // instantiate object of class Alarm
  int h, m, s, type;

  cout << "enter current time (hour, minute, second) :  ";
  cin >> h >> m >> s;
  my_alarm.setRealTime(h, m, s);

  cout << "enter alarm time (hour, minute, second) :  ";
  cin >> h >> m >> s;
  my_alarm.setAlarmTime(h, m, s);

  cout << "default format of clock is UNIVERSAL, to stay in this mode enter 1"
       << "\nif you want to switch to STANDARD format enter 0 :  ";
  cin >> type;
  my_alarm.setAlarmType(type);

  my_alarm.printAlarm();
  cout << endl;

  while (true)                // while it's not alarm time yet
  {
    if (my_alarm.alarmTime())
    {
      my_alarm.beepAlarm();
      break;
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    my_alarm.tickRealTime();
    my_alarm.printAlarm();
  }

  return EXIT_SUCCESS;
}