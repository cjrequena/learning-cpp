//
// Created by Carlos José Requena Jiménez on 5/10/25.
//
#include <iostream>
#include "0-helloworld/HelloWorld.hpp"
#include "files/Files.h"

using namespace std;

int main() {
    HelloWorld helloWorld;
    helloWorld.sayHelloWorld();

    //------------------------------------------------------------------------------------------------------------------

    Files files;
    files.fstreamWriteOnNewFile();
    files.fstreamAppendOnExistingFile();
    files.fstreamReadOnExistingFile();
    files.ofstreamWriteOnNewFile();
    files.ofstreamAppendOnExistingFile();
    files.ifstreamReadOnExistingFile();

    return 0;
}