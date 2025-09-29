#include <iostream>
#include <sstream>
#include <iomanip>
#include "DataTypes.hpp"
using namespace std; // this is a using directive telling the compiler to check the std namespace when resolving identifiers with no prefix

/**
 * # C++ Data Types
 *
 * While writing programs in C++, you use **variables** to store data.
 * The choice of **data type** determines the memory size allocated and the operations allowed.
 *
 * ---
 *
 * ## 1. Primitive (Built-in) Types
 *
 * C++ provides a set of primitive types, often with modifiers (`signed`, `unsigned`, `short`, `long`).
 *
 * | Type        | Keyword         | Typical Size* | Typical Range* | Notes |
 * |-------------|-----------------|----------------|----------------|-------|
 * | Boolean     | `bool`          | 1 byte         | true / false   |       |
 * | Character   | `char`          | 1 byte         | −127 to 127 or 0 to 255 | `signed` / `unsigned` variants |
 * | Integer     | `int`           | 4 bytes        | −2,147,483,648 to 2,147,483,647 | with modifiers |
 * | Float       | `float`         | 4 bytes        | ~±3.4e−38 to ±3.4e+38 | single precision |
 * | Double      | `double`        | 8 bytes        | ~±1.7e−308 to ±1.7e+308 | double precision |
 * | Long Double | `long double`   | 12 bytes       | compiler-dependent | extended precision |
 *
 * > *Sizes and ranges vary by compiler/system.*
 *
 * ### Example
 * ```cpp
 * cout << "Size of int: " << sizeof(int) << endl;
 * ```
 *
 * ---
 *
 * ## 2. Derived Data Types
 *
 * Derived types are constructed from primitive ones:
 *
 * - **Function**
 * - **Array**
 * - **Pointer**
 * - **Reference**
 *
 * ### Example: Pointer
 * ```cpp
 * int a = 20;
 * int* p = &a;
 * cout << "Address: " << p << ", Value: " << *p << endl;
 * ```
 *
 * ---
 *
 * ## 3. User-Defined Data Types
 *
 * C++ lets programmers create their own types:
 *
 * - **Class**
 * - **Struct**
 * - **Union**
 * - **Enum**
 * - **typedef / using**
 *
 * ### Example: Class
 * ```cpp
 * class TP {
 * public:
 *     string msg;
 *     void print() { cout << msg << endl; }
 * };
 * ```
 *
 * ### Example: Enum
 * ```cpp
 * enum TP { C, Java, Python, Ruby, Kotlin };
 * TP course = Kotlin;  // course = 4
 * ```
 *
 * ### Example: Union
 * ```cpp
 * union TP {
 *     int tp1;
 *     int tp2;
 * };
 *
 * TP t;
 * t.tp1 = 2;
 * cout << "tp1: " << t.tp1 << endl;
 * t.tp2 = 4;  // overwrites tp1
 * cout << "After changing tp2, tp1: " << t.tp1 << endl;
 * ```
 *
 * ---
 *
 * ## 4. Categories Summary
 *
 * 1. **Primitive** — built-in types (`int`, `float`, `char`, …)
 * 2. **Derived** — built from primitive types (array, pointer, reference, function)
 * 3. **User-Defined** — programmer defined (`class`, `struct`, `union`, `enum`, `typedef`)
 *
 * ---
 *
 * 📖 See also: [Tutorialspoint — C++ Data Types](https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm)
 */

DataTypes::DataTypes() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout<<"DataTypes Constructor called."<<endl;
  cout << "================================" << endl;
}

DataTypes::~DataTypes() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout<<"DataTypes Destructor called."<<endl;
  cout << "================================" << endl;
}

