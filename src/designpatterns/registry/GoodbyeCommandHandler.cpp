// ============================================================================
// GoodbyeCommandHandler.cpp
// ============================================================================
#include "GoodbyeCommandHandler.hpp"
#include "CommandHandlerRegistry.hpp"

using namespace std;
/**
 * @brief Implementation of the goodbye command handler.
 *
 * Returns a farewell message. Shows that each handler can have completely
 * different behavior while conforming to the same interface.
 *
 * @return Farewell message string
 *
 * Educational Note:
 * - Completely different implementation from HelloCommandHandler
 * - Both satisfy the CommandHandler contract (implement handle())
 * - Registry treats them uniformly despite different behaviors
 * - This is the Strategy pattern in action
 */
string GoodbyeCommandHandler::handle() {
    return "Goodbye from GoodbyeCommandHandler!";
}

/**
 * Register this handler with the name "goodbye".
 *
 * Like HelloCommandHandler, this registration happens automatically
 * during static initialization, before main() executes.
 *
 * Educational Note:
 * - Registered in a separate .cpp file from HelloCommandHandler
 * - Order of registration across .cpp files is undefined but doesn't matter
 * - Both handlers are available by the time main() starts
 * - Each .cpp file is compiled independently (separate translation units)
 * - Static initialization in each .cpp file runs before main()
 */
REGISTER_HANDLER(GoodbyeCommandHandler, "goodbye")