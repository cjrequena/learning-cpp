//
// Created by Carlos José Requena Jiménez on 5/10/25.
//
#include <iostream>
#include "0-helloworld/HelloWorld.hpp"
#include "1-datatypes/DataTypes.hpp"
#include "9-operators/Operators.hpp"
#include "files/Files.h"

using namespace std;

int main() {
    DataTypes data_types;
    data_types.printDataTypes();

    Operators operators;
    operators.incrementDecrementOperatorsExample();
    return 0;
}