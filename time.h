
//************* time.h file *************

#pragma once

#include <iostream>
#include <iomanip>

using std::cout;
using std::setfill;
using std::setw;
using std::cin;
using std::cout;
using std::endl;


enum TIME_TYPE { UNIVERSAL, STANDARD };

// Time abstract data type (ADT) definition

class Time {

public:
  Time(); //constructor
  void setTime(int, int, int); // set hour, minute, second
  void setType(int);
  void print();
  void printUniversal(); // print universal-time format
  void printStandard();  // print standard-time format
  void tick();
  bool sameTime(const Time&);

private:
  int m_hour;     // 0 - 23 (24-hour clock format)
  int m_minute;   // 0 - 59
  int m_second;   // 0 - 59
  TIME_TYPE m_time_type;

}; // end class Time