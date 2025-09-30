//
// Created by carlosjose.requena on 13/08/2019.
//

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <random>
#include <time.h>
#include "ControlFlows.hpp"
using namespace std;

/**
 * # Loops in C++
 *
 * One of the most useful properties of programmable computers is that you can ask them to **repeat a calculation
 * or operation many times**, and they will not (usually) complain.  
 *
 * The **looping constructs** in C++ allow us to repeatedly execute a block of code without having to manually
 * re-type or duplicate the code.
 *
 * ---
 *
 * ## `for` Loop
 *
 * A generic **for loop** looks like this:
 *
 * ```cpp
 * for (init_expression; loop_condition; loop_expression) {
 *     program_statements;
 * }
 * ```
 *
 * ### Components
 * - **`init_expression`**  
 *   Executed once before the loop starts.  
 *   Typically used to define and initialize a loop counter variable.
 *
 * - **`loop_condition`**  
 *   Evaluated before each iteration.  
 *   If `true`, the loop body executes. If `false`, the loop stops.  
 *   ⚠️ If you never provide a stopping condition, you’ll create an **infinite loop**.
 *
 * - **`loop_expression`**  
 *   Executed after each iteration of the loop body.  
 *   Typically used to update the loop counter.
 *
 * ---
 *
 * ## Example: Cumulative Sum
 *
 * ```cpp
 * #include <iostream>
 * using namespace std;
 *
 * int main() {
 *     int sum = 0;
 *
 *     for (int i = 1; i <= 10; i++) {
 *         sum += i;
 *     }
 *
 *     cout << "Cumulative sum of 1 to 10 is: " << sum << endl;
 *     return 0;
 * }
 * ```
 *
 * **Output:**
 * ```
 * Cumulative sum of 1 to 10 is: 55
 * ```
 *
 * ---
 *
 * 📖 See also: [Tutorialspoint — C++ For Loop](https://www.tutorialspoint.com/cplusplus/cpp_for_loop.htm)
 */

void::ControlFlows::forLoopExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "for loop example" << endl;
  cout << "================================" << endl;

  int cumSum = 0;
  int i;
  for (i = 1; i <= 100; i++) {
    cumSum = cumSum + i;
  }
  cout << "the cumulative sum up to 100 is " << cumSum << endl;

  // A most efficient way
  int n = 1;
  int p = 100;
  int x = n * (p * (p + 1)) / 2;
  cout << x << endl;

  int y = (p * (n + p)) / 2; // Carl Gauss formula
  cout << y << endl;
}

/**
 * # While Loop in C++
 *
 * The **while-loop** is another looping construct that can be more appropriate than a `for` loop in certain situations.
 * 
 * A generic while-loop looks like this:
 *
 * ```cpp
 * while (conditional_expression) {
 *     program_statements;
 * }
 * ```
 *
 * ### How it works
 * 1. The loop first evaluates the `conditional_expression`.  
 * 2. If the expression is **non-zero** (true), the loop body executes once.  
 * 3. After executing the body, the `conditional_expression` is evaluated again.  
 * 4. Steps 2–3 repeat until the expression evaluates to **zero** (false).  
 *
 * ⚠️ The loop will **stop only when the conditional_expression returns zero**.  
 * If the expression never becomes zero, the loop will run **indefinitely** (infinite loop).
 *
 * ---
 *
 * ## Example: Print numbers 1 to 5
 *
 * ```cpp
 * #include <iostream>
 * using namespace std;
 *
 * int main() {
 *     int i = 1;
 *     while (i <= 5) {
 *         cout << i << " ";
 *         i++;
 *     }
 *     cout << endl;
 *     return 0;
 * }
 * ```
 *
 * **Output:**
 * ```
 * 1 2 3 4 5
 * ```
 *
 * ---
 *
 * 📖 See also: [Tutorialspoint — C++ While Loop](https://www.tutorialspoint.com/cplusplus/cpp_while_loop.htm)
 */

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
  int number = -1;
  while (number != 0) {
    cout << "Enter an integer or 0 to stop: " << endl;
    scanf("%i", &number);
    cout << number << " x 10 = " << number * 10 << endl;
  }
}

/**
 * # Do-While Loop in C++
 *
 * The **do…while loop** is a variant of the while-loop that **reverses the order** of execution:
 * the loop body executes first, and the condition is checked afterward.
 *
 * Unlike `for` and `while` loops, which tests the loop condition at the **top** of the loop,
 * a `do…while` loop checks its condition at the **bottom**.  
 * This guarantees that the loop body executes **at least once**, even if the condition is initially false.
 *
 * ---
 *
 * ## Syntax
 *
 * ```cpp
 * do {
 *     statement(s);
 * } while (condition);
 * ```
 *
 * ### How it works
 * 1. Execute the statements inside the `do` block.  
 * 2. Evaluate the `condition`.  
 * 3. If the condition is **true** (non-zero), repeat step 1.  
 * 4. If the condition is **false** (zero), exit the loop.
 *
 * ---
 *
 * ## Example: Print numbers 1 to 5
 *
 * ```cpp
 * #include <iostream>
 * using namespace std;
 *
 * int main() {
 *     int i = 1;
 *     do {
 *         cout << i << " ";
 *         i++;
 *     } while (i <= 5);
 *     cout << endl;
 *     return 0;
 * }
 * ```
 *
 * **Output:**
 * ```
 * 1 2 3 4 5
 * ```
 *
 * ---
 *
 * 📖 See also: [Tutorialspoint — C++ Do-While Loop](https://www.tutorialspoint.com/cplusplus/cpp_do_while_loop.htm)
 */
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
  int number = -1;
  do {
    cout << "Enter an integer or 0 to stop: " << endl;
    scanf("%i", &number);
    cout << number << " x 10 = " << number * 10 << endl;
  } while (number != 0);
}


/**
 * # Nested Loops in C++
 *
 * In C++, a loop can be **nested inside another loop**.  
 * Nested loops allow you to perform repeated operations within repeated operations.  
 * C++ allows at least **256 levels of nesting**, though excessive nesting is usually discouraged.
 *
 * ---
 *
 * ## Nested `for` Loop
 *
 * ```cpp
 * for (init1; condition1; increment1) {
 *     for (init2; condition2; increment2) {
 *         statement(s);
 *     }
 *     statement(s); // Additional statements
 * }
 * ```
 *
 * Example: Print a 3x3 multiplication table
 *
 * ```cpp
 * for (int i = 1; i <= 3; i++) {
 *     for (int j = 1; j <= 3; j++) {
 *         std::cout << i * j << " ";
 *     }
 *     std::cout << std::endl;
 * }
 * ```
 *
 * ---
 *
 * ## Nested `while` Loop
 *
 * ```cpp
 * while (condition1) {
 *     while (condition2) {
 *         statement(s);
 *     }
 *     statement(s); // Additional statements
 * }
 * ```
 *
 * Example: Print numbers 1 to 3, three times
 *
 * ```cpp
 * int i = 1;
 * while (i <= 3) {
 *     int j = 1;
 *     while (j <= 3) {
 *         std::cout << j << " ";
 *         j++;
 *     }
 *     std::cout << std::endl;
 *     i++;
 * }
 * ```
 *
 * ---
 *
 * ## Nested `do…while` Loop
 *
 * ```cpp
 * do {
 *     statement(s); // Additional statements
 *     do {
 *         statement(s);
 *     } while (condition2);
 * } while (condition1);
 * ```
 *
 * Example: Print numbers 1 to 3, two times using `do…while`
 *
 * ```cpp
 * int i = 1;
 * do {
 *     int j = 1;
 *     do {
 *         std::cout << j << " ";
 *         j++;
 *     } while (j <= 3);
 *     std::cout << std::endl;
 *     i++;
 * } while (i <= 2);
 * ```
 */
void ::ControlFlows::nestedLoopExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "nested loop example" << endl;
  cout << "================================" << endl;
  int i, j;
  for (int i = 2; i < 100; ++i) {
      bool isPrime = true;

      // Only check divisors up to sqrt(i)
      for (int j = 2; j <= std::sqrt(i); ++j) {
          if (i % j == 0) {
              isPrime = false;
              break;
          }
      }

      if (isPrime) {
          std::cout << i << " is prime\n";
      }
  }
}

/**
 * # Break Statement in C++
 *
 * The `break` statement is used to **terminate a loop or switch statement immediately**.
 * When encountered, program control resumes at the next statement following the loop or switch.
 *
 * ---
 *
 * ## Usages
 * 1. **Inside a loop (`for`, `while`, `do…while`)**  
 *    Stops the execution of the **innermost loop** immediately and continues with the next statement after the loop.
 *
 * 2. **Inside a `switch` statement**  
 *    Terminates the current `case` and exits the switch block.  
 *
 * ---
 *
 * ## Syntax
 *
 * ```cpp
 * break;
 * ```
 *
 * ---
 *
 * ## Example 1: Using break in a `for` loop
 *
 * ```cpp
 * for (int i = 1; i <= 10; i++) {
 *     if (i == 5) {
 *         break; // terminate loop when i is 5
 *     }
 *     std::cout << i << " ";
 * }
 * ```
 *
 * **Output:**
 * ```
 * 1 2 3 4
 * ```
 *
 * ---
 *
 * ## Example 2: Using break in a nested loop
 *
 * ```cpp
 * for (int i = 1; i <= 3; i++) {
 *     for (int j = 1; j <= 3; j++) {
 *         if (j == 2) break; // stops inner loop only
 *         std::cout << "(" << i << "," << j << ") ";
 *     }
 *     std::cout << std::endl;
 * }
 * ```
 *
 * **Output:**
 * ```
 * (1,1) 
 * (2,1) 
 * (3,1) 
 * ```
 *
 * ---
 *
 * 📖 See also: [Tutorialspoint — C++ Break Statement](https://www.tutorialspoint.com/cplusplus/cpp_break_statement.htm)
 */
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

/**
 * # Continue Statement in C++
 *
 * The `continue` statement is similar to the `break` statement, but instead of terminating the loop, it **skips
 * the remaining code in the current iteration** and moves to the **next iteration**.
 *
 * ---
 *
 * ## Behavior
 * - **`for` loop:**  
 *   Executes the **increment** and **conditional tests** of the loop immediately after `continue`.
 *
 * - **`while` / `do…while` loops:**  
 *   Control passes to the **conditional tests** immediately, skipping the rest of the loop body.
 *
 * ---
 *
 * ## Syntax
 *
 * ```cpp
 * continue;
 * ```
 *
 * ---
 *
 * ## Example 1: Using continue in a `for` loop
 *
 * ```cpp
 * for (int i = 1; i <= 5; i++) {
 *     if (i == 3) continue; // skip when i is 3
 *     std::cout << i << " ";
 * }
 * ```
 *
 * **Output:**
 * ```
 * 1 2 4 5
 * ```
 *
 * ---
 *
 * ## Example 2: Using continue in a `while` loop
 *
 * ```cpp
 * int i = 0;
 * while (i < 5) {
 *     i++;
 *     if (i == 3) continue; // skip printing 3
 *     std::cout << i << " ";
 * }
 * ```
 *
 * **Output:**
 * ```
 * 1 2 4 5
 * ```
 *
 * ---
 *
 * 📖 See also: [Tutorialspoint — C++ Continue Statement](https://www.tutorialspoint.com/cplusplus/cpp_continue_statement.htm)
 */
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

/**
 * # Goto Statement in C++
 *
 * The `goto` statement provides an **unconditional jump** from the `goto` to a labeled statement in the **same function**.
 *
 * ⚠️ **Note:** The use of `goto` is highly discouraged because it makes the program's **control flow difficult to follow**, 
 * which can make programs **hard to understand and maintain**. Almost any program using `goto` can be rewritten without it.
 *
 * ---
 *
 * ## Syntax
 *
 * ```cpp
 * goto label;
 * ...
 * label: statement;
 * ```
 *
 * - `label` is an identifier for the labeled statement.  
 * - A **labeled statement** is any statement preceded by an identifier followed by a colon (`:`).
 *
 * ---
 *
 * ## Example: Using goto
 *
 * ```cpp
 * #include <iostream>
 * using namespace std;
 *
 * int main() {
 *     int i = 0;
 * 
 * start: // label
 *     cout << i << " ";
 *     i++;
 *     if (i < 5) goto start; // jump back to the label
 *
 *     cout << "\nDone!" << endl;
 *     return 0;
 * }
 * ```
 *
 * **Output:**
 * ```
 * 0 1 2 3 4 
 * Done!
 * ```
 *
 * ---
 *
 * 📖 See also: [Tutorialspoint — C++ Goto Statement](https://www.tutorialspoint.com/cplusplus/cpp_goto_statement.htm)
 */
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

/**
 * # Conditional Statements in C++
 *
 * One of the most important constructs in programming is the ability to **execute (or skip) pieces of code**, or 
 * **choose between different pieces of code**, depending on the outcome of a decision or a condition.  
 * In C++, this is primarily done using **if**, **if-else**, and **switch** statements.
 *
 * ---
 *
 * ## `if` Statement
 *
 * The basic `if` statement looks like this:
 *
 * ```cpp
 * if (conditional_expression) {
 *     program_statements;
 * }
 * ```
 *
 * - `program_statements` are executed **only if** `conditional_expression` evaluates to **non-zero (true)**.  
 * - In C++, **FALSE** is represented by `0`, and **TRUE** is any non-zero value.
 *
 * ---
 *
 * ## Example 1: Basic if
 *
 * ```cpp
 * #include <iostream>
 * using namespace std;
 *
 * int main() {
 *     int x = 10;
 *
 *     if (x > 5) {
 *         cout << "x is greater than 5" << endl;
 *     }
 *
 *     return 0;
 * }
 * ```
 *
 * **Output:**
 * ```
 * x is greater than 5
 * ```
 *
 * ---
 *
 * 📖 See also: [Tutorialspoint — C++ If Statement](https://www.tutorialspoint.com/cplusplus/cpp_if_statement.htm)
 */
void ::ControlFlows::ifStatementExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "if statement example" << endl;
  cout << "================================" << endl;
  int i;
  for (i = 1; i <= 10; i++) {
    if ((i % 2) != 0) {
      cout << i << " is odd" << endl;
    }
  }
}

/**
 * # Else Statement in C++
 *
 * We can add an `else` block to an `if` statement to **execute a different code block** if the condition evaluates to **false** (zero).
 *
 * ---
 *
 * ## Syntax
 *
 * ```cpp
 * if (conditional_expression) {
 *     // executed if condition is true (non-zero)
 *     program_statements;
 * } else {
 *     // executed if condition is false (zero)
 *     alternative_statements;
 * }
 * ```
 *
 * ---
 *
 * ## Example: Using if-else
 *
 * ```cpp
 * #include <iostream>
 * using namespace std;
 *
 * int main() {
 *     int x = 3;
 *
 *     if (x > 5) {
 *         cout << "x is greater than 5" << endl;
 *     } else {
 *         cout << "x is not greater than 5" << endl;
 *     }
 *
 *     return 0;
 * }
 * ```
 *
 * **Output:**
 * ```
 * x is not greater than 5
 * ```
 *
 * ---
 *
 * 📖 See also: [Tutorialspoint — C++ Else Statement](https://www.tutorialspoint.com/cplusplus/cpp_if_statement.htm)
 */
void ::ControlFlows::elseStatementExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "else statement example" << endl;
  cout << "================================" << endl;
  int i;
  for (i = 1; i <= 10; i++) {
    if ((i % 2) != 0) {
      cout << i << " is odd" << endl;
    } else {
      cout << i << " is even" << endl;
    }
  }
}

/**
 * # Else-If Statement in C++
 *
 * The `else if` construct allows you to **string together multiple conditional tests** and execute different pieces of code based on which condition is true.
 *
 * ---
 *
 * ## Syntax
 *
 * ```cpp
 * if (condition1) {
 *     // executed if condition1 is true
 * } else if (condition2) {
 *     // executed if condition2 is true
 * } else {
 *     // executed if none of the above conditions are true
 * }
 * ```
 *
 * ---
 *
 * ## Example: Checking if a number is positive, negative, or zero
 *
 * ```cpp
 * #include <iostream>
 * using namespace std;
 *
 * int main() {
 *     int number;
 *     cout << "Enter an integer: ";
 *     cin >> number;
 *
 *     if (number > 0) {
 *         cout << "The number is positive." << endl;
 *     } else if (number < 0) {
 *         cout << "The number is negative." << endl;
 *     } else {
 *         cout << "The number is zero." << endl;
 *     }
 *
 *     return 0;
 * }
 * ```
 *
 * **Sample Output:**
 * ```
 * Enter an integer: -7
 * The number is negative.
 * ```
 *
 * ---
 *
 * 📖 See also: [Tutorialspoint — C++ Else-If Statement](https://www.tutorialspoint.com/cplusplus/cpp_if_statement.htm)
 */
void ::ControlFlows::elseIfStatementExample() {
  cout << "" << endl;
  cout << "================================" << endl;
  cout << "else if statement example" << endl;
  cout << "================================" << endl;
  int number;
 cout << "enter an integer: " << endl;
  scanf("%i", &number);
  if (number < 0) {
    cout << "the integer " << number << " is negative" << endl;
  } else if (number > 0) {
    cout << "the integer " << number << " is positive" << endl;
  } else if (number == 0) {
    cout << "the integer " << number << " is zero" << endl;
  } else {
    cout << "this statement should never be executed!" << endl;
  }
}

/**
 * # Conditional (Ternary) Operator in C++
 *
 * The **conditional operator** provides a convenient shorthand for simple `if-else` constructs.  
 * It has the following syntax:
 *
 * ```cpp
 * condition ? expression1 : expression2
 * ```
 *
 * - If `condition` evaluates to **true**, `expression1` is executed.  
 * - If `condition` evaluates to **false**, `expression2` is executed.  
 *
 * ⚠️ This operator does **not add functionality**; it simply **shortens code**.
 *
 * ---
 *
 * ## Example: Determine if a number is even or odd
 *
 * ```cpp
 * #include <iostream>
 * using namespace std;
 *
 * int main() {
 *     int num = 7;
 *     string result = (num % 2 == 0) ? "Even" : "Odd";
 *     cout << num << " is " << result << endl;
 *     return 0;
 * }
 * ```
 *
 * **Output:**
 * ```
 * 7 is Odd
 * ```
 *
 * ---
 *
 * 📖 See also: [Tutorialspoint — C++ Conditional Operator](https://www.tutorialspoint.com/cplusplus/cpp_conditional_operator.htm)
 */
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

/**
 * # Switch Statement in C++
 *
 * When you have **multiple `if-else` statements** that tests different values of the same variable,
 * a `switch` statement can provide a cleaner and more readable solution.
 *
 * ---
 *
 * ## Syntax
 *
 * ```cpp
 * switch (expression) {
 *     case value1:
 *         // statements
 *         break;
 *     case value2:
 *         // statements
 *         break;
 *     ...
 *     default:
 *         // statements
 * }
 * ```
 *
 * - `expression` is evaluated once and compared with each `case` value.  
 * - The `break` statement prevents **fall-through** to the next case.  
 * - The `default` case is optional and executes if none of the cases match.
 *
 * ---
 *
 * ## Example: Day of the Week
 *
 * ```cpp
 * #include <iostream>
 * using namespace std;
 *
 * int main() {
 *     int day = 3;
 *
 *     switch (day) {
 *         case 1:
 *             cout << "Monday" << endl;
 *             break;
 *         case 2:
 *             cout << "Tuesday" << endl;
 *             break;
 *         case 3:
 *             cout << "Wednesday" << endl;
 *             break;
 *         default:
 *             cout << "Other day" << endl;
 *     }
 *
 *     return 0;
 * }
 * ```
 *
 * **Output:**
 * ```
 * Wednesday
 * ```
 *
 * ---
 *
 * 📖 See also: [Tutorialspoint — C++ Switch Statement](https://www.tutorialspoint.com/cplusplus/cpp_switch_statement.htm)
 */
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