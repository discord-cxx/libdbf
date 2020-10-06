#pragma once

#include <memory>
#include "execution_context.h"

namespace dbf {
    class ConstraintBuilder : public std::enable_shared_from_this<ConstraintBuilder> {
    private:
        typedef std::shared_ptr<ConstraintBuilder> SharedPtrThis;

        std::shared_ptr<ExecutionContext> context;

        bool met;

    public:
        explicit ConstraintBuilder(
            std::shared_ptr<ExecutionContext> context
        ) noexcept;

        [[nodiscard]] bool getIsMet() const noexcept;

        SharedPtrThis assert(bool assertion);
    };
}
