#include <dbf/command/execution_context.h>

namespace dbf {
    void ExecutionContext::reply(std::string message) {
        // TODO

        this->client.send();
    }
}
