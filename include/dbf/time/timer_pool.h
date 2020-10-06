#pragma once

#include <set>
#include "time.h"
#include "timer.h"

namespace dbf {
    class TimerPool {
    public:
        std::set<Time> timers;

        TimerPool();

        [[nodiscard]] std::optional<bool> isExpired(Timer timer);
    };
}
