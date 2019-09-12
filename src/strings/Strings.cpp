//
// Created by vagrant on 9/12/19.
//
// See: https://www.tutorialspoint.com/cplusplus/cpp_strings.htm

#include <iostream>
#include <cstring>
#include "Strings.hpp"
using namespace std;

//  C++ provides following two types of string representations −
//  The C-style character string.
//  The string class type introduced with Standard C++.

//  The C-Style Character String
//  The C-style character string originated within the C language and continues to be supported within C++. This string
//  is actually a one-dimensional array of characters which is terminated by a null character '\0'. Thus a null-terminated
//  string contains the characters that comprise the string followed by a null.

//  The following declaration and initialization create a string consisting of the word "Hello". To hold the null character
//  at the end of the array, the size of the character array containing the string is one more than the number of characters in the word "Hello."
//  char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

//  If you follow the rule of array initialization, then you can write the above statement as follows −
//  char greeting[] = "Hello";
//  Following is the memory presentation of above defined string in C/C++ −

//  index       0   1   2   3   4   5
//  variable    H   e   l   l   o   \n
//  address     0x1 0x2 0x3 0x4 0x5 0x6

//  Actually, you do not place the null character at the end of a string constant. The C++ compiler automatically places
//  the '\0' at the end of the string when it initializes the array. Let us try to print above-mentioned string −
void Strings::stringExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "string example" << endl;
  cout << "================================" << endl;
  char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char greeting2[] = "Hello";
  cout << "Greeting message: ";
  cout << greeting << endl;
  cout << "Greeting message 2: ";
  cout << greeting2 << endl;
}

//  C++ supports a wide range of functions that manipulate null-terminated strings −

//  strcpy(s1, s2);
//  Copies string s2 into string s1.
void Strings::strcpyExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "strcpy example" << endl;
  cout << "================================" << endl;
  char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char greeting2[6] = "";
  strcpy(greeting2, greeting);
  cout << "Greeting message copy: ";
  cout << greeting2 << endl;
}
Strings::Strings() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "Strings Constructor Called." << endl;
  cout << "================================" << endl;
}

Strings::~Strings() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "Numbers Destructor Called." << endl;
  cout << "================================" << endl;
}