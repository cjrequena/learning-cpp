// ============================================================================
// HelloCommandHandler.cpp
// ============================================================================
#include "HelloCommandHandler.hpp"
#include "CommandHandlerRegistry.hpp"

using namespace std;

/**
 * @brief Implementation of the hello command handler.
 *
 * Simply returns a greeting message. In a real application, this might
 * perform more complex operations like user authentication, database
 * queries, or external API calls.
 *
 * @return Greeting message string
 *
 * Educational Note:
 * - Implementation separated from declaration (hpp/cpp split)
 * - This allows changing implementation without recompiling other files
 * - Faster compilation times and better encapsulation
 * - The override keyword in the header ensures this matches base class
 */
string HelloCommandHandler::handle() {
    return "Hello from HelloCommandHandler!";
}

/**
 * Register this handler with the name "hello".
 *
 * This registration happens automatically before main() is called due to
 * static initialization. The handler can now be accessed via:
 * CommandHandlerRegistry::handle("hello")
 *
 * Educational Note:
 * - This line executes before main() (static initialization phase)
 * - The macro expands to create a static bool variable in anonymous namespace
 * - The bool's initialization calls registerHandler<HelloCommandHandler>("hello")
 * - If another handler tries to use "hello", an exception is thrown
 * - This is a form of "self-registering" plugin architecture
 * - No central list of handlers needed - they register themselves!
 */
REGISTER_HANDLER(HelloCommandHandler, "hello")