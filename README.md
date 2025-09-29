# Learning C++

A comprehensive repository for learning C++ programming from fundamentals to advanced concepts.

## 📋 Table of Contents

- [About](#about)
- [Prerequisites](#prerequisites)
- [Repository Structure](#repository-structure)
- [Getting Started](#getting-started)
- [Topics Covered](#topics-covered)
- [Building and Running](#building-and-running)
- [Contributing](#contributing)
- [Resources](#resources)
- [License](#license)

## 🎯 About

This repository contains examples, exercises, and projects designed to help developers learn and master C++ programming. Whether you're a beginner starting your programming journey or an experienced developer looking to deepen your C++ knowledge, you'll find valuable resources here.

## 📚 Prerequisites

Before you begin, ensure you have the following installed:

- **C++ Compiler**: 
  - GCC 9.0+ or Clang 10.0+ (Linux/macOS)
  - MSVC 2019+ or MinGW (Windows)
- **CMake**: Version 3.15 or higher (optional, for build automation)
- **IDE/Editor** (recommended):
  - Visual Studio Code
  - CLion
  - Visual Studio
  - Code::Blocks

## 📁 Repository Structure

```
learning-cpp/
├── CMakeLists.txt
├── doc
├── include
├── Makefile
├── README.md
├── src
│   ├── 0-helloworld
│   │   ├── HelloWorld.cpp
│   │   └── HelloWorld.hpp
│   ├── 1-datatypes
│   │   ├── DataTypes.cpp
│   │   └── DataTypes.hpp
│   ├── 2-controlflows
│   │   ├── ControlFlows.cpp
│   │   └── ControlFlows.hpp
│   ├── 3-functions
│   │   ├── Functions.cpp
│   │   └── Functions.hpp
│   ├── 4-modifiertypes
│   │   ├── ModifierTypes.cpp
│   │   └── ModifierTypes.hpp
│   ├── 5-numbers
│   │   ├── Numbers.cpp
│   │   └── Numbers.hpp
│   ├── 6-arrays
│   │   ├── Arrays.cpp
│   │   └── Arrays.hpp
│   ├── 7-strings
│   │   ├── Strings.cpp
│   │   └── Strings.hpp
│   ├── 8-datetime
│   │   ├── DateTime.cpp
│   │   └── DateTime.hpp
│   ├── 9-operators
│   │   ├── Operators.cpp
│   │   └── Operators.hpp
│   ├── Main.cpp
│   ├── pointers
│   │   ├── Pointers.cpp
│   │   └── Pointers.hpp
│   ├── references
│   │   ├── References.cpp
│   │   └── References.hpp
│   └── storageclasses
│       ├── StorageClasses.cpp
│       └── StorageClasses.hpp
└── test

```

## 🚀 Getting Started

### Clone the Repository

```bash
git clone https://github.com/cjrequena/learning-cpp.git
cd learning-cpp
```

### Compile a Single File

Using makefile:
```bash
make
./build/apps/app
```

### Using CMake

```bash
mkdir build
cd build
cmake .
make
```

## 📖 Topics Covered

### Fundamentals
- Variables and Data Types
- Operators and Expressions
- Control Structures (if, switch, loops)
- Functions and Scope
- Arrays and Strings
- Pointers and References

### Object-Oriented Programming
- Classes and Objects
- Constructors and Destructors
- Encapsulation
- Inheritance
- Polymorphism
- Abstract Classes and Interfaces
- Operator Overloading

### Standard Template Library (STL)
- Containers (vector, list, map, set, etc.)
- Iterators
- Algorithms (sort, find, transform, etc.)
- Function Objects

### Advanced Topics
- Templates and Generic Programming
- Exception Handling
- File I/O
- Smart Pointers (unique_ptr, shared_ptr, weak_ptr)
- Move Semantics and Rvalue References
- Lambda Expressions
- Multithreading and Concurrency
- Modern C++ Features (C++11/14/17/20)

## 🔨 Building and Running

Each directory typically contains:
- **Source files** (.cpp): Implementation code
- **Header files** (.h/.hpp): Declarations
- **README**: Specific instructions for that topic
- **CMakeLists.txt**: Build configuration (if applicable)

### Example Workflow

```bash
# Navigate to a specific topic
cd basics/hello-world

# Compile
g++ -std=c++17 -o hello hello_world.cpp

# Run
./hello
```

## 🤝 Contributing

Contributions are welcome! If you'd like to add examples, fix bugs, or improve documentation:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/new-example`)
3. Commit your changes (`git commit -m 'Add new example for topic X'`)
4. Push to the branch (`git push origin feature/new-example`)
5. Open a Pull Request

Please ensure your code:
- Follows consistent formatting
- Includes comments explaining complex logic
- Compiles without warnings
- Includes a brief description of what it demonstrates

## 📚 Resources

### Books
- "The C++ Programming Language" by Bjarne Stroustrup
- "Effective C++" by Scott Meyers
- "C++ Primer" by Stanley Lippman

### Online Resources
- [cppreference.com](https://en.cppreference.com/) - Comprehensive C++ reference
- [cplusplus.com](http://www.cplusplus.com/) - Tutorials and reference
- [learncpp.com](https://www.learncpp.com/) - Free C++ tutorial site
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/) - Best practices

### Videos
- [CppCon YouTube Channel](https://www.youtube.com/user/CppCon)
- [The Cherno C++ Series](https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb)

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## ✉️ Contact

For questions or feedback, please open an issue or contact the repository owner.

---

**Happy Learning! 🚀**