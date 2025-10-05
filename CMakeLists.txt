cmake_minimum_required(VERSION 4.0)
project(learning_cpp)

set(CMAKE_CXX_STANDARD 23)

include_directories(src)
include_directories(tests)

add_executable(
        learning_cpp
        src/Main.cpp
        
        src/0-helloworld/HelloWorld.cpp
        src/0-helloworld/HelloWorld.hpp

        src/1-datatypes/DataTypes.cpp
        src/1-datatypes/DataTypes.hpp
        
        src/2-controlflows/ControlFlows.cpp
        src/2-controlflows/ControlFlows.hpp
        
        src/3-functions/Functions.cpp
        src/3-functions/Functions.hpp
        
        src/4-modifiertypes/ModifierTypes.cpp
        src/4-modifiertypes/ModifierTypes.hpp
        
        src/5-numbers/Numbers.cpp
        src/5-numbers/Numbers.hpp
        
        src/6-arrays/Arrays.cpp
        src/6-arrays/Arrays.hpp

        src/7-strings/Strings.cpp
        src/7-strings/Strings.hpp

        src/8-datetime/DateTime.cpp
        src/8-datetime/DateTime.hpp

        src/9-operators/Operators.cpp
        src/9-operators/Operators.hpp

        src/pointers/Pointers.cpp
        src/pointers/Pointers.hpp

        src/references/References.cpp
        src/references/References.hpp
        
        src/storageclasses/StorageClasses.cpp
        src/storageclasses/StorageClasses.hpp
        
)
