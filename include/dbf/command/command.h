#pragma once

#include <memory>
#include <utility>
#include "execution_context.h"
#include "command_registry.h"
#include "args.h"
#include "command_info.h"

namespace dbf {
    template<typename T = Args>
        requires std::derived_from<T, Args>
    class Command {
    protected:
        std::shared_ptr<ExecutionContext> context;

    public:
        const CommandInfo info;

        explicit Command(CommandInfo info) :
            context(nullptr),
            info(std::move(info)) {
            //
        };

        /**
         * Accept an execution context and prepare to invoke the
         * command. This event occurs whenever the command is executed by
         * a user. The returned boolean value will determine whether
         * the command is actually invoked or not. Returns true by default
         * if not overridden.
         */
        virtual bool handleRequest(std::shared_ptr<ExecutionContext> context) {
            this->context = context;

            return true;
        }

        /**
         * Invoke the command. At this point, the constraints for its
         * execution have been met, unless if the command was forcefully
         * invoked.
         */
        virtual void invoke(T args) = 0;
    };
}
