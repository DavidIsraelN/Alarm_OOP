
//************* alarm.cpp file *************

#include "alarm.h"
#include <iostream>

using std::cout;
using std::endl;

/*---------------------------------------
set hour, minute, second for real time
*/
void Alarm::setRealTime(int h, int m, int s)
{
  m_real_time.setTime(h, m, s);
}

/*---------------------------------------
set hour, minute, second for alarm time
*/
void Alarm::setAlarmTime(int h, int m, int s)
{
  m_alarm_time.setTime(h, m, s);
}

/*---------------------------------------
set the format for the alarm clock
*/
void Alarm::setAlarmType(int t)
{
  m_real_time.setType(t);
  m_alarm_time.setType(t);
}

/*---------------------------------------
tick real time by a second
*/
void Alarm::tickRealTime()
{
  m_real_time.tick();
}

/*---------------------------------------
print real and alarm time
*/
void Alarm::printAlarm()
{
  cout << "Real Time is: ";
  m_real_time.print();
  cout << "   \t";
  cout << "Alarm is set to: ";
  m_alarm_time.print();
  cout << '\r' << std::flush;
}

/*---------------------------------------
check if it's alarm time
*/
bool Alarm::alarmTime()
{
  return m_real_time.sameTime(m_alarm_time);
}

/*---------------------------------------
ringing
*/
void Alarm::beepAlarm()
{
  cout << endl;
  cout << '\a' << "WAKE UP!!" << '\a' << endl;
  m_real_time.print();
  cout << endl;
}