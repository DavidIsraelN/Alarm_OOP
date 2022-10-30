
//************* time.h file *************

#pragma once

enum TIME_TYPE {UNIVERSAL, STANDARD};

// Time abstract data type (ADT) definition:

class Time {

public:
  Time();                         // constructor
  void setTime(int, int, int);    // set hour, minute, second
  void setType(int);              // set format of the clock
  void print();                   // print time
  void printUniversal();          // print universal-time format
  void printStandard();           // print standard-time format
  void tick();                    // tick by a second
  bool sameTime(const Time&);     // comparison between times

private:
  int m_hour;                     // 0 - 23 (24-hour clock format)
  int m_minute;                   // 0 - 59
  int m_second;                   // 0 - 59
  TIME_TYPE m_time_type;          // UNIVERSAL / STANDARD

}; // end class Time