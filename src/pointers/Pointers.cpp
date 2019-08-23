//
// Created by carlosjose.requena on 14/08/2019.
//
#include "iostream"
#include "Pointers.hpp"
using namespace std;

//  Pointers
//  Pointers represent one of the more powerful features of the C language, but also one of the most feared. Some of
//  this fear and apprehension stems from the ridiculously obtuse ways that pointers may be used in C. Often tutorials
//  and courses on C approach teaching pointers by asking the student to decipher bizarre looking pointer syntax
//  combinations that truthfully are rarely used in practice. You may have seen bizarre looking pointer syntax,
//  (and you may see it again), but typically, pointers do not have to be used in a horribly complicated way.
//  Typically pointers are pretty straightforward.

//  The bottom line is, pointers allow you to work with dynamically allocated memory blocks. You will use pointers to deal
//  with variables that have been allocated on the heap. (You can use pointers to deal with stack variables, but in most cases
//  this just isn't necessary).

//  The basic idea is, a pointer is a special data type in C, that contains an address to a location in memory. Think of
//  a pointer as an arrow that points to the location of a block of memory that in turn contains actual data of interest.
//  It's not unlike the concept of a phone number, or a house address.

//  The purpose of pointers is to allow you to manually, directly access a block of memory. Pointers are used a lot for
//  strings and structs. It's not difficult to imagine that passing the address of a large block of memory
//  (such as a struct that contains many things) to a function, is more efficient than making a copy of it and passing
//  in that copy, only to delete that copy when your function is done with it. This is known as passing by reference
//  versus passing by value.

//  A pointer is a variable whose value is the address of another variable. Like any variable or constant, you must declare
//  a pointer before you can work with it. The general form of a pointer variable declaration is −

//  type *var-name;

//  Here, type is the pointer's base type; it must be a valid C++ type and var-name is the name of the pointer variable.
//  The asterisk you used to declare a pointer is the same asterisk that you use for multiplication. However, in this
//  statement the asterisk is being used to designate a variable as a pointer. Following are the valid pointer declaration −

//  int    *ip;    // pointer to an integer
//  double *dp;    // pointer to a double
//  float  *fp;    // pointer to a float
//  char   *ch     // pointer to character

//  The actual data type of the value of all pointers, whether integer, float, character, or otherwise, is the same, a
//  long hexadecimal number that represents a memory address. The only difference between pointers of different data types
//  is the data type of the variable or constant that the pointer points to.

//  There is a code example below that illustrates this more clearly.

void Pointers::declaringPointerExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "declaring pointer example" << endl;
  cout << "================================" << endl;

  int age = 30;
  int *agePtr;
  agePtr = &age;

  cout << "age=" << age << endl;
  cout << "&age=" << &age << endl;
  cout << "agePtr=" << agePtr << endl;
  cout << "*agePtr=" << *agePtr << endl;
  cout << "&agePtr=" << &agePtr << endl;
  cout << "sizeof(agePtr)=" << sizeof(agePtr) << endl;
  *agePtr = 40;
  cout << "*agePtr=" << *agePtr << endl;
  cout << "age=" << age << endl;
}

//  C++ pointers are easy and fun to learn. Some C++ tasks are performed more easily with pointers, and other C++ tasks,
//  such as dynamic memory allocation, cannot be performed without them.

//  As you know every variable is a memory location and every memory location has its address defined which can be accessed
//  using ampersand (&) operator which denotes an address in memory. Consider the following which will print the address
//  of the variables defined −

void Pointers::printVariableAddressExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "print variable address example" << endl;
  cout << "================================" << endl;

  int  var1;
  char var2[10];

  cout << "Address of var1 variable: ";
  cout << &var1 << endl;

  cout << "Address of var2 variable: ";
  cout << &var2 << endl;
}

Pointers::Pointers() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "Pointers Constructor Called." << endl;
  cout << "================================" << endl;
}

Pointers::~Pointers() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "Pointers Destructor Called." << endl;
  cout << "================================" << endl;
}