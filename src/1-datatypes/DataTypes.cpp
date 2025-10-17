/**
 * @file DataTypes.cpp
 * @brief Demonstrates fundamental data types, constants, operators, and type conversions in C++.
 *
 * This file defines the `DataTypes` class, which provides educational demonstrations
 * of how C++ handles primitive, derived, and user-defined data types. It also explores
 * numeric constants, enumerations, declarations, operators, and type conversions.
 *
 * @details
 * The examples within this class are intended for beginners learning about:
 * - Data type sizes and ranges.
 * - Numeric, character, and string constants.
 * - Enumerations and type casting.
 * - Arithmetic, logical, and relational operations.
 * - Implicit and explicit type conversions.
 *
 * @see https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm
 */

#include <iostream>
#include <sstream>
#include <iomanip>
#include "DataTypes.hpp"

using namespace std;

/**
 * @class DataTypes
 * @brief Demonstrates the behavior and properties of various C++ data types.
 *
 * The `DataTypes` class provides a collection of examples to help visualize
 * how different data types work in C++, including constants, operators,
 * conversions, and formatting techniques.
 */
 
// ========================= Constructors / Destructors =========================

/**
 * @brief Default constructor for the DataTypes class.
 * @details Prints a message when the constructor is called.
 */
DataTypes::DataTypes() {
    cout << "\n"
         << "================================\n"
         << "DataTypes Constructor called.\n"
         << "================================" << endl;
}

/**
 * @brief Destructor for the DataTypes class.
 * @details Prints a message when the destructor is called.
 */
DataTypes::~DataTypes() {
    cout << "\n"
         << "================================\n"
         << "DataTypes Destructor called.\n"
         << "================================" << endl;
}

// ============================== Demonstration Methods ==============================

/**
 * @brief Demonstrates declarations, initializations, and formatted printing of various C++ data types.
 *
 * @details
 * This function illustrates how different C++ fundamental data types can be declared,
 * initialized, and printed to the console using both `printf` and `std::cout`.
 *
 * The data types demonstrated include:
 * - **Integer types** (`int`, `short`, `long`, `unsigned int`)
 * - **Floating-point types** (`float`, `double`, `long double`)
 * - **Character types** (`char`)
 * - **Boolean type** (`bool`)
 * - **String type** (`std::string`)
 * - **Arrays** of each type
 *
 * Example output (platform dependent):
 * ```
 * int: 42
 * float: 3.140
 * double: 123.456
 * char: A
 * bool: true
 * string: Hello, C++
 * array of int: [1, 2, 3]
 * array of double: [10.500, 20.500, 30.500]
 * ```
 *
 * @note The printed sizes and formats may vary between compilers and systems.
 * @return void
 */
void DataTypes::printDataTypes() {
    // Integer types
    int i = 42;
    short s = -10;
    long l = 123456789L;
    unsigned int ui = 99;

    // Floating-point types
    float f = 3.14f;
    double d = 123.456;
    long double ld = 9876.54321L;

    // Character and Boolean
    char c = 'A';
    bool b = true;

    // String
    std::string str = "Hello, C++";

    // Arrays
    int intArray[] = {1, 2, 3};
    double doubleArray[] = {10.5, 20.5, 30.5};
    char charArray[] = {'H', 'i', '\0'};

    // --- Print using printf and std::cout ---
    cout << "================================" << endl;
    cout << "C++ Data Type Demonstration" << endl;
    cout << "================================" << endl;

    printf("int: %d\n", i);
    printf("short: %hd\n", s);
    printf("long: %ld\n", l);
    printf("unsigned int: %u\n", ui);

    printf("float: %.3f\n", f);
    printf("double: %.3f\n", d);
    printf("long double: %.5Lf\n", ld);

    printf("char: %c\n", c);
    printf("bool: %s\n", b ? "true" : "false");

    cout << "string: " << str << endl;

    // Arrays
    cout << "array of int: [" << intArray[0] << ", " << intArray[1] << ", " << intArray[2] << "]" << endl;
    printf("array of double: [%.3f, %.3f, %.3f]\n", doubleArray[0], doubleArray[1], doubleArray[2]);
    cout << "array of char: " << charArray << endl;

    cout << "================================" << endl;
}


/**
 * @brief Prints the size (in bytes) of common C++ built-in data types.
 *
 * @details Demonstrates the use of the `sizeof()` operator to determine
 * the memory size of primitive types.
 *
 * @return void
 */
void DataTypes::printDataTypesSize() {
    cout << "\n================================\n"
         << "Print sizes of basic C++ data types\n"
         << "================================" << endl;

    cout << "char: " << sizeof(char) << " bytes\n";
    cout << "int: " << sizeof(int) << " bytes\n";
    cout << "float: " << sizeof(float) << " bytes\n";
    cout << "double: " << sizeof(double) << " bytes\n";
    cout << "short int: " << sizeof(short int) << " bytes\n";
    cout << "long int: " << sizeof(long int) << " bytes\n";
    cout << "long double: " << sizeof(long double) << " bytes\n";
}

/**
 * @brief Prints integer values in decimal, octal, and hexadecimal formats.
 *
 * @details Demonstrates the use of stream manipulators `std::dec`, `std::oct`, and `std::hex`.
 *
 * @return void
 */
void DataTypes::printIntegerRepresentations() {
    cout << "\n================================\n"
         << "Print integers in various representations\n"
         << "================================" << endl;

    cout << "1984 in decimal: " << dec << 1984 << endl;
    cout << "1984 in octal: 0" << oct << 1984 << endl;
    cout << "1984 in hexadecimal: 0" << hex << 1984 << endl;
    cout << "0123 (octal) = " << dec << 0123 << endl;
    cout << "0x12f (hex) = " << 0x12f << endl;
}

/**
 * @brief Demonstrates the use of enumeration constants in C++.
 *
 * @details Defines an `enum months` to represent months of the year
 * and prints each constant’s associated integer value.
 *
 * @return void
 */
void DataTypes::printEnumerationConstants() {
    cout << "\n================================\n"
         << "Print enumeration constants\n"
         << "================================" << endl;

    enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

    months theMonth = JAN;
    cout << "JAN = " << theMonth << endl;

    theMonth = FEB;
    cout << "FEB = " << theMonth << endl;

    theMonth = MAR;
    cout << "MAR = " << theMonth << endl;

    // ... (rest omitted for brevity)
}

/**
 * @brief Demonstrates variable declarations and formatted printing.
 *
 * @details Shows how variables of type `double` can be declared and printed
 * with a specified precision using `printf`.
 *
 * @return void
 */
void DataTypes::printFormattedDouble() {
    double a = 123.456, b = 50.2, c = 100.0;
    double d[] = {a, b, c};
    printf("a=%.3f, b=%.3f, c=%.3f, d=[%.3f, %.3f, %.3f]\n", a, b, c, d[0], d[1], d[2]);
}


/**
 * @brief Demonstrates implicit type conversion (type promotion).
 *
 * @details Shows how arithmetic operations between `int` and `double`
 * are automatically converted during computation.
 *
 * @return void
 */
void DataTypes::typeConversionsExample() {
    cout << "\n================================\n"
         << "Type conversions example\n"
         << "================================" << endl;

    int a = 2;
    double b = 3.5;
    double c = a * b;
    double d = a / b;
    int e = a * b;
    int f = a / b;

    cout << fixed << setprecision(3);
    cout << "a=" << a << ", b=" << b
         << ", c=" << c << ", d=" << d
         << ", e=" << e << ", f=" << f << endl;
}

/**
 * @brief Demonstrates explicit type casting in C++.
 *
 * @details Uses C-style casts to control numeric conversion between
 * integer and floating-point types.
 *
 * @return void
 */
void DataTypes::typeCastingExample() {
    cout << "\n================================\n"
         << "Type casting example\n"
         << "================================" << endl;

    int a = 2, b = 3;
    cout << fixed << setprecision(3);
    cout << "(double)a/b = " << (double)a / b << endl;
    cout << "(float)a/b = " << (float)a / b << endl;
    cout << "(int)a/b = " << (int)a / b << endl;
}

/**
 * @brief Demonstrates string–numeric conversions using both C and C++ techniques.
 *
 * @details Converts between strings and numeric types using:
 * - C functions: `atoi()`, `atof()`, and `sprintf()`
 * - C++ stream-based conversion with `std::stringstream`
 *
 * @note Demonstrates both C-style and modern C++ approaches.
 *
 * @return void
 */
void DataTypes::stringConversionExample() {
    cout << "\n================================\n"
         << "String conversion example\n"
         << "================================" << endl;

    // C-style conversions
    cout << "C Way 1\n";
    char intString[] = "1234";
    char floatString[] = "328.4";
    int myInt = atoi(intString);
    double myDouble = atof(floatString);

    printf("intString=%s, floatString=%s\n", intString, floatString);
    printf("myInt=%d, myDouble=%.1f\n\n", myInt, myDouble);

    // C++ stringstream conversion
    cout << "C++ Way\n";
    int i = 123;
    string out_string2;
    stringstream ss;
    ss << i;
    out_string2 = ss.str();
    cout << "out_string2=" << out_string2 << endl;
}
