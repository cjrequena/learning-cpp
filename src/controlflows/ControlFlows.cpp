//
// Created by carlosjose.requena on 13/08/2019.
//
#include <stdio.h>
#include <iostream>
#include <sstream>
#include "ControlFlows.hpp"
using namespace std; // this is a using directive telling the compiler to check the std namespace when resolving identifiers with no prefix


//Loops:
//One of the most useful properties of progammable computers is that you can ask them to repeat a calculation and/or
//operation many many times, and they will not (usually) complain. The looping constructs in C allow us to repeatedly
//execute a block of code many times, without having to manually re-type or re-list the code by hand.

//For Loop:
//A generic for-loop looks like this:
//for (init_expression; loop_condition; loop_expression) {
//program_statements
//}

// The three expressions inside the round brackets set up the environment for the loop. The init_expression is executed
// before the loop starts and is typically where you define some initial value that will change each time through the loop.
// The loop_condition is an expression that determines whether the loop should continue, or stop. Of course if you don't
// specify a condition under which the loop should stop, it never will, and you will have an endless loop and your program
// will never terminate. The loop_expression specifies code that is executed each time through the loop, after the body
// of the loop is executed. This is all very abstract, so let's see a concrete example, by coding a loop to implement
// the cumulative sum as above.

// see: https://www.tutorialspoint.com/cplusplus/cpp_for_loop.htm

void ::ControlFlows::forLoopExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "for loop example" << endl;
  cout << "================================" << endl;

  int cumsum = 0;
  int i;
  for (i = 1; i <= 100; i++) {
    cumsum = cumsum + i;
  }
  printf("the cumulative sum up to 100 is %d\n", cumsum);

  // A most efficient way
  int n = 1;
  int p = 100;
  int x = n * (p * (p + 1)) / 2;
  printf("%d\n", x);

  int y = (p * (n + p) ) / 2; // Carl Gauss formula
  printf("%d\n", y);
}

// While Loop:
// The while-loop is another looping construct that you might find more appropriate than a for-loop under some circumstances.
// A while-loop looks like this:
//while (conditional_expression) {
//program_statements;
//}
// The while-loop will first check the value of the conditional_expression, and if it is not FALSE (i.e. if the expression
// returns a non-zero (non-FALSE) result, the program_statement (or multiple statements) will be executed once. Afterwards
// the conditional_expression will be evaluated again, and if it returns a non-zero result, the program_statment (or multiple statements)
// will be executed again, and so on. The while-loop will stop only when the conditional_expression returns zero.
// see: https://www.tutorialspoint.com/cplusplus/cpp_while_loop.htm

void::ControlFlows::whileLoopExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "while loop example" << endl;
  cout << "================================" << endl;
  // Local variable declaration:
  int a = 10;
  // while loop execution
  while( a < 20 ) {
    cout << "value of a: " << a << endl;
    a++;
  }
  cout << "\n\n" << endl;

  // another while loop
  int number = 0;
  while(number != 999) {
    printf("Enter an integer or 999 to stop: ");
    scanf ("%i", &number);
    printf("%d x 10 = %d\n", number, number*10);
  }
}

//Do-While Loop
// There is another version of a while-loop that is essentially the same as a while-loop but it reverses the order of the
// program_statement and conditional_expression.
// Unlike for and while loops, which test the loop condition at the top of the loop, the do...while loop checks its condition at the bottom of the loop.
// A do...while loop is similar to a while loop, except that a do...while loop is guaranteed to execute at least one time.
// The syntax of a do...while loop in C++ is −
//do {
//statement(s);
//}
//while( condition );
//see: https://www.tutorialspoint.com/cplusplus/cpp_do_while_loop.htm
void::ControlFlows::doWhileExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "do-while loop example" << endl;
  cout << "================================" << endl;
  // Local variable declaration:
  int a = 10;
  // do loop execution
  do {
    cout << "value of a: " << a << endl;
    a = a + 1;
  } while( a < 20 );
  cout << "\n\n" << endl;

  // another do-while loop
  int number = 0;
  do {
    printf("Enter an integer or 999 to stop: ");
    scanf ("%i", &number);
    printf("%d x 10 = %d\n", number, number*10);
  }
  while (number != 999);

}