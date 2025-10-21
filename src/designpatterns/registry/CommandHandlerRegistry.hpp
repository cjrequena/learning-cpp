#ifndef LEARNING_CPP_COMMANDHANDLERREGISTRY_HPP
#define LEARNING_CPP_COMMANDHANDLERREGISTRY_HPP

#include <string>
#include <map>
#include <memory>
#include <functional>
#include <vector>
#include "CommandHandler.hpp"

using namespace std;

/**
 * @brief A registry for managing command handler classes using the Registry pattern.
 *
 * This class implements a static registry that maps string names to command handler
 * factory functions. It provides a centralized way to register, instantiate, and
 * execute command handlers without tight coupling.
 *
 * Design Patterns Used:
 * - Registry Pattern: Central storage for retrieving objects by key
 * - Factory Pattern: Creates objects without specifying exact classes
 * - Singleton Pattern: Single static registry shared across the application
 *
 * Educational Note:
 * - All methods are static, so no instance of this class is needed
 * - Uses a static local variable for thread-safe lazy initialization
 * - Template methods allow type-safe registration of any CommandHandler subclass
 * - Separating into .hpp/.cpp allows better organization and faster compilation
 */
class CommandHandlerRegistry {
private:
    /**
     * @brief Get a reference to the static registry map.
     *
     * This method uses the "Meyers Singleton" pattern with a function-local
     * static variable. This ensures:
     * 1. The registry is created only when first accessed (lazy initialization)
     * 2. Thread-safe initialization (guaranteed by C++11 standard)
     * 3. Automatic cleanup when program exits
     *
     * @return Reference to the static registry map containing handler factories
     *
     * Educational Note:
     * - Function-local statics are initialized on first function call
     * - The static variable persists for the program's lifetime
     * - Using a function instead of a class static member prevents
     *   "static initialization order fiasco"
     * - Declared private because it's an internal implementation detail
     */
    static map<string, function<unique_ptr<CommandHandler>()>>& getRegistry();

public:
    /**
     * @brief Register a command handler class with a given name.
     *
     * This template method registers a handler by creating a factory function
     * that knows how to create instances of type T. The factory is stored
     * in the registry mapped to the provided name.
     *
     * @tparam T The type of CommandHandler to register (must inherit from CommandHandler)
     * @param name The string identifier for this handler
     * @return true if registration succeeds (used for static initialization)
     * @throws runtime_error if a handler with this name is already registered
     *
     * Educational Note:
     * - Template allows any type T that inherits from CommandHandler
     * - Lambda function captures no variables, making it lightweight
     * - make_unique provides exception-safe object creation
     * - Return value of 'bool' allows use in static initialization
     * - Must be in header file because it's a template (needs to be
     *   instantiated at compile time for each type T)
     * - Templates are expanded at compile time, not link time
     */
    template<typename T>
    static bool registerHandler(const string& name);

    /**
     * @brief Create an instance of a command handler by name.
     *
     * This method looks up the handler in the registry and calls its
     * factory function to create a new instance. Ownership of the created
     * object is transferred to the caller via unique_ptr.
     *
     * @param name The string identifier of the handler to instantiate
     * @return A unique_ptr to the created handler, or nullptr if not found
     *
     * Educational Note:
     * - Returns nullptr instead of throwing for not-found cases (flexibility)
     * - unique_ptr ensures automatic memory management (RAII principle)
     * - Caller receives ownership and is responsible for the object's lifetime
     * - Factory pattern: creates objects without knowing their concrete types
     * - Declared in header, implemented in .cpp (not a template)
     */
    static unique_ptr<CommandHandler> instantiate(const string& name);

    /**
     * @brief Convenience method to instantiate and execute a handler in one call.
     *
     * This combines instantiation and execution into a single operation,
     * providing a simple interface for the most common use case.
     *
     * @param name The string identifier of the handler to execute
     * @return The result string from the handler, or an error message if not found
     *
     * Educational Note:
     * - Facade pattern: provides a simplified interface to complex operations
     * - Handles the nullptr case gracefully with a descriptive message
     * - Handler is automatically destroyed after execution (unique_ptr cleanup)
     * - Method demonstrates separation of concerns: registry vs. execution
     * - Declared in header, implemented in .cpp (not a template)
     */
    static string handle(const string& name);

