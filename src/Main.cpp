#include <iostream>
#include "controlflows/ControlFlows.hpp"
#include "datatypes/DataTypes.hpp"
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
  dataTypes.incrementAndDecrementVariableExample();
  dataTypes.typeConversionsExample();
  dataTypes.typeCastingExample();
  dataTypes.stringConversionExample();

  // Control Flows
  ControlFlows controlFlows;
  controlFlows.forLoopExample ();
  controlFlows.whileLoopExample();
  controlFlows.doWhileLoopExample();
  controlFlows.nestedLoopExample();

  return 0;
}