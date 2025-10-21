// ============================================================================
// main.cpp
// ============================================================================
#include <iostream>
#include "designpatterns/registry/CommandHandlerRegistry.hpp"
#include "designpatterns/registry/CommandHandler.hpp"

int main() {
    std::cout << "=== Command Handler Registry Demo ===" << std::endl;

    /**
     * List all registered handlers.
     *
     * This demonstrates the introspection capability of the registry.
     * Useful for debugging, creating dynamic user interfaces, or
     * providing command-line auto-completion.
     *
     * Educational Note:
     * - getHandlerNames() returns a vector by value
     * - Modern C++ optimizes this with move semantics (no unnecessary copy)
     * - Range-based for loop is clean and efficient
     * - We're discovering handlers at runtime that were registered at compile time
     */
    std::cout << "\nRegistered handlers: ";
    for (const auto& name : CommandHandlerRegistry::getHandlerNames()) {
        std::cout << name << " ";
    }
    std::cout << std::endl;

    /**
     * Execute handlers using the convenience method.
     *
     * The handle() method combines instantiation and execution in one call.
     * This is the simplest way to use the registry for one-off executions.
     *
     * Educational Note:
     * - Each call creates a new handler, executes it, and destroys it
     * - Very simple API: just provide the handler name
     * - Appropriate when you don't need to reuse the handler
     * - The registry handles all the complexity internally
     */
    std::cout << "\nExecuting 'hello': " << CommandHandlerRegistry::handle("hello") << std::endl;
    std::cout << "Executing 'goodbye': " << CommandHandlerRegistry::handle("goodbye") << std::endl;

    /**
     * Try to execute a non-existent handler.
     *
     * Shows that the registry handles missing handlers gracefully by
     * returning an error message instead of crashing or throwing.
     *
     * Educational Note:
     * - No exception thrown, just a descriptive error message returned
     * - This is a design choice: fail gracefully vs. fail fast
     * - For a command-line tool, returning an error message is friendlier
     * - For a critical system, you might prefer an exception
     * - Design depends on your use case and error handling philosophy
     */
    std::cout << "Executing 'unknown': " << CommandHandlerRegistry::handle("unknown") << std::endl;

    /**
     * Manual instantiation example.
     *
     * Sometimes you want to reuse a handler instance multiple times or
     * control its lifetime more precisely. The instantiate() method gives
     * you direct control.
     *
     * Educational Note:
     * - instantiate() returns a unique_ptr giving us ownership
     * - We can call handle() multiple times on the same object
     * - Useful if handler has expensive initialization or maintains state
     * - The unique_ptr automatically deletes the handler when it goes out of scope
     * - No manual delete needed - RAII ensures cleanup
     * - Always check for nullptr before using the handler
     */
    std::cout << "\nManual instantiation:" << std::endl;
    auto handler = CommandHandlerRegistry::instantiate("hello");
    if (handler) {
        std::cout << "Handler result: " << handler->handle() << std::endl;
        // Could call handler->handle() again if needed
        // Handler is automatically destroyed here when unique_ptr goes out of scope
    }

    /**
     * Example of exception handling for duplicate registration.
     *
     * Uncomment to see what happens when trying to register the same
     * handler name twice. This protects against accidental overwrites.
     *
     * Educational Note:
     * - Exception is thrown during registration, not during execution
     * - This is a programming error, not a runtime error
     * - Should be caught during development/testing
     * - try-catch blocks provide structured exception handling
     * - const reference avoids copying the exception object
     */
    // try {
    //     CommandHandlerRegistry::registerHandler<HelloCommandHandler>("hello");
    // } catch (const std::runtime_error& e) {
    //     std::cout << "Error: " << e.what() << std::endl;
    // }

    return 0;
}