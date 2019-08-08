#include <iostream>
#include <datatypes/DataTypes.hpp>
#include "helloworld/HelloWorld.hpp"

int main ()
{
  //Hello World
  HelloWorld helloWorldObj;
  helloWorldObj.helloWorld ();

  // Print Data Types
  DataTypes dataTypes;
  dataTypes.printDataTypes();
  dataTypes.printIntegerRepresentations();
  dataTypes.printEnumerationConstants();
  dataTypes.printDeclarations();
  dataTypes.arithmeticOperatorsExample();

  return 0;
}