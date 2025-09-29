//
// Created by Carlos José Requena Jiménez on 2019-07-29.
//

#include <iostream>
#include "HelloWorld.hpp"
using namespace std; // this is a using directive telling the compiler to check the std namespace when resolving identifiers with no prefix

void HelloWorld::helloWorld() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "helloWorld example" << endl;
  cout << "================================" << endl;
  std::cout << "Hello, World!" << std::endl;
}

HelloWorld::HelloWorld() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "HelloWorld Constructor called." << endl;
  cout << "================================" << endl;
}

HelloWorld::~HelloWorld() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "HelloWorld Destructor called." << endl;
  cout << "================================" << endl;
}