
//************* time.cpp file *************

#include "time.h"

/*---------------------------------------
Time constructor initializes each data member to zero
and
ensures all Time objects start in a consistent state
*/
Time::Time()
{
  setTime(0, 0, 0);
  m_time_type = UNIVERSAL;
}

/*---------------------------------------
set new Time value using universal time, perform validity
checks on the data values and set invalid values to zero
*/
void Time::setTime(int h, int m, int s)
{
  m_hour = (h >= 0 && h < 24) ? h : 0;
  m_minute = (m >= 0 && m < 60) ? m : 0;
  m_second = (s >= 0 && s < 60) ? s : 0;
}

/*---------------------------------------
set the format of the clock
*/
void Time::setType(int t)
{
  m_time_type = (t == 1) ? UNIVERSAL : STANDARD;
}

/*---------------------------------------
print time
*/
void Time::print()
{
  if (m_time_type == UNIVERSAL)
    printUniversal();
  else
    printStandard();
}

/*---------------------------------------
print Time in universal format
*/
void Time::printUniversal()
{
  cout << setfill('0') << setw(2) << m_hour << ":"
    << setw(2) << m_minute << ":"
    << setw(2) << m_second;
}

/*---------------------------------------
print Time in standard format
*/
void Time::printStandard()
{
  cout << ((m_hour == 0 || m_hour == 12) ? 12 : m_hour % 12)
    << ":" << setfill('0') << setw(2) << m_minute
    << ":" << setw(2) << m_second
    << (m_hour < 12 ? " AM" : " PM");
}

/*---------------------------------------
tick by a second
*/
void Time::tick()
{
  ++m_second;
  if (m_second == 60)
  {
    m_second = 0;
    ++m_minute;
    if (m_minute == 60)
    {
      m_minute = 0;
      ++m_hour;
      if (m_hour == 24)
        m_hour = 0;
    }
  }
}

/*---------------------------------------
check if time in corrent clock same as the other
*/
bool Time::sameTime(const Time& other)
{
  return(m_hour == other.m_hour &&
    m_minute == other.m_minute &&
    m_second == other.m_second);
}