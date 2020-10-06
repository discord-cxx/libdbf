#pragma once

#include <memory>
#include <string>
#include "command_registry.h"

namespace dbf {
    struct ExecutionContext {
        discord::Client client;

        discord::User sender;

        std::shared_ptr<CommandRegistry> registry;

        void reply(std::string message);
    };
}
