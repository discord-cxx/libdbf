#pragma once

#include <memory>
#include "execution_context.h"

namespace dbf {
    template<typename T>
    class Command {
    protected:
        std::shared_ptr<ExecutionContext> context;

    public:
        Command() :
            context(nullptr) {
            //
        };

        /**
         * Accept an execution context and prepare to invoke the
         * command. The returned boolean value will determine whether
         * the command is actually invoked or not. Returns true by default
         * if not overridden.
         */
        virtual bool prepare(std::shared_ptr<ExecutionContext> context) {
            this->context = context;

            return true;
        }

        /**
         * Invoke the command. At this point, the constraints for its
         * execution have been met, unless if the command was forcefully
         * invoked.
         */
        virtual void invoke() = 0;
    };
}
