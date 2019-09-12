cmake_minimum_required(VERSION 3.14)
project(learning-cpp)

set(CMAKE_CXX_STANDARD 17)

#include_directories(build)
#include_directories(doc)
#include_directories(include)
include_directories(src)
include_directories(test)

add_executable(
        cpp_exercises
        src/Main.cpp
        src/helloworld/HelloWorld.cpp
        src/helloworld/HelloWorld.hpp
        src/datatypes/DataTypes.cpp
        src/datatypes/DataTypes.hpp
        src/controlflows/ControlFlows.cpp
        src/controlflows/ControlFlows.hpp
        src/pointers/Pointers.cpp
        src/pointers/Pointers.hpp
        src/functions/Functions.cpp
        src/functions/Functions.hpp
        src/storageclasses/StorageClasses.cpp
        src/storageclasses/StorageClasses.hpp
        src/modifiertypes/ModifierTypes.cpp
        src/modifiertypes/ModifierTypes.hpp
        src/numbers/Numbers.cpp src/numbers/Numbers.hpp
        src/arrays/Arrays.cpp src/arrays/Arrays.hpp src/strings/Strings.cpp src/strings/Strings.hpp)
