#include <iostream>
#include "Operators.hpp"
using namespace std;

/**
 * Created by carlosjose.requena on 29/09/2025.
 * see: https://www.tutorialspoint.com/cplusplus/cpp_operators.htm
 *
 * # C++ Operators Reference
 *
 * An **operator** is a symbol that tells the compiler to perform
 * specific mathematical or logical manipulations.
 *
 * ## Categories
 * - Arithmetic Operators
 * - Relational Operators
 * - Logical Operators
 * - Bitwise Operators
 * - Assignment Operators
 * - Miscellaneous Operators
 *
 * ---
 *
 * ## 1. Arithmetic Operators
 * | Operator | Description      | Example |
 * |----------|------------------|---------|
 * | `+`      | Addition         | `A + B` |
 * | `-`      | Subtraction      | `A - B` |
 * | `*`      | Multiplication   | `A * B` |
 * | `/`      | Division         | `A / B` |
 * | `%`      | Modulus          | `B % A` |
 * | `++`     | Increment        | `A++`   |
 * | `--`     | Decrement        | `A--`   |
 *
 * Example:
 * ```cpp
 * int a = 21, b = 10;
 * std::cout << (a + b); // 31
 * ```
 *
 * ---
 *
 * ## 2. Relational Operators
 * | Operator | Description           |
 * |----------|-----------------------|
 * | `==`     | Equal to              |
 * | `!=`     | Not equal to          |
 * | `>`      | Greater than          |
 * | `<`      | Less than             |
 * | `>=`     | Greater or equal      |
 * | `<=`     | Less or equal         |
 *
 * Example:
 * ```cpp
 * if (a > b) std::cout << "a is greater";
 * ```
 *
 * ---
 *
 * ## 3. Logical Operators
 * | Operator | Description                  |
 * |----------|------------------------------|
 * | `&&`     | Logical AND                  |
 * | `||`     | Logical OR                   |
 * | `!`      | Logical NOT                  |
 *
 * Example:
 * ```cpp
 * if (a && b) std::cout << "both nonzero";
 * ```
 *
 * ---
 *
 * ## 4. Bitwise Operators
 * | Operator | Description |
 * |----------|-------------|
 * | `&`      | AND         |
 * | `|`      | OR          |
 * | `^`      | XOR         |
 * | `~`      | NOT         |
 * | `<<`     | Left shift  |
 * | `>>`     | Right shift |
 *
 * Example:
 * ```cpp
 * int a = 60, b = 13;
 * std::cout << (a & b); // 12
 * ```
 *
 * ---
 *
 * ## 5. Assignment Operators
 * | Operator | Meaning            |
 * |----------|--------------------|
 * | `=`      | Assign             |
 * | `+=`     | Add and assign     |
 * | `-=`     | Subtract and assign|
 * | `*=`     | Multiply and assign|
 * | `/=`     | Divide and assign  |
 * | `%=`     | Modulus and assign |
 *
 * Example:
 * ```cpp
 * int c = 5;
 * c += 2; // now c = 7
 * ```
 *
 * ---
 *
 * ## 6. Miscellaneous Operators
 * - `sizeof` → size of a type
 * - `?:` → ternary operator
 * - `,` → comma operator
 * - `&` → address-of
 * - `*` → pointer dereference
 * - `::` → scope resolution
 *
 * Example:
 * ```cpp
 * int x = sizeof(int);
 * int max = (a > b) ? a : b;
 * ```
 *
 * ---
 *
 * ## 7. Operator Precedence
 * Example:
 * ```cpp
 * int x = 7 + 3 * 2; // evaluates as 7 + (3*2) = 13
 * ```
 */

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