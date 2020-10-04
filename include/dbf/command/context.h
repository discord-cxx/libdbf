#pragma once

#include <string>

namespace dbf {
    struct Context {
        discord::Client client;

        discord::User sender;

        void reply(std::string message);
    };
}
