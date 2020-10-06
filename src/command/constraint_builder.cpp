#include <dbf/command/constraint_builder.h>

namespace dbf {
    ConstraintBuilder::ConstraintBuilder(
        std::shared_ptr<ExecutionContext> context
    ) noexcept :
        context(context) {
        //
    }

    bool ConstraintBuilder::getIsMet() const noexcept {
        return this->met;
    }

    ConstraintBuilder::SharedPtrThis ConstraintBuilder::assert(bool assertion) {
        if (!assertion) {
            this->met = false;
        }

        return this->shared_from_this();
    }

    ConstraintBuilder::SharedPtrThis ConstraintBuilder::requireInterval(uint64_t millisecondsInterval) {
        if (this->context->registry->timerPool) {

        }

        return this->shared_from_this();
    }
}
