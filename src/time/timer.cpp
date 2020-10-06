#include <dbf/time/timer.h>

namespace dbf {
    Timer::Timer() :
        startTime(),
        endTime() {
        //
    }

    Time Timer::getStartTime() const noexcept {
        return this->startTime;
    }

    Time Timer::getEndTime() const noexcept {
        return this->endTime;
    }

    bool Timer::start() noexcept {
        if (this->isRunning) {
            return false;
        }

        this->startTime = std::chrono::system_clock::now();
        this->isRunning = true;

        return true;
    }

    bool Timer::stop() noexcept {
        if (!this->isRunning) {
            return false;
        }

        this->endTime = std::chrono::system_clock::now();
        this->isRunning = false;

        return true;
    }

    std::optional<double> Timer::getElapsedTime() const noexcept {
        Time endTime = this->isRunning
            ? std::chrono::system_clock::now()
            : this->endTime;

        return std::chrono::duration_cast<std::chrono::milliseconds>(
            endTime - this->startTime
        ).count();
    }
}