// Here is a small C program that will print out the size of some basic C types on your machine.
void DataTypes::printDataTypes() {
    cout << "" << endl;
    cout << "================================" << endl;
    cout << "print out the size of some basic C types on your machine" << endl;
    cout << "================================" << endl;

    cout << "a char is " << sizeof(char) << " bytes" << endl;
    cout << "an int is " << sizeof(int) << " bytes" << endl;
    cout << "a float is " << sizeof(float) << " bytes" << endl;
    cout << "an double is " << sizeof(double) << " bytes" << endl;
    cout << "a short int is " << sizeof(short int) << " bytes" << endl;
    cout << "an long int is " << sizeof(long int) << " bytes" << endl;
    cout << "a  long double is " << sizeof(long double) << " bytes" << endl;
}

// Constants:
// Constants are values that do not change after they have been defined.

// Numeric Constants
//An example of an int constant is the number 1234. An example of a floating-point constant (by default typed as a double)
// is 123.4 and 1e-2. We can write numbers in octal or hexadecimal instead of decimal: octal by using a leading zero (0)
// and hexadecimal by using a leading zero-x (0x). Decimal 31 can be written as 037 in octal and 0x1f or 0X1F in hexadecimal.
// Here is some code to show how to print integers in various representations.
void DataTypes::printIntegerRepresentations() {
    cout << "" << endl;
    cout << "================================" << endl;
    cout << "print integers in various representations." << endl;
    cout << "================================" << endl;

    cout << "1984 in decimal is " << std::dec << 1984 << endl;
    cout << "1984 in octal is 0" << std::oct << 1984 << endl;
    cout << "1984 in hexadecimal is 0" << std::hex << 1984 << endl;
    cout << "0123 is octal for " << std::dec << 0123 << endl;
    cout << "0x12f is hexadecimal for " << std::dec << 0x12f << endl;
}


//Character Constants
//A character constant is written between single quotes, for example, 'x'. Characters in C are represented using integer
// values, from the ASCII character set. ASCII codes range between 0 and 255. The upper-case alphabet starts at 65 (A)
// and ends at 90 (Z); the lowercase alphabet starts at 97 (a) and ends at 122 (z). Other symbols such as ç
// (, !, tab, carriage return, etc, are also represented in the ASCII table.
//An important character constant to know about is the constant '\0' which represents the character with value zero,
// sometimes called the NULL character. We will see later when we talk about string handling in C that '\0' is used to
// terminate variable-length strings.


//String Constants
//String constants can be specified using a sequence of zero or more characters enclosed within double quotes, e.g. "C is fun".
// A string constant is technically an array of characters that is terminated by a null character '\0' at the end.
// This means that the storage required to represent a string of length n is actually n+1. Thus we can store strings of
// arbitrary length in memory as long as they are terminated by a null character (so we know when they stop).


//Enumeration Constants:
//An enumeration constant is a list of constant integer values, that you can assign to arbitrary labels. They provide a
//convenient way to associate constant values with names. For example you could store the months of the year like this:
void DataTypes::printEnumerationConstants() {
    cout << "" << endl;
    cout << "================================" << endl;
    cout << "print enumeration constants" << endl;
    cout << "================================" << endl;

    enum months {
        JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
    };
    months theMonth = JAN;
    cout << "JAN " <<  theMonth << endl;

    theMonth = FEB;
    cout << "FEB " << theMonth << endl;

    theMonth = MAR;
    cout << "MAR " << theMonth << endl;

    theMonth = APR;
    cout << "APR " <<  theMonth << endl;

    theMonth = MAY;
    cout << "MAY " <<  theMonth << endl;

    theMonth = JUN;
    cout << "JUN " <<  theMonth << endl;

    theMonth = JUL;
    cout << "JUL " <<  theMonth << endl;

    theMonth = AUG;
    cout << "AUG " <<  theMonth << endl;

    theMonth = SEP;
    cout << "SEP " <<  theMonth << endl;

    theMonth = OCT;
    cout << "OCT " << theMonth << endl;

    theMonth = NOV;
    cout << "NOV " << theMonth << endl;

    theMonth = DEC;
    cout << "DEC " << theMonth << endl;
}


