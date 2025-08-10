#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type SchedulerPostTaskOptions
/// [`SchedulerPostTaskOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SchedulerPostTaskOptions)
class SchedulerPostTaskOptions : public emlite::Val {
  explicit SchedulerPostTaskOptions(Handle h) noexcept;
public:
    static SchedulerPostTaskOptions take_ownership(Handle h) noexcept;
    explicit SchedulerPostTaskOptions(const emlite::Val &val) noexcept;
    SchedulerPostTaskOptions() noexcept;
    [[nodiscard]] SchedulerPostTaskOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] TaskPriority priority() const;
    void priority(const TaskPriority& value);
    [[nodiscard]] long long delay() const;
    void delay(long long value);
};

} // namespace webbind