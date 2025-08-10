#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PerformanceObserverCallbackOptions
class PerformanceObserverCallbackOptions : public emlite::Val {
  explicit PerformanceObserverCallbackOptions(Handle h) noexcept;
public:
    static PerformanceObserverCallbackOptions take_ownership(Handle h) noexcept;
    explicit PerformanceObserverCallbackOptions(const emlite::Val &val) noexcept;
    PerformanceObserverCallbackOptions() noexcept;
    [[nodiscard]] PerformanceObserverCallbackOptions clone() const noexcept;
    /// Getter of the `droppedEntriesCount` attribute.
    [[nodiscard]] long long droppedEntriesCount() const;
    /// Setter of the `droppedEntriesCount` attribute.
    void droppedEntriesCount(long long value);
};

} // namespace webbind