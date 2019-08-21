//
// Created by carlosjose.requena on 21/08/2019.
//
// see: https://www.tutorialspoint.com/cplusplus/cpp_numbers.htm

#include <iostream>
#include <cmath>
#include "Numbers.hpp"
using namespace std;

//  Normally, when we work with Numbers, we use primitive data types such as int, short, long, float and double, etc.
//  The number data types, their possible values and number ranges have been explained while discussing C++ Data Types.
//  see: https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm

void Numbers::numbersExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "numbers example" << endl;
  cout << "================================" << endl;

  // number definition:
  short  s;
  int    i;
  long   l;
  float  f;
  double d;

  // number assignments;
  s = 10;
  i = 1000;
  l = 1000000;
  f = 230.47;
  d = 30949.374;

  // number printing;
  cout << "short  s :" << s << endl;
  cout << "int    i :" << i << endl;
  cout << "long   l :" << l << endl;
  cout << "float  f :" << f << endl;
  cout << "double d :" << d << endl;
}

//  Math Operations in C++
//  In addition to the various functions you can create, C++ also includes some useful functions you can use.
//  These functions are available in standard C and C++ libraries and called built-in functions. These are functions
//  that can be included in your program and then use.

//  C++ has a rich set of mathematical operations, which can be performed on various numbers. Following table lists
//  down some useful built-in mathematical functions available in C++.

//  To utilize these functions you need to include the math header file <cmath>.

//  double cos(double);
//  This function takes an angle (as a double) and returns the cosine.

//  double sin(double);
//  This function takes an angle (as a double) and returns the sine.

//  double tan(double);
//  This function takes an angle (as a double) and returns the tangent.

//  double log(double);
//  This function takes a number and returns the natural log of that number.

//  double pow(double, double);
//  The first is a number you wish to raise and the second is the power you wish to raise it t

//  double hypot(double, double);
//  If you pass this function the length of two sides of a right triangle, it will return you the length of the hypotenuse.

//  double sqrt(double);
//  You pass this function a number and it gives you the square root.

//  int abs(int);
//  This function returns the absolute value of an integer that is passed to it.


//  double fabs(double);
//  This function returns the absolute value of any decimal number passed to it.

//  double floor(double);
//  Finds the integer which is less than or equal to the argument passed to it.

void Numbers::mathematicalOperationsExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "mathematical operations example" << endl;
  cout << "================================" << endl;
  // number definition:
  short  s = 10;
  int    i = -1000;
  long   l = 100000;
  float  f = 230.47;
  double d = 200.374;

  // mathematical operations;
  cout << "sin(200.374) :" << sin(d) << endl;
  cout << "abs(-1000)  :" << abs(i) << endl;
  cout << "floor(200.374) :" << floor(d) << endl;
  cout << "sqrt(230.47) :" << sqrt(f) << endl;
  cout << "pow(200.374, 2) :" << pow(d, 2) << endl;
}

Numbers::Numbers() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "Numbers Constructor Called." << endl;
  cout << "================================" << endl;
}

Numbers::~Numbers() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "Numbers Destructor Called." << endl;
  cout << "================================" << endl;
}
