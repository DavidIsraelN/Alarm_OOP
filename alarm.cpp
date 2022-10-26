
//************* alarm.cpp file *************

#include "alarm.h"



/*---------------------------------------

*/
void Alarm::setRealTime(int h, int m, int s)
{
  m_real_time.setTime(h, m, s);
}



/*---------------------------------------

*/
void Alarm::setAlarmTime(int h, int m, int s)
{
  m_alarm_time.setTime(h, m, s);
}



/*---------------------------------------

*/
void Alarm::setAlarmType(int t)
{
  m_real_time.setType(t);
  m_alarm_time.setType(t);
}


/*---------------------------------------

*/
bool Alarm::alarmTime()
{
  return m_real_time.sameTime(m_alarm_time);
}



/*---------------------------------------

*/
void Alarm::beepAlarm()
{
  cout << endl;
  cout << '\a' << "WAKE UP!!" << '\a' << endl;
  m_real_time.print();
  cout << endl;
}


/*---------------------------------------

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

*/
void Alarm::tickRealTime()
{
  m_real_time.tick();
}