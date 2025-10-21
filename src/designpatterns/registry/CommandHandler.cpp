#include "CommandHandler.hpp"

/**
 * @brief Implementation file for CommandHandler.
 *
 * This file is intentionally minimal because CommandHandler is an abstract
 * interface with no implementation details. The destructor is defaulted,
 * and handle() is pure virtual (implemented by derived classes).
 *
 * Educational Note:
 * - Some compilers require a .cpp file even for header-only classes
 * - This ensures proper symbol generation for virtual table (vtable)
 * - The vtable is a mechanism C++ uses to implement runtime polymorphism
 * - Each class with virtual functions has a vtable containing function pointers
 */

// No implementation needed - all methods are either pure virtual or defaulted