#include <dbf/command/context.h>

namespace dbf {
    void Context::reply(std::string message) {
        this->client.send()
    }
}