// Unlike in languages like Python, R, Octave/Matlab, etc, which are dynamically typed languages, the C language is a
// statically typed language. From a practical point of view, this means in C, we have to declare, up front, the type of
// every variable we use. In languages like Python we can do crazy stuff like this:
void DataTypes::printDeclarations() {

    cout << "" << endl;
    cout << "================================" << endl;
    cout << "print declarations" << endl;
    cout << "================================" << endl;

    double a = 123.456;
    double b = 50.2;
    double c = 100.0;
    double d[] = {a, b, c};
    printf("a=%.3f, b=%.3f, c=%.3f, d=[%.3f, %.3f, %.3f]\n", a, b, c, d[0], d[1], d[2]);
}

// Expressions:
// Like in any other programming language, in C, there are a number of arithmetic relational and logical operators we can
// use to write expressions that are made up of simpler basic types.

// Arithmetic Operators
// The following binary arithmetic operators can be used in C: +, -, *, / and the modulus operator %. When writing
// arithmetic expressions we must always be aware of operator precedence, which is the order in which operators are
// applied when evaluating an expression.
// For example 4+5*6 evaluates to 34, because the * operator has precedence over the + operator, and so the expression
// is evaluated as 4 + (5*6), not (4+5)*6. My own strategy to deal with this is to always use brackets to explicitly
// denote desired precedence in arithmetic expressions. So instead of writing:
// double q = a*x*x+b*x+c;
// which is a perfectly accurate expression of the quadratic equation: ax2+bx+c
// I would rather code it like this:
// double q = (a*x*x) + (b*x) + c;
void ::DataTypes::arithmeticOperatorsExample() {

    cout << "" << endl;
    cout << "================================" << endl;
    cout << "arithmetic operators example" << endl;
    cout << "================================" << endl;

    int a = 100, b = 2, c = 25, d = 4;
    int result1, result2, result3;
    result1 = a * b + c * d;
    result2 = (a * b) + (c * d);
    result3 = a * (b + c) * d;

    cout
    << "result1=" << result1 << ", "
    << "result2=" << result2 << ", "
    << "result3=" << result3
    << endl;
}

//Relational and Logical Operators
//The relational operators are >, >=, < and <=, which all have equal precedence. There are also two equality operators: == and !=.
//There are two logical operators && (logical AND) and || (logical OR).
// By default in C, the results of relational and logical operators are evaluated to integer values: 0 for FALSE and 1 for TRUE.

//Increment and Decrement Operators
//You may come across two unusual-looking operators that may be used as a shorthand for incrementing and decrementing
// variables. The ++ and -- operators add 1 and subtract 1, respectively, from their operands. For example in the following
// code snippet, we increment the int variable a and we decrement the int variable b:
void DataTypes::incrementAndDecrementVariableExample() {
    cout << "" << endl;
    cout << "================================" << endl;
    cout << "increment and decrement variable example" << endl;
    cout << "================================" << endl;
    // When the operator (++ | --) is used before the operand this is called a prefix operator, and when
    // it is used after the operand it is called a postfix operator.

    // When using ++ and -- as a prefix operator, the increment (or decrement) happens before its value is used.
    // When using ++ and -- as a postfix operator, the increment (or decrement) happens after its value has been used. Here is a concrete example:

    int a = 0;
    int b = 0;
    cout << "postfix operator " << endl;
    cout << "a=" << a << ", b=" << b << endl;
    cout << "a++ =" << a++ << ", b-- =" << b-- << endl;

    a = 0;
    b = 0;
    cout << "prefix operator " << endl;
    cout << "a=" << a << ", b=" << b << endl;
    cout << "++a =" <<  ++a << ", --b =" << --b << endl;


}

// Type Conversions
// There are two kinds of type conversion we need to talk about: automatic or implicit type conversion and explicit type conversion.

