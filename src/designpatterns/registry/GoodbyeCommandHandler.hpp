//
// Created by Carlos José Requena Jiménez on 21/10/25.
//

#ifndef LEARNING_CPP_GOODBYECOMMANDHANDLER_HPP
#define LEARNING_CPP_GOODBYECOMMANDHANDLER_HPP

#include "CommandHandler.hpp"

using namespace std;

/**
 * @brief Example command handler that returns a farewell message.
 *
 * Another demonstration of CommandHandler implementation, showing that
 * multiple handlers can coexist in the same registry.
 *
 * Educational Note:
 * - Each handler is independent and can have different implementations
 * - Handlers are registered with unique names to avoid conflicts
 * - The registry allows adding new handlers without modifying existing code
 *   (Open/Closed Principle: open for extension, closed for modification)
 * - You can add 100 new handlers without changing CommandHandlerRegistry
 * - This is excellent for plugin architectures and extensibility
 */
class GoodbyeCommandHandler : public CommandHandler {
public:
    /**
     * @brief Execute the goodbye command.
     *
     * Returns a farewell message. This is another simple stateless handler.
     *
     * @return A farewell string
     *
     * Educational Note:
     * - Same interface as HelloCommandHandler, different implementation
     * - This is the essence of polymorphism: uniform interface, diverse behavior
     * - Client code doesn't need to know which specific handler it's using
     */
    string handle() override;
};

#endif //LEARNING_CPP_GOODBYECOMMANDHANDLER_HPP