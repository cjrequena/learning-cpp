cmake_minimum_required(VERSION 3.14)
project(cpp_exercises)

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
)