//Implicit Type Conversion
//The operators we have looked at can deal with different types. For example we can apply the addition operator + to an
// int as well as a double. It is important to understand how operators deal with different types that appear in the same expression.
// There are rules in C that govern how operators convert different types, to evaluate the results of expressions.

//For example, when a floating-point number is assigned to an integer value in C, the decimal portion of the number gets truncated.
// On the other hand, when an integer value is assigned to a floating-point variable, the decimal is assumed as .0.

//This sort of implicit or automatic conversion can produce nasty bugs that are difficult to find, especially for example
// when performing multiplication or division using mixed types, e.g. integer and floating-point values. Here is some example
// code illustrating some of these effects:
void::DataTypes::typeConversionsExample() {
    cout << "" << endl;
    cout << "================================" << endl;
    cout << "type conversions example" << endl;
    cout << "================================" << endl;
    int a = 2;
    double b = 3.5;
    double c = a * b;
    double d = a / b;
    int e = a * b;
    int f = a / b;

    cout
    << "a=" << a << ", "
    << "b=" << setprecision(3) << fixed << b << ", "
    << "c=" << setprecision(3) << fixed << c << ", "
    << "d=" << setprecision(3) << fixed << d << ", "
    << "e=" << e << ", "
    << "f=" << f
    << endl;
}

// Explicit Type Conversion
// Type Casting: There is a mechanism in C to perform type casting, that is to force an expression to be converted to a
// particular type of our choosing. We surround the desired type in brackets and place that just before the expression
// to be coerced. Look at the following example code:

void::DataTypes::typeCastingExample() {
    cout << "" << endl;
    cout << "================================" << endl;
    cout << "type casting example" << endl;
    cout << "================================" << endl;
    int a = 2;
    int b = 3;
    cout << "a / b = " << setprecision(3) << fixed << (double) a/b << endl;
    cout << "a / b = " << setprecision(3) << fixed << (float) a/b << endl;
    cout << "a / b = " << setprecision(3) << fixed << (int) a/b << endl;
}

// String Conversion Library Functions
// There are some built-in library functions in C to perform some basic conversions between strings and numeric types.
// Two useful functions to know about convert ascii strings to numeric types: atoi() (ascii to integer) and atof() (ascii to floating-point).
// We need to #include the library stdlib.h in order to use these functions.
// To convert from numeric types to strings things are a bit more difficult. First we have to allocate space in memory to store the string.
// Then we use the sprintf() built-in function to "print" the numeric type into our string.

// Use C++ standard library std::stringstream
// Use std::stoi() function from C++ standard library since C++11.
void::DataTypes::stringConversionExample() {
    cout << "" << endl;
    cout << "================================" << endl;
    cout << "string conversion example" << endl;
    cout << "================================" << endl;

    // C Way
    cout << "C Way 1" << endl;
    char intString[] = "1234";
    char floatString[] = "328.4";
    int myInt = atoi(intString);
    double myDouble = atof(floatString);
    printf("intString=%s, floatString=%s\n", intString, floatString);
    printf("myInt=%d, myDouble=%.1f\n\n", myInt, myDouble);

    int a = 2;
    double b = 3.14;
    char myString1[64], myString2[64];
    sprintf(myString1, "%d", a);
    sprintf(myString2, "%.2f", b);
    printf("a=%d, b=%.2f\n", a, b);
    printf("myString1=%s, myString2=%s\n\n", myString1, myString2);

    // C Way
    cout << "C Way 2" << endl;
    const char base_string[] = "base_string";
    const int MAX_BUFFER_SIZE = 1000;
    char out_string [MAX_BUFFER_SIZE];
    int number = 123;
    sprintf(out_string, "%s%d", base_string, number);
    printf("out_string = %s\n\n", out_string);

    // C++ Way
    cout << "C++ Way" << endl;
    int i = 123;
    std::string out_string2;
    std::stringstream ss;
    ss << i;
    out_string2 = ss.str();
    cout << "out_string2=" << out_string2 << endl;
}