#ifndef LEARNING_CPP_COMMANDHANDLER_HPP
#define LEARNING_CPP_COMMANDHANDLER_HPP
#include <string>

using namespace std;

/**
 * @brief Abstract interface for all command handlers.
 *
 * This class defines the contract that all command handlers must follow.
 * It uses the Strategy pattern, where each concrete handler implements
 * its own version of the handle() method.
 *
 * Educational Note:
 * - Pure virtual function (= 0) makes this an abstract class
 * - Virtual destructor is crucial for proper cleanup of derived classes
 * - This enables polymorphism: we can treat all handlers uniformly
 * - Any class inheriting from this must implement handle()
 */
class CommandHandler {
public:
    /**
     * @brief Virtual destructor ensures proper cleanup of derived classes.
     *
     * When deleting a derived class through a base class pointer,
     * the virtual destructor ensures the derived class destructor is called.
     * This prevents memory leaks and undefined behavior.
     *
     * Educational Note:
     * - "= default" tells compiler to generate default implementation
     * - Virtual ensures derived class destructors are called in correct order
     * - Essential for proper RAII (Resource Acquisition Is Initialization)
     */
    virtual ~CommandHandler() = default;

    /**
     * @brief Execute the command and return a result message.
     *
     * This is a pure virtual function (abstract method) that must be
     * implemented by all concrete command handler classes.
     *
     * @return A string message describing the result of the command execution
     *
     * Educational Note:
     * - The "= 0" makes this a pure virtual function
     * - Classes with pure virtual functions cannot be instantiated
     * - Derived classes must implement this method to be instantiable
     * - This enforces a contract: all handlers MUST provide handle()
     */
    virtual string handle() = 0;
};

#endif //LEARNING_CPP_COMMANDHANDLER_HPP