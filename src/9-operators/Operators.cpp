/**
 * @file Operators.cpp
 * @author Carlos José Requena
 * @date 2025-09-29
 * @see https://www.tutorialspoint.com/cplusplus/cpp_operators.htm
 *
 * @brief Comprehensive reference for C++ operators.
 *
 * @details
 * This file provides a detailed overview of the various operators available in C++,
 * grouped by category. Each operator category includes examples and usage notes.
 *
 *  Categories
 * - Arithmetic Operators
 * - Relational Operators
 * - Logical Operators
 * - Bitwise Operators
 * - Assignment Operators
 * - Miscellaneous Operators
 *
 * ---
 *
 * 1. Arithmetic Operators
 * | Operator | Description      | Example |
 * |----------|------------------|----------|
 * | `+`      | Addition         | `A + B` |
 * | `-`      | Subtraction      | `A - B` |
 * | `*`      | Multiplication   | `A * B` |
 * | `/`      | Division         | `A / B` |
 * | `%`      | Modulus          | `B % A` |
 * | `++`     | Increment        | `A++`   |
 * | `--`     | Decrement        | `A--`   |
 *
 * **Example:**
 * @code{.cpp}
 * int a = 21, b = 10;
 * std::cout << (a + b); // 31
 * @endcode
 *
 * ---
 *
 *  2. Relational Operators
 * | Operator | Description           |
 * |----------|-----------------------|
 * | `==`     | Equal to              |
 * | `!=`     | Not equal to          |
 * | `>`      | Greater than          |
 * | `<`      | Less than             |
 * | `>=`     | Greater or equal      |
 * | `<=`     | Less or equal         |
 *
 * **Example:**
 * @code{.cpp}
 * if (a > b) std::cout << "a is greater";
 * @endcode
 *
 * ---
 *
 * 3. Logical Operators
 * | Operator | Description       |
 * |----------|-------------------|
 * | `&&`     | Logical AND       |
 * | `||`     | Logical OR        |
 * | `!`      | Logical NOT       |
 *
 * **Example:**
 * @code{.cpp}
 * if (a && b) std::cout << "both nonzero";
 * @endcode
 *
 * ---
 *
 *  4. Bitwise Operators
 * | Operator | Description |
 * |----------|-------------|
 * | `&`      | AND         |
 * | `|`      | OR          |
 * | `^`      | XOR         |
 * | `~`      | NOT         |
 * | `<<`     | Left shift  |
 * | `>>`     | Right shift |
 *
 * **Example:**
 * @code{.cpp}
 * int a = 60, b = 13;
 * std::cout << (a & b); // 12
 * @endcode
 *
 * ---
 *
 * 5. Assignment Operators
 * | Operator | Meaning             |
 * |----------|---------------------|
 * | `=`      | Assign              |
 * | `+=`     | Add and assign      |
 * | `-=`     | Subtract and assign |
 * | `*=`     | Multiply and assign |
 * | `/=`     | Divide and assign   |
 * | `%=`     | Modulus and assign  |
 *
 * **Example:**
 * @code{.cpp}
 * int c = 5;
 * c += 2; // now c = 7
 * @endcode
 *
 * ---
 *
 *  6. Miscellaneous Operators
 * - `sizeof` → size of a type
 * - `?:` → ternary operator
 * - `,` → comma operator
 * - `&` → address-of
 * - `*` → pointer dereference
 * - `::` → scope resolution
 *
 * **Example:**
 * @code{.cpp}
 * int x = sizeof(int);
 * int max = (a > b) ? a : b;
 * @endcode
 *
 * ---
 *
 *  7. Operator Precedence
 * **Example:**
 * @code{.cpp}
 * int x = 7 + 3 * 2; // evaluates as 7 + (3 * 2) = 13
 * @endcode
 *
 * @note
 * Operator precedence determines the order of evaluation in expressions.
 * Use parentheses to make the intended order of operations explicit.
 */

#include <iostream>
#include "Operators.hpp"
using namespace std;



Operators::Operators() {
    cout << "\n" << endl;
    cout << "================================" << endl;
    cout << "Operators Constructor Called." << endl;
    cout << "================================" << endl;
}

Operators::~Operators() {
    cout << "\n" << endl;
    cout << "================================" << endl;
    cout << "Operators Destructor Called." << endl;
    cout << "================================" << endl;
}

/**
 * @brief Demonstrates the use of arithmetic operators in C++.
 *
 * @details
 * This example showcases the behavior of basic arithmetic operators
 * including addition, subtraction, multiplication, division, modulus,
 * increment, and decrement.
 *
 * The method defines two integer variables (`a` and `b`) and performs
 * a series of arithmetic operations, printing the result of each
 * operation to the standard output.
 *
 * **Demonstrated operators:**
 * - `+` → Addition
 * - `-` → Subtraction
 * - `*` → Multiplication
 * - `/` → Division
 * - `%` → Modulus
 * - `++` → Post-increment
 * - `--` → Post-decrement
 *
 * **Example Output:**
 * @code{.text}
 * Line 1 - Value of c is :31
 * Line 2 - Value of c is :11
 * Line 3 - Value of c is :210
 * Line 4 - Value of c is :2
 * Line 5 - Value of c is :1
 * Line 6 - Value of c is :21
 * Line 7 - Value of c is :22
 * @endcode
 *
 * @note
 * - The increment (`a++`) and decrement (`a--`) operators return the
 *   current value of `a` before modifying it.
 * - Division between integers truncates the decimal part.
 *
 * @return void This function does not return a value.
 */
void Operators::arithmeticOperatorExample() {
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    cout << "Line 1 - Value of c is :" << c << endl;

    c = a - b;
    cout << "Line 2 - Value of c is :" << c << endl;

    c = a * b;
    cout << "Line 3 - Value of c is :" << c << endl;

    c = a / b;
    cout << "Line 4 - Value of c is :" << c << endl;

    c = a % b;
    cout << "Line 5 - Value of c is :" << c << endl;

    c = a++;
    cout << "Line 6 - Value of c is :" << c << endl;

    c = a--;
    cout << "Line 7 - Value of c is :" << c << endl;
}


/**
 * @brief Demonstrates arithmetic operator precedence in C++.
 *
 * @details Evaluates expressions with different parentheses to illustrate
 * how operator precedence affects computation results.
 *
 * @return void
 */
void Operators::arithmeticOperatorPrecedenceExample() {
    int a = 100, b = 2, c = 25, d = 4;
    int result1 = a * b + c * d;
    int result2 = (a * b) + (c * d);
    int result3 = a * (b + c) * d;
    cout << "result1=" << result1 << ", result2=" << result2 << ", result3=" << result3 << endl;
}



/**
 * @brief Demonstrates the prefix and postfix increment/decrement operators.
 *
 * @details Shows how the placement of the `++` and `--` operators affects
 * evaluation order and variable results.
 *
 * @return void
 */
void Operators::incrementDecrementOperatorsExample() {
    int a = 0, b = 0;

    cout << "Postfix operator:\n";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "a++ = " << a++ << ", b-- = " << b-- << endl;

    a = 0; b = 0;
    cout << "\nPrefix operator:\n";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "++a = " << ++a << ", --b = " << --b << endl;
}