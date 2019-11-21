//
// Created by Carlos José Requena Jiménez on 2019-10-07.
//
// see: https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm

#include "DateTime.hpp"
#include <iostream>
#include <ctime>
#include <thread>

using namespace std;

//  The C++ standard library does not provide a proper date type. C++ inherits the structs and functions for date and
//  time manipulation from C. To access date and time related functions and structures, you would need to include <ctime>
//  header file in your C++ program.

//  There are four time-related types: clock_t, time_t, size_t, and tm. The types - clock_t, size_t and time_t are
//  capable of representing the system time and date as some sort of integer.

//  The structure type tm holds the date and time in the form of a C structure having the following elements −

//  struct tm {
//    int tm_sec;   // seconds of minutes from 0 to 61
//    int tm_min;   // minutes of hour from 0 to 59
//    int tm_hour;  // hours of day from 0 to 24
//    int tm_mday;  // day of month from 1 to 31
//    int tm_mon;   // month of year from 0 to 11
//    int tm_year;  // year since 1900
//    int tm_wday;  // days since sunday
//    int tm_yday;  // days since January 1st
//    int tm_isdst; // hours of daylight savings time
//  }

//  Following are the important functions, which we use while working with date and time in C or C++. All these functions
//  are part of standard C and C++ library and you can check their detail using reference to C++ standard library given below.

//  time_t time(time_t *time);
//
//  This returns the current calendar time of the system in number of seconds elapsed since January 1, 1970. If the system
//  has no time, .1 is returned.

//  char *ctime(const time_t *time);
//
//  This returns a pointer to a string of the form day month year hours:minutes:seconds year\n\0.

//  struct tm *localtime(const time_t *time);
//
//  This returns a pointer to the tm structure representing local time.

//  clock_t clock(void);
//
//  This returns a value that approximates the amount of time the calling program has been running. A value of .1 is
//  returned if the time is not available.

//  char * asctime ( const struct tm * time );
//
//  This returns a pointer to a string that contains the information stored in the structure pointed to by time converted
//  into the form: day month date hours:minutes:seconds year\n\0

//  struct tm *gmtime(const time_t *time);
//
//  This returns a pointer to the time in the form of a tm structure. The time is represented in Coordinated Universal
//  Time (UTC), which is essentially Greenwich Mean Time (GMT).

//  time_t mktime(struct tm *time);
//
//  This returns the calendar-time equivalent of the time found in the structure pointed to by time.

//  double difftime ( time_t time2, time_t time1 );
//
//  This function calculates the difference in seconds between time1 and time2.

//  size_t strftime();
//
//  This function can be used to format date and time in a specific format.

void DateTime::dateTimeFunctionsExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "datetime functions example" << endl;
  cout << "================================" << endl;

  time_t now = time(0);
  cout << "time_t now = time(0); -> " << now << endl;

  char *nowStr = ctime(&now);
  cout << "char *nowStr = ctime(&now); -> " << nowStr << endl;

  tm *ltm = localtime(&now);
  cout << "tm *ltm = localtime(&now); -> " << ltm << endl;
  cout << "Year: " << 1900 + ltm->tm_year << endl;
  cout << "Month: " << 1 + ltm->tm_mon << endl;
  cout << "Day: " << ltm->tm_mday << endl;
  cout << "Time: " << 1 + ltm->tm_hour << ":";
  cout << 1 + ltm->tm_min << ":";
  cout << 1 + ltm->tm_sec << endl;
  cout << "" << endl;

  clock_t clk = clock();
  cout << "clock_t clk = clock(); -> " << clk << endl;

  nowStr = asctime(ltm);
  cout << "char*  nowStr = asctime ( ltm ); -> " << nowStr << endl;

  ltm = gmtime(&now);
  cout << "tm ltm = gmtime(&now); -> " << ltm << endl;

  now = mktime(ltm);
  cout << "time_t now =  mktime(ltm) -> " << now << endl;

  struct tm y2ktm = {0};
  y2ktm.tm_hour = 0;
  y2ktm.tm_min = 0;
  y2ktm.tm_sec = 0;
  y2ktm.tm_year = 100;
  y2ktm.tm_mon = 0;
  y2ktm.tm_mday = 1;
  time_t y2k = mktime(&y2ktm);

  double dif = difftime(now, y2k);
  cout << "The difference between now and y2k in seconds is: " << dif << endl;

  struct tm lastYeartm = {0};
  lastYeartm = *ltm;
  lastYeartm.tm_year = ltm->tm_year - 1;

  dif = difftime(now, mktime(&lastYeartm));
  cout << "The difference between now and lastYear in seconds is: " << dif << endl;

  char date_string[100];
  char time_string[100];

  strftime(date_string, 50, "Today is %B %d, %Y", ltm);
  strftime(time_string, 50, "Current time is %T", ltm);

  cout << date_string << endl;
  cout << time_string << endl;

  strftime(date_string, 50, "Last year was %B %d, %Y", &lastYeartm);
  strftime(time_string, 50, "Last time was %T", &lastYeartm);

  cout << date_string << endl;
  cout << time_string << endl;

  strftime(date_string, 50, "Y2k was %B %d, %Y", &y2ktm);
  strftime(time_string, 50, "Y2k time was %T", &y2ktm);

  cout << date_string << endl;
  cout << time_string << endl;
}

// http://www.cplusplus.com/reference/ctime/time/
void DateTime::timeExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "time example" << endl;
  cout << "================================" << endl;
  time_t
      timer; // This returns the current calendar time of the system in number of seconds elapsed since January 1, 1970. If the system has no time, .1 is returned.
  struct tm y2k = {0};
  double seconds;

  y2k.tm_hour = 0;
  y2k.tm_min = 0;
  y2k.tm_sec = 0;
  y2k.tm_year = 100;
  y2k.tm_mon = 0;
  y2k.tm_mday = 1;

  time(&timer);  /* get current time; same as: timer = time(NULL)  */

  seconds = difftime(timer, mktime(&y2k));

  cout << seconds << " seconds since January 1, 2000 in the current timezone" << endl;
}

// http://www.cplusplus.com/reference/ctime/ctime/
void DateTime::ctimeExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "ctime example" << endl;
  cout << "================================" << endl;
  time_t rawtime;
  time(&rawtime);
  cout << "The current local time is: " << ctime(&rawtime) << endl;
}

//  http://www.cplusplus.com/reference/ctime/localtime/
void DateTime::localtimeExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "localtime example" << endl;
  cout << "================================" << endl;
  time_t rawtime;
  struct tm *timeinfo;
  time(&rawtime);
  timeinfo = localtime(&rawtime); // Convert time_t to tm as local time
  cout << "Current local time and date: " << asctime(timeinfo) << endl;
}

// http://www.cplusplus.com/reference/ctime/clock/
void DateTime::clockExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "clock example" << endl;
  cout << "================================" << endl;
  clock_t clk;
  clk = clock();
  //DateTime::_sleep();
  clk = clock() - clk;
  cout << "Clock took " << (double)clk << " clicks " << ((float) clk / CLOCKS_PER_SEC) << " seconds " << endl;
}

// http://www.cplusplus.com/reference/ctime/asctime/
void DateTime::asctimeExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "asctime example" << endl;
  cout << "================================" << endl;
  time_t rawtime;
  struct tm * timeinfo;
  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  cout << "The current date/time is: " <<   asctime (timeinfo) << endl;
}


#define MST (-7)
#define UTC (0)
#define CCT (+8)
// http://www.cplusplus.com/reference/ctime/gmtime/
void DateTime::gmtimeExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "gmtime example" << endl;
  cout << "================================" << endl;
  time_t rawtime;
  struct tm * ptm;

  time ( &rawtime );

  ptm = gmtime ( &rawtime );

  cout << "Current time around the World:" << endl;
  cout << "Phoenix, AZ (U.S.) : " << (ptm->tm_hour+MST)%24 << ":" << ptm->tm_min <<endl;
  cout << "Reykjavik (Iceland) : " << (ptm->tm_hour+UTC)%24 << ":" << ptm->tm_min <<endl;
  cout << "Beijing (China) : " << (ptm->tm_hour+CCT)%24 << ":" << ptm->tm_min <<endl;
}

// http://www.cplusplus.com/reference/ctime/mktime/
void DateTime::mktimeExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "mktime example" << endl;
  cout << "================================" << endl;

  time_t rawtime;
  struct tm * timeinfo;
  int year, month ,day;
  const char * weekday[] = { "Sunday", "Monday",
                             "Tuesday", "Wednesday",
                             "Thursday", "Friday", "Saturday"};

  /* prompt user for date */
  cout << "Enter year: ";
  fflush(stdout); scanf ("%d",&year);
  cout << "Enter month: ";
  fflush(stdout); scanf ("%d",&month);
  cout << "Enter day: ";
  fflush(stdout); scanf ("%d",&day);

  /* get current timeinfo and modify it to the user's choice */
  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  timeinfo->tm_year = year - 1900;
  timeinfo->tm_mon = month - 1;
  timeinfo->tm_mday = day;

  /* call mktime: timeinfo->tm_wday will be set */
  mktime ( timeinfo );

  cout  << "That day is a " <<  weekday[timeinfo->tm_wday] << endl;

}

void DateTime::_sleep(){
  std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

DateTime::DateTime() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "DateTime Constructor Called." << endl;
  cout << "================================" << endl;
}

DateTime::~DateTime() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "DateTime Destructor Called." << endl;
  cout << "================================" << endl;
}