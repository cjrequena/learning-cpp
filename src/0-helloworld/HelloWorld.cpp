#include <iostream>
#include "HelloWorld.hpp"
using namespace std; // this is a using directive telling the compiler to check the std namespace when resolving identifiers with no prefix

/**
 * # C++ Hello, World! Program
 *
 * Created by Carlos José Requena Jiménez on 2019-07-29.
 * 
 * This is the canonical first program in C++ — it prints **"Hello, World!"** to the console.
 *
 * ## Example Code
 * ```cpp
 * #include <iostream>
 * using namespace std;
 *
 * int main() {
 *     cout << "Hello, World!";
 *     return 0;
 * }
 * ```
 *
 * ## Explanation of Parts
 *
 * 1. **Comments**  
 *    Lines beginning with `//` are ignored by the compiler. They’re for humans.  
 *    ```cpp
 *    // This is a comment
 *    ```
 *
 * 2. **Preprocessor directive**  
 *    `#include <iostream>` tells the compiler to include the standard I/O library.  
 *
 * 3. **Namespace usage**  
 *    `using namespace std;` allows you to write `cout` instead of `std::cout`.  
 *
 * 4. **`main` function**  
 *    Every C++ program must have a `main()` function, which is the entry point.  
 *
 * 5. **Printing**  
 *    `cout << "Hello, World!";` writes the string to the console (standard output).  
 *
 * 6. **Return statement**  
 *    `return 0;` signals that the program ended successfully.  
 *
 * ## Output
 * ```
 * Hello, World!
 * ```
 */

void HelloWorld::sayHelloWorld() {
  cout << "\n" << endl;
  std::cout << "Hello, World!" << std::endl;
}

/**
 * Constructor
 */
HelloWorld::HelloWorld() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "HelloWorld Constructor called." << endl;
  cout << "================================" << endl;
}

/**
 * Destructor
 */
HelloWorld::~HelloWorld() {
  cout << "\n" << endl;
  cout << "================================" << endl;
  cout << "HelloWorld Destructor called." << endl;
  cout << "================================" << endl;
}