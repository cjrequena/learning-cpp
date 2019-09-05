//
// Created by vagrant on 9/2/19.
//
// see: https://www.tutorialspoint.com/cplusplus/cpp_arrays.htm

#include "iostream"
#include "Arrays.hpp"
#include <iomanip>
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