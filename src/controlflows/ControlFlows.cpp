//
// Created by carlosjose.requena on 13/08/2019.
//
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <random>
#include <time.h>
#include "ControlFlows.hpp"
using namespace std; // this is a using directive telling the compiler to check the std namespace when resolving identifiers with no prefix

ControlFlows::ControlFlows() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "ControlFlows Constructor called." << endl;
  cout << "================================" << endl;
}

ControlFlows::~ControlFlows() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "ControlFlows Destructor called." << endl;
  cout << "================================" << endl;
}

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

void::ControlFlows::forLoopExample() {
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

  int y = (p * (n + p)) / 2; // Carl Gauss formula
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

void ::ControlFlows::whileLoopExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "while loop example" << endl;
  cout << "================================" << endl;
  // Local variable declaration:
  int a = 10;
  // while loop execution
  while (a < 20) {
    cout << "value of a: " << a << endl;
    a++;
  }
  cout << "\n\n" << endl;

  // another while loop
  int number = 0;
  while (number != 999) {
    printf("Enter an integer or 999 to stop: ");
    scanf("%i", &number);
    printf("%d x 10 = %d\n", number, number * 10);
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
void ::ControlFlows::doWhileLoopExample() {
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
  } while (a < 20);
  cout << "\n\n" << endl;

  // another do-while loop
  int number = 0;
  do {
    printf("Enter an integer or 0 to stop: ");
    scanf("%i", &number);
    printf("%d x 10 = %d\n", number, number * 10);
  } while (number != 999);
}

// Nested loops:
// A loop can be nested inside of another loop. C++ allows at least 256 levels of nesting.

// The syntax for a nested for loop statement in C++ is as follows −
//for ( init; condition; increment ) {
//for ( init; condition; increment ) {
//statement(s);
//}
//statement(s); // you can put more statements.
//}

//The syntax for a nested while loop statement in C++ is as follows −
//while(condition) {
//while(condition) {
//statement(s);
//}
//statement(s); // you can put more statements.
//}

//The syntax for a nested do...while loop statement in C++ is as follows −
//do {
//statement(s); // you can put more statements.
//do {
//statement(s);
//} while( condition );
//
//} while( condition );

void ::ControlFlows::nestedLoopExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "nested loop example" << endl;
  cout << "================================" << endl;
  int i, j;
  for (i = 2; i < 100; i++) {
    for (j = 2; j <= (i / j); j++)
      if (!(i % j)) break; // if factor found, not prime
    if (j > (i / j)) cout << i << " is prime\n";
  }
}

//  Break statement:
//  The break statement has the following two usages in C++ −
//  When the break statement is encountered inside a loop, the loop is immediately terminated and program control resumes
//  at the next statement following the loop.
//  It can be used to terminate a case in the switch statement (covered in the next chapter).
//  If you are using nested loops (i.e., one loop inside another loop), the break statement will stop the execution of
//  the innermost loop and start executing the next line of code after the block.
//  Syntax
//  The syntax of a break statement in C++ is −
//  break;
// see: https://www.tutorialspoint.com/cplusplus/cpp_break_statement.htm
void ::ControlFlows::breakStatementExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "break statement example" << endl;
  cout << "================================" << endl;
  // Local variable declaration:
  int a = 10;
  // do loop execution
  do {
    cout << "value of a: " << a << endl;
    a = a + 1;
    if (a > 15) {
      // terminate the loop
      break;
    }
  } while (a < 20);
}

// Continue statement
// The continue statement works somewhat like the break statement. Instead of forcing termination, however, continue
// forces the next iteration of the loop to take place, skipping any code in between.
// For the for loop, continue causes the conditional test and increment portions of the loop to execute. For the while
// and do...while loops, program control passes to the conditional tests.
// The syntax of a continue statement in C++ is −
// continue;
// see: https://www.tutorialspoint.com/cplusplus/cpp_continue_statement.htm
void ::ControlFlows::continueStatementExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "continue statement example" << endl;
  cout << "================================" << endl;
  // Local variable declaration:
  int a = 10;
  // do loop execution
  do {
    if (a == 15) {
      // skip the iteration.
      a = a + 1;
      continue;
    }
    cout << "value of a: " << a << endl;
    a = a + 1;
  } while (a < 20);
}

