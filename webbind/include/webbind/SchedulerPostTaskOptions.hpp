#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type SchedulerPostTaskOptions
class SchedulerPostTaskOptions : public emlite::Val {
  explicit SchedulerPostTaskOptions(Handle h) noexcept;
public:
    static SchedulerPostTaskOptions take_ownership(Handle h) noexcept;
    explicit SchedulerPostTaskOptions(const emlite::Val &val) noexcept;
    SchedulerPostTaskOptions() noexcept;
    [[nodiscard]] SchedulerPostTaskOptions clone() const noexcept;
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
    /// Getter of the `priority` attribute.
    [[nodiscard]] TaskPriority priority() const;
    /// Setter of the `priority` attribute.
    void priority(const TaskPriority& value);
    /// Getter of the `delay` attribute.
    [[nodiscard]] long long delay() const;
    /// Setter of the `delay` attribute.
    void delay(long long value);
};

} // namespace webbind