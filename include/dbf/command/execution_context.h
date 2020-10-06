#pragma once

#include <string>

namespace dbf {
    struct ExecutionContext {
        discord::Client client;

        discord::User sender;

        void reply(std::string message);
    };
}
