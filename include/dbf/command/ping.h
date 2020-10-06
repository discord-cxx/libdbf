#pragma once

#include "command.h"

namespace dbf {
    struct CommandPing : Command<> {
        CommandPing() :
            Command<>(CommandInfo{
                "ping"
            }) {
            //
        }

        bool handleRequest(std::shared_ptr<ExecutionContext> context) override {
            context.
        }

        void invoke(Args args) {
            this->context->reply("Hello world!");
        }
    };
}
