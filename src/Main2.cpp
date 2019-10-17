#include <iostream>
#include <array>
#include "references/References.hpp"
#include "strings/Strings.hpp"
#include "arrays/Arrays.hpp"
#include "pointers/Pointers.hpp"
#include "numbers/Numbers.hpp"
#include "modifiertypes/ModifierTypes.hpp"
#include "functions/Functions.hpp"
#include "controlflows/ControlFlows.hpp"
#include "datatypes/DataTypes.hpp"
#include "helloworld/HelloWorld.hpp"
using namespace std; // this is a using directive telling the compiler to check the std namespace when resolving identifiers with no prefix

int init() {
  //Hello World
  HelloWorld helloWorldObj;
  helloWorldObj.helloWorld();


  return 0;
}