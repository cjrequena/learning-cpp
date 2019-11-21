//
// Created by Carlos José Requena Jiménez on 2019-10-07.
//

#ifndef LEARNING_CPP_SRC_DATETIME_DATETIME_HPP_
#define LEARNING_CPP_SRC_DATETIME_DATETIME_HPP_

class DateTime {
 private:
  void _sleep();
 public:
  void dateTimeFunctionsExample();
  void timeExample(); // time  Get the current calendar time as a value of type time_t.
  void ctimeExample(); // ctime Convert time_t value to string
  void localtimeExample(); // localtime Convert time_t to tm as local time
  void clockExample(); // clock Returns the processor time consumed by the program
  void asctimeExample(); // asctime Convert tm structure to string
  void gmtimeExample(); // gmtime Convert time_t to tm as UTC time
  void mktimeExample(); // mktime Convert tm structure to time_t
  DateTime();
  ~DateTime();
};

#endif //LEARNING_CPP_SRC_DATETIME_DATETIME_HPP_
