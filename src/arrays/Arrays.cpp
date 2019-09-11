//
// Created by vagrant on 9/2/19.
//
// see: https://www.tutorialspoint.com/cplusplus/cpp_arrays.htm

#include <iostream>
#include <array>
#include <iomanip>
#include "Arrays.hpp"
using namespace std;
using std::setw;

//  C++ provides a data structure, the array, which stores a fixed-size sequential collection of elements of the same type.
//  An array is used to store a collection of data, but it is often more useful to think of an array as a collection of
//  variables of the same type.
//  Instead of declaring individual variables, such as number0, number1, ..., and number99, you declare one array variable
//  such as numbers and use numbers[0], numbers[1], and ..., numbers[99] to represent individual variables.
//  A specific element in an array is accessed by an index.
//  All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest
//  address to the last element.

//  To declare an array in C++, the programmer specifies the type of the elements and the number of elements required by an array as follows −
//  type arrayName [ arraySize ];

//  This is called a single-dimension array. The arraySize must be an integer constant greater than zero and type can be
//  any valid C++ data type. For example, to declare a 10-element array called balance of type double, use this statement −
//  double balance[10];

//  You can initialize C++ array elements either one by one or using a single statement as follows −
//  double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};

//  The number of values between braces { } can not be larger than the number of elements that we declare for the array
//
//
//  ...between square brackets [ ]

//  If you omit the size of the array, an array just big enough to hold the initialization is created. Therefore, if you write −
//  double balance[] = {1000.0, 2.0, 3.4, 17.0, 50.0};

//  An element is accessed by indexing the array name. This is done by placing the index of the element within square
//  brackets after the name of the array. For example −
//  double salary = balance[9];

void Arrays::arraysExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "arrays example" << endl;
  cout << "================================" << endl;
  int n[ 10 ]; // n is an array of 10 integers

  // initialize elements of array n to 0
  for ( int i = 0; i < 10; i++ ) {
    n[ i ] = i + 100; // set element at location i to i + 100
  }
  cout << "Element" << setw( 13 ) << "Value" << endl;

  // output each array element's value
  for ( int j = 0; j < 10; j++ ) {
    cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
  }
}

//  Multi-dimensional arrays
//  C++ supports multidimensional arrays. The simplest form of the multidimensional array is the two-dimensional array.
//  Here is the general form of a multidimensional array declaration −
//  type name[size1][size2]...[sizeN];
//  For example, the following declaration creates a three dimensional 5 . 10 . 4 integer array −
//  int threedim[5][10][4];
//  see: https://www.tutorialspoint.com/cplusplus/cpp_multi_dimensional_arrays.htm
void Arrays::multiDimensionalArraysExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "multi dimensional arrays example" << endl;
  cout << "================================" << endl;
  // an array with 5 rows and 2 columns.
  int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};

  // output each array element's value
  for ( int i = 0; i < 5; i++ ) {
    for (int j = 0; j < 2; j++) {
      cout << "a[" << i << "][" << j << "]: ";
      cout << a[i][j] << endl;
    }
  }
}

//  Pointer to an array
//  You can generate a pointer to the first element of an array by simply specifying the array name, without any index.
//  An array name is a constant pointer to the first element of the array. Therefore, in the declaration −
//  double balance[50];
//  balance is a pointer to &balance[0], which is the address of the first element of the array balance. Thus, the following
//  program fragment assigns p the address of the first element of balance −
//  double *p;
//  double balance[10];
//  p = balance;
//  It is legal to use array names as constant pointers, and vice versa. Therefore, *(balance + 4) is a legitimate way of
//  accessing the data at balance[4].
//  Once you store the address of first element in p, you can access array elements using *p, *(p+1), *(p+2) and so on. Below
//  is the example to show all the concepts discussed above −
void Arrays::pointerToAnArrayExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "pointer to an array example" << endl;
  cout << "================================" << endl;
  // an array with 5 elements.
  double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
  double *p;

  p = balance;

  // output each array element's value
  cout << "Array values using pointer " << endl;

  for ( int i = 0; i < 5; i++ ) {
    cout << "*(p + " << i << ") : ";
    cout << *(p + i) << endl;
  }
  cout << "Array values using balance as address " << endl;

  for ( int i = 0; i < 5; i++ ) {
    cout << "*(balance + " << i << ") : ";
    cout << *(balance + i) << endl;
  }
}

//  Passing arrays to functions
//  You can pass to the function a pointer to an array by specifying the array's name without an index.

//  C++ does not allow to pass an entire array as an argument to a function. However, You can pass a pointer to an array
//  by specifying the array's name without an index.
//
//  If you want to pass a single-dimension array as an argument in a function, you would have to declare function formal
//  parameter in one of following three ways and all three declaration methods produce similar results because each tells
//  the compiler that an integer pointer is going to be received.

//  Way-1
//  Formal parameters as a pointer as follows −
//void myFunction(int *param) {
//  .
//  .
//  .
//}

//  Way-2
//  Formal parameters as a sized array as follows −
//void myFunction(int param[10]) {
//  .
//  .
//  .
//}

//  Way-3
//  Formal parameters as an unsized array as follows −
//void myFunction(int param[]) {
//  .
//  .
//  .
//}

double Arrays::passingAnArrayToFunctionWay1Example(int arr[], int size) {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "passing an array to function way1 example" << endl;
  cout << "================================" << endl;
  int i, sum = 0;
  double avg;
  for (i = 0; i < size; ++i) {
    sum += arr[i];
  }
  avg = double(sum) / size;
  cout << "avg = " << avg;
  return avg;
}

double Arrays::passingAnArrayToFunctionWay2Example(int *arr, int size) {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "passing an array to function way2 example" << endl;
  cout << "================================" << endl;
  int i, sum = 0;
  double avg;
  for (i = 0; i < size; ++i) {
    sum += arr[i];
  }
  avg = double(sum) / size;
  cout << "avg = " << avg;
  return avg;
}

double Arrays::passingAnArrayToFunctionWay3Example(std::array<int, 5> arr) {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "passing an array to function way3 example" << endl;
  cout << "================================" << endl;
  int i, sum = 0;
  double avg;
  int size = arr.size();
  for (i = 0; i < size; ++i) {
    sum += arr[i];
  }
  avg = double(sum) / size;
  cout << "avg = " << avg;
  return avg;
}

//  Return Array from Functions in C++

//  C++ does not allow to return an entire array as an argument to a function. However, you can return a pointer to an
//  array by specifying the array's name without an index.
//  If you want to return a single-dimension array from a function, you would have to declare a function returning a pointer
//  as in the following example −
//  int * myFunction() {
//    .
//    .
//    .
//  }

//  Second point to remember is that C++ does not advocate to return the address of a local variable to outside of the
//  function so you would have to define the local variable as static variable.

//  Now, consider the following function, which will generate 10 random numbers and return them using an array and call
//  this function as follows −
int * Arrays::returnAnArrayFromFunctionExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "return an array from function example" << endl;
  cout << "================================" << endl;
  static int  r[10];
  // set the seed
  srand( (unsigned)time( NULL ) );
  for (int i = 0; i < 10; ++i) {
    r[i] = rand();
    cout << r[i] << endl;
  }
  return r;
}

Arrays::Arrays() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "Arrays Constructor Called." << endl;
  cout << "================================" << endl;
}

Arrays::~Arrays() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "Arrays Destructor Called." << endl;
  cout << "================================" << endl;
}