//
// Created by carlosjose.requena on 20/08/2019.
//
#include <stdio.h>
#include <iostream>
#include <sstream>
#include "Functions.hpp"
using namespace std; // this is a using directive telling the compiler to check the std namespace when resolving identifiers with no prefix

//  A function is a group of statements that together perform a task. Every C++ program has at least one function,
//  which is main(), and all the most trivial programs can define additional functions.

//  You can divide up your code into separate functions. How you divide up your code among different functions is up to you,
//  but logically the division usually is such that each function performs a specific task.

//  A function declaration tells the compiler about a function's name, return type, and parameters. A function definition
//  provides the actual body of the function.

//  The C++ standard library provides numerous built-in functions that your program can call. For example, function strcat()
//  to concatenate two strings, function memcpy() to copy one memory location to another location and many more functions.

//  A function is known with various names like a method or a sub-routine or a procedure etc.

//  The general form of a C++ function definition is as follows −
//  return_type function_name( parameter list ) {
//    body of the function
//  }

//  A C++ function definition consists of a function header and a function body. Here are all the parts of a function −

//  Return Type − A function may return a value. The return_type is the data type of the value the function returns.
//  Some functions perform the desired operations without returning a value. In this case, the return_type is the keyword void.

//  Function Name − This is the actual name of the function. The function name and the parameter list together constitute
//  the function signature.

//  Parameters − A parameter is like a placeholder. When a function is invoked, you pass a value to the parameter.
//  This value is referred to as actual parameter or argument. The parameter list refers to the type, order, and number
//  of the parameters of a function. Parameters are optional; that is, a function may contain no parameters.

//  Function Body − The function body contains a collection of statements that define what the function does.

// see: https://www.tutorialspoint.com/cplusplus/cpp_functions.htm

// Following is the source code for a function called max(). This function takes two parameters num1 and num2 and return
// the biggest of both −
int Functions::maxBetweenTwoNumbersExample(int aNum1, int aNum2) {
  // local variable declaration
  int result;
  if (aNum1 > aNum2)
    result = aNum1;
  else
    result = aNum2;
  return result;
}

//  Function Arguments:
//  If a function is to use arguments, it must declare variables that accept the values of the arguments. These variables
//  are called the formal parameters of the function.

//The formal parameters behave like other local variables inside the function and are created upon entry into the function
// and destroyed upon exit.

//While calling a function, there are two ways that arguments can be passed to a function −

//  Call by value:
//  This method copies the actual value of an argument into the formal parameter of the function. In this case, changes
//  made to the parameter inside the function have no effect on the argument.

//  The call by value method of passing arguments to a function copies the actual value of an argument into the formal
//  parameter of the function. In this case, changes made to the parameter inside the function have no effect on the argument.

//  By default, C++ uses call by value to pass arguments. In general, this means that code within a function cannot alter
//  the arguments used to call the function. Consider the function swap() definition as follows.
void Functions::swapCallByValueExample(int aNum1, int aNum2) {
  int temp;
  temp = aNum1; /* save the value of aNum1 */
  aNum1 = aNum2;    /* put aNum2 into aNum1 */
  aNum2 = temp; /* put aNum1 into aNum2 */
  return;
}

//  Call by pointer
//  This method copies the address of an argument into the formal parameter. Inside the function, the address is used to
//  access the actual argument used in the call. This means that changes made to the parameter affect the argument.

//  The call by pointer method of passing arguments to a function copies the address of an argument into the formal parameter.
//  Inside the function, the address is used to access the actual argument used in the call. This means that changes made to
//  the parameter affect the passed argument.

//  To pass the value by pointer, argument pointers are passed to the functions just like any other value.
//  So accordingly you need to declare the function parameters as pointer types as in the following function swap(),
//  which exchanges the values of the two integer variables pointed to by its arguments.
void Functions::swapCallByPointerExample(int *aNum1Ptr, int *aNum2Ptr) {
  int temp;
  temp = *aNum1Ptr; /* save the value at address aNum1Ptr */
  *aNum1Ptr = *aNum2Ptr; /* put aNum2Ptr into aNum1Ptr */
  *aNum2Ptr = temp; /* put aNum1Ptr into aNum2Ptr */
  return;
}

//  Call by reference
//  This method copies the reference of an argument into the formal parameter. Inside the function, the reference is used
//  to access the actual argument used in the call. This means that changes made to the parameter affect the argument.

//  The call by reference method of passing arguments to a function copies the reference of an argument into the formal
//  parameter. Inside the function, the reference is used to access the actual argument used in the call. This means that
//  changes made to the parameter affect the passed argument.

//  To pass the value by reference, argument reference is passed to the functions just like any other value. So accordingly
//  you need to declare the function parameters as reference types as in the following function swap(), which exchanges
//  the values of the two integer variables pointed to by its arguments.
void Functions::swapCallByReferenceExample(int &aNum1, int &aNum2) {
  int temp;
  temp = aNum1; /* save the value at address aNum1 */
  aNum1 = aNum2;    /* put aNum2 into aNum1 */
  aNum2 = temp; /* put aNum1 into aNum2 */
  return;
}

//  Default Values for Parameters
//  When you define a function, you can specify a default value for each of the last parameters. This value will be used
//  if the corresponding argument is left blank when calling to the function.

//  This is done by using the assignment operator and assigning values for the arguments in the function definition.
//  If a value for that parameter is not passed when the function is called, the default given value is used, but if a value
//  is specified, this default value is ignored and the passed value is used instead. Consider the following example −
int  Functions::defaultValuesForParameters(int aNum1, int aNum2) {
  int result;
  result = aNum1 + aNum2;
  return (result);
}

Functions::Functions() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "Functions Constructor called." << endl;
  cout << "================================" << endl;
}

Functions::~Functions() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "Functions Destructor called." << endl;
  cout << "================================" << endl;
}