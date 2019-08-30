#include <iostream>
#include "pointers/Pointers.hpp"
#include "numbers/Numbers.hpp"
#include "modifiertypes/ModifierTypes.hpp"
#include "functions/Functions.hpp"
#include "controlflows/ControlFlows.hpp"
#include "datatypes/DataTypes.hpp"
#include "helloworld/HelloWorld.hpp"
using namespace std; // this is a using directive telling the compiler to check the std namespace when resolving identifiers with no prefix

int main() {
  //Hello World
  HelloWorld helloWorldObj;
  helloWorldObj.helloWorld();

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
  controlFlows.forLoopExample();
  controlFlows.whileLoopExample();
  controlFlows.doWhileLoopExample();
  controlFlows.nestedLoopExample();
  controlFlows.breakStatementExample();
  controlFlows.continueStatementExample();
  controlFlows.gotoStatementExample();
  controlFlows.ifStatementExample();
  controlFlows.elseStatementExample();
  controlFlows.elseIfStatementExample();
  controlFlows.conditionalOperatorExample();
  controlFlows.switchStatementExample();

  // Functions
  Functions functions;
  cout << "" << endl;
  cout << "the max between 3 and 9 is -> " << functions.maxBetweenTwoNumbersExample(3, 9) << endl;
  int a = 100;
  int b = 200;
  cout << "" << endl;
  cout << "Before swap, value of a :" << a << endl;
  cout << "Before swap, value of b :" << b << endl;
  // calling a function to swap the values.
  functions.swapCallByValueExample(a, b);
  cout << "" << endl;
  cout << "After swap by value, value of a :" << a << endl;
  cout << "After swap by value, value of b :" << b << endl;
  /* calling a function to swap the values.
   * &a indicates pointer to a ie. address of variable a and
   * &b indicates pointer to b ie. address of variable b.
   */
  functions.swapCallByPointerExample(&a, &b);
  cout << "" << endl;
  cout << "After swap by pointer, value of a :" << a << endl;
  cout << "After swap by pointer, value of b :" << b << endl;

  functions.swapCallByReferenceExample(a, b);
  cout << "" << endl;
  cout << "After swap by reference, value of a :" << a << endl;
  cout << "After swap by reference, value of b :" << b << endl;

  // calling a function to add the values.
  int result = functions.defaultValuesForParameters(a, b);
  cout << "" << endl;
  cout << "Total value is :" << result << endl;
  // calling a function again as follows.
  result = functions.defaultValuesForParameters(a);
  cout << "Total value is :" << result << endl;

  // Modifier Types
  ModifierTypes modifierTypes;
  modifierTypes.showDifferenceBetweenSignedAndUnsignedIntegers();

  // Numbers
  Numbers numbers;
  numbers.numbersExample();
  numbers.mathematicalOperationsExample();
  numbers.randomNumberExample();
  numbers.randomNumberBetweenMinMaxExample(100,110);

  // Pointers
  Pointers pointers;
  pointers.declaringPointerExample();
  pointers.printVariableAddressExample();
  pointers.nullPointerExample();
  pointers.incrementPointerExample();
  pointers.decrementPointerExample();
  pointers.pointerComparisonsExample();
  return 0;
}