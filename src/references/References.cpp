//  https://www.tutorialspoint.com/cplusplus/cpp_references.htm

#include <iostream>
#include "References.hpp"
using namespace std;

//  A reference variable is an alias, that is, another name for an already existing variable. Once a reference is
//  initialized with a variable, either the variable name or the reference name may be used to refer to the variable.

//  References vs Pointers
//  References are often confused with pointers but three major differences between references and pointers are −
//    - You cannot have NULL references. You must always be able to assume that a reference is connected to a legitimate piece of storage.
//    - Once a reference is initialized to an object, it cannot be changed to refer to another object. Pointers can be pointed to another object at any time.
//  A reference must be initialized when it is created. Pointers can be initialized at any time.

//  Creating References in C++
//  Think of a variable name as a label attached to the variable's location in memory. You can then think of a reference
//  as a second label attached to that memory location. Therefore, you can access the contents of the variable through
//  either the original variable name or the reference. For example, suppose we have the following example −

//  int i = 17;
//  We can declare reference variables for i as follows.
//  int& r = i;

//  Read the & in these declarations as reference. Thus, read the first declaration as "r is an integer reference
//  initialized to i" and read the second declaration as "s is a double reference initialized to d.". Following example
//  makes use of references on int and double −

void References::declaringReferenceExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "declaring reference example" << endl;
  cout << "================================" << endl;
  // declare simple variables
  int i;
  double d;
  // declare reference variables
  int &iReference = i;
  double &dRererence = d;
  i = 5;
  cout << "Value of i : " << i << endl;
  cout << "Memory location of i : " << &i << endl;
  cout << "Value of iReference : " << iReference << endl;
  cout << "Memory location of iReference : " << &iReference << endl;

  d = 11.7;
  cout << "Value of d : " << d << endl;
  cout << "Memory location of d : " << &d << endl;
  cout << "Value of dReference : " << dRererence << endl;
  cout << "Memory location of dRererence : " << &dRererence << endl;

}

//  References as Parameters
//  C++ supports passing references as function parameter more safely than parameters.
void References::callByReferenceExample(int &x, int &y) {
  int temp;
  temp = x; /* save the value at address x */
  x = y;    /* put y into x */
  y = temp; /* put x into y */
}

//  A C++ program can be made easier to read and maintain by using references rather than pointers. A C++ function can
//  return a reference in a similar way as it returns a pointer.

//  When a function returns a reference, it returns an implicit pointer to its return value. This way, a function can
//  be used on the left side of an assignment statement. For example, consider this simple program −

double& References::returnReferenceFromFunctionExample(double *vals, int i) {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "return reference from function example" << endl;
  cout << "================================" << endl;
  return vals[i];   // return a reference to the ith element
}

References::References() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "References Constructor Called." << endl;
  cout << "================================" << endl;
}

References::~References() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "References Destructor Called." << endl;
  cout << "================================" << endl;
}