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
}