#pragma once

#include <optional>
#include "time.h"

namespace dbf {
    class Timer {
    private:
        Time startTime;

        Time endTime;

        bool isRunning;

    public:
        Timer();

        [[nodiscard]] Time getStartTime() const noexcept;

        [[nodiscard]] Time getEndTime() const noexcept;

        bool start() noexcept;

        bool stop() noexcept;

        /**
         * Returns the elapsed time in milliseconds if the timer
         * is running, otherwise returns std::nullopt.
         */
        [[nodiscard]] std::optional<double> getElapsedTime() const noexcept;
    };
}
