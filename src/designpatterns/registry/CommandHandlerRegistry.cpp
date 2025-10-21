// ============================================================================
// CommandHandlerRegistry.cpp
// ============================================================================
#include "CommandHandlerRegistry.hpp"
using namespace std;

/**
 * @brief Implementation of getRegistry() that returns the static registry.
 *
 * This implements the Meyers Singleton pattern. The static local variable
 * is initialized on first call and persists for the program's lifetime.
 * C++11 guarantees thread-safe initialization of function-local statics.
 *
 * Educational Note:
 * - Must be defined in .cpp file (not header) to avoid multiple definitions
 * - If this were in the header and included by multiple .cpp files, we'd
 *   get "multiple definition" linker errors
 * - The registry is created only when first accessed (lazy initialization)
 * - Memory is automatically cleaned up when the program exits
 * - The long return type is map<string, function<unique_ptr<CommandHandler>()>>
 * - This stores factory functions that create CommandHandler instances
 */
map<string, function<unique_ptr<CommandHandler>()>>& CommandHandlerRegistry::getRegistry() {
    static map<string, function<unique_ptr<CommandHandler>()>> registry;
    return registry;
}

/**
 * @brief Implementation of instantiate() that creates handler instances.
 *
 * Looks up the factory function in the registry and calls it to create
 * a new handler instance. Returns nullptr if the name is not found.
 *
 * @param name The identifier of the handler to create
 * @return unique_ptr to new handler instance, or nullptr if not found
 *
 * Educational Note:
 * - We get a reference to the registry to avoid unnecessary copies
 * - auto keyword lets compiler deduce the iterator type
 * - find() is O(log n) for map (it's a balanced binary tree)
 * - Could use unordered_map for O(1) average case, O(n) worst case
 * - Returning nullptr is a common C++ idiom for "not found"
 * - Caller must check for nullptr before using the returned pointer
 */
unique_ptr<CommandHandler> CommandHandlerRegistry::instantiate(const string& name) {
    auto &registry = getRegistry();
    auto it = registry.find(name);

    // Not found - return nullptr to indicate failure
    if (it == registry.end()) {
        return nullptr;
    }

    /**
     * Found - call the factory function to create a new instance.
     *
     * Educational Note:
     * - it->second accesses the value part of the map entry (the factory)
     * - The factory is a function that returns unique_ptr<CommandHandler>
     * - Calling it with () invokes the lambda we stored during registration
     * - The lambda creates a new instance using make_unique<T>()
     * - unique_ptr provides automatic memory management (RAII)
     */
    return it->second();
}

/**
 * @brief Implementation of handle() that instantiates and executes a handler.
 *
 * This is a convenience method that combines instantiation and execution.
 * It handles the not-found case by returning a descriptive error message.
 *
 * @param name The identifier of the handler to execute
 * @return Result string from handler execution or error message
 *
 * Educational Note:
 * - This demonstrates the Facade pattern: simplified interface
 * - Internally calls instantiate() then handle()
 * - The unique_ptr ensures the handler is automatically deleted after use
 * - No manual memory management needed - RAII handles cleanup
 * - Returns by value, but compiler can optimize with RVO (Return Value Opt)
 */
string CommandHandlerRegistry::handle(const string& name) {
    auto handler = instantiate(name);

    // Handler not found in registry
    if (handler == nullptr) {
        return "No specialized handler found with: " + name;
    }

    /**
     * Execute the handler and return its result.
     *
     * Educational Note:
     * - handler is a unique_ptr, but -> operator lets us call methods
     * - Polymorphism at work: we call handle() without knowing the concrete type
     * - The virtual function mechanism (vtable) determines which handle() to call
     * - After this return, handler goes out of scope and is automatically deleted
     */
    return handler->handle();
}

/**
 * @brief Implementation of getHandlerNames() that returns all registered names.
 *
 * Extracts all keys from the registry map and returns them as a vector.
 * Useful for discovering available handlers at runtime.
 *
 * @return Vector containing all registered handler identifiers
 *
 * Educational Note:
 * - Range-based for loop iterates over map entries
 * - pair.first is the key (handler name), pair.second is the factory
 * - We only care about names, so we extract first from each pair
 * - Vector is built incrementally with push_back
 * - Could use reserve() before the loop for better performance
 * - Returns by value, but modern C++ optimizes this (move semantics)
 */
vector<string> CommandHandlerRegistry::getHandlerNames() {
    vector<string> names;
    for (const auto &pair: getRegistry()) {
        names.push_back(pair.first);
    }
    return names;
}