    /**
     * @brief Get a list of all registered handler names.
     *
     * This method provides introspection capability, allowing users to
     * discover what handlers are available at runtime.
     *
     * @return A vector containing all registered handler names
     *
     * Educational Note:
     * - Returns by value (vector copy), which is acceptable for small lists
     * - Could be optimized with move semantics for large registries
     * - Useful for debugging, UI generation, or command-line completion
     * - Demonstrates the "query" aspect of the registry pattern
     * - Declared in header, implemented in .cpp (not a template)
     */
    static vector<string> getHandlerNames();
};

/**
 * @brief Template implementation for registerHandler - must be in header.
 *
 * Template methods must be visible to all translation units that use them,
 * so they're typically implemented in the header file. The compiler needs
 * to see the full implementation to instantiate the template for each type T.
 *
 * Educational Note:
 * - This is placed after the class definition for clarity
 * - Could also be placed inside the class definition
 * - Each time this is called with a new type T, compiler creates a new function
 * - This is called "template instantiation"
 */
template<typename T>
bool CommandHandlerRegistry::registerHandler(const string& name) {
    // Get reference to the singleton registry
    auto& registry = getRegistry();

    /**
     * Check for duplicate registration.
     *
     * Educational Note:
     * - find() returns an iterator to the element if found, or end() if not
     * - This check prevents accidental overwriting of existing handlers
     * - Throwing an exception is appropriate here because duplicate
     *   registration usually indicates a programming error
     */
    if (registry.find(name) != registry.end()) {
        throw runtime_error("Command Handler '" + name + "' is already registered.");
    }

    /**
     * Store a lambda factory function that creates instances of type T.
     *
     * Educational Note:
     * - Lambda syntax: [capture](parameters) -> return_type { body }
     * - Empty capture [] means the lambda captures no external variables
     * - The lambda returns a unique_ptr<CommandHandler>
     * - make_unique<T>() creates a new T object on the heap
     * - Type T must be a complete type that inherits from CommandHandler
     * - This is the Factory pattern: the registry doesn't know about T's
     *   implementation, only that it can create instances
     */
    registry[name] = []() -> unique_ptr<CommandHandler> {
        return make_unique<T>();
    };

    /**
     * Return true to enable static initialization idiom.
     *
     * Educational Note:
     * - Returning a value allows this function to be used in static
     *   variable initialization (see REGISTER_HANDLER macro)
     * - The actual value doesn't matter; we just need a return type
     *   that can be assigned to a static variable
     */
    return true;
}

/**
 * @brief Macro for automatic handler registration at static initialization time.
 *
 * This macro creates a static boolean variable whose initialization causes
 * the handler to be registered before main() is called. It's placed in an
 * anonymous namespace to avoid name collisions across translation units.
 *
 * Usage: REGISTER_HANDLER(MyHandlerClass, "my_handler")
 *
 * @param HandlerClass The class name to register
 * @param name The string identifier for the handler
 *
 * Educational Note:
 * - Uses static initialization order to register before main()
 * - Anonymous namespace {} ensures internal linkage (no symbol conflicts)
 * - The ## operator concatenates HandlerClass with "_registered"
 * - Static variables in global scope are initialized before main()
 * - This is a common C++ idiom for plugin-style architectures
 * - Each .cpp file that uses this macro registers its handler independently
 * - Order of registration across different .cpp files is undefined, but
 *   it doesn't matter since we're just adding to a map
 */
#define REGISTER_HANDLER(HandlerClass, name) \
    namespace { \
        static bool HandlerClass##_registered = \
            CommandHandlerRegistry::registerHandler<HandlerClass>(name); \
    }


#endif //LEARNING_CPP_COMMANDHANDLERREGISTRY_HPP
