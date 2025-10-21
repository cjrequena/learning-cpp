//
// Created by Carlos José Requena Jiménez on 21/10/25.
//

#ifndef LEARNING_CPP_HELLOCOMMANDHANDLER_HPP
#define LEARNING_CPP_HELLOCOMMANDHANDLER_HPP
#include "CommandHandler.hpp"

using namespace std;

/**
 * @brief Example command handler that returns a greeting message.
 *
 * This class demonstrates a concrete implementation of the CommandHandler
 * interface. It shows the minimum requirements for creating a new handler:
 * 1. Inherit from CommandHandler (public inheritance)
 * 2. Implement the pure virtual handle() method
 * 3. Use REGISTER_HANDLER macro in .cpp to add to registry
 *
 * Educational Note:
 * - Public inheritance means "is-a" relationship: HelloCommandHandler IS-A CommandHandler
 * - Override keyword explicitly marks this as overriding a virtual method
 * - Helps catch errors at compile time if base class signature changes
 * - This handler has no state (stateless), which is common and thread-safe
 * - Stateless handlers can be safely used from multiple threads
 */
class HelloCommandHandler : public CommandHandler {
public:
    /**
     * @brief Execute the hello command.
     *
     * Returns a friendly greeting message. This demonstrates the simplest
     * possible handler implementation.
     *
     * @return A greeting string
     *
     * Educational Note:
     * - Override keyword is optional but strongly recommended
     * - Catches errors if base class signature changes (compile-time safety)
     * - Pure virtual function from base class must be implemented
     * - Return type must exactly match base class declaration
     * - This is where polymorphism happens: same interface, different behavior
     */
    string handle() override;
};

#endif //LEARNING_CPP_HELLOCOMMANDHANDLER_HPP