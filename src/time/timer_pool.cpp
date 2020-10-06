#include <dbf/time/timer_pool.h>

namespace dbf {
    TimerPool::TimerPool() :
        timers() {
        //
    }

    std::optional<bool> TimerPool::isExpired(Timer timer) {
        if (!this->timers.contains(timer)) {
            return std::nullopt;
        }

        return this->timers.
    }
}