// Goto statement:
// A goto statement provides an unconditional jump from the goto to a labeled statement in the same function.
// NOTE − Use of goto statement is highly discouraged because it makes difficult to trace the control flow of a program,
// making the program hard to understand and hard to modify. Any program that uses a goto can be rewritten so that it doesn't need the goto.
// The syntax of a goto statement in C++ is −
// goto label;
// ..
// .
// label: statement;
// Where label is an identifier that identifies a labeled statement. A labeled statement is any statement that is preceded
// by an identifier followed by a colon (:).
// see: https://www.tutorialspoint.com/cplusplus/cpp_goto_statement.htm
void  ControlFlows::gotoStatementExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "goto statement example" << endl;
  cout << "================================" << endl;
  // Local variable declaration:
  int a = 10;
  // do loop execution
  LOOP:
  do {
    if (a == 15) {
      // skip the iteration.
      a = a + 1;
      goto LOOP;
    }
    cout << "value of a: " << a << endl;
    a = a + 1;
  } while (a < 20);
}

// Conditionals:
// One of the most important constructs in programming is the ability to execute (or not execute) pieces of code, or
// execute different pieces of code, depending on the outcome of some decision or question about data. The if-else
// construct lets us to this in C.

// If Statement:
// The basic if statement looks like this:
//
// if (conditional_expression) {
//  program_statements;
// }
// The program_statements are only executed if the conditional_expression returns a non-zero value, i.e. if it returns a value that is not FALSE (FALSE = zero).
void ::ControlFlows::ifStatementExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "if statement example" << endl;
  cout << "================================" << endl;
  int i;
  for (i = 1; i <= 10; i++) {
    if ((i % 2) != 0) {
      printf("%d is odd\n", i);
    }
  }
}

// Else:
// We can add an else to our if statement, to execute a different code block if the value of the conditional_expression
// is zero:
void ::ControlFlows::elseStatementExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "else statement example" << endl;
  cout << "================================" << endl;
  int i;
  for (i = 1; i <= 10; i++) {
    if ((i % 2) != 0) {
      printf("%d is odd\n", i);
    } else {
      printf("%d is even\n", i);
    }
  }
}

// Else If
// You can string together several conditional tests and execute different pieces of code by using the else if construct.
// Here is a simple program that asks the user to enter an integer, and prints to the screen whether that integer is
// positive, negative, or zero:
void ::ControlFlows::elseIfStatementExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "else if statement example" << endl;
  cout << "================================" << endl;
  int number;
  printf("enter an integer: ");
  scanf("%i", &number);
  if (number < 0) {
    printf("the integer %d is negative\n", number);
  } else if (number > 0) {
    printf("the integer %d is positive\n", number);
  } else if (number == 0) {
    printf("the integer %d is zero\n", number);
  } else {
    printf("this statement should never be executed!\n");
  }
}

// The Conditional Operator
// There is a convenient shorthand for simple if-else constructs, using the so-called conditional operator:
// condition ? expression1 : expression2
// It enables you to shorten your code a bit, but that's all. It doesn't give you any additional functionality,
// it's just a shorthand:
void  ControlFlows::conditionalOperatorExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "conditional operator example" << endl;
  cout << "================================" << endl;
  int i;
  for (i = 1; i <= 10; i++) {
    (i % 2) ? printf("%d is odd\n", i) : printf("%d is even\n", i);
  }
}

// Switch
// The case of multiple if-else statements strung together to test for different values, and execute different code, is
// common enough that there is a special construct called the switch statement that is provided for this case:
void ::ControlFlows::switchStatementExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "switch statement example" << endl;
  cout << "================================" << endl;
  int min = 0;
  int max = 100;
  std::mt19937 rng(time(NULL));
  std::uniform_int_distribution<int> gen(min, max); // uniform, unbiased
  int number = gen(rng);
  switch (number) {
    case 1:
      cout << "case 1" << endl;
      break;
    case 2:
      cout << "case 2" << endl;
      break;
    case 3:
      cout << "case 3" << endl;
      break;
    default:
      cout << "case default " << number << endl;
      break;
  }
}