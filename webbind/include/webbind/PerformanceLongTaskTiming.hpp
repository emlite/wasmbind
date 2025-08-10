#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PerformanceEntry.hpp"

namespace webbind {

class TaskAttributionTiming;

/// Interface PerformanceLongTaskTiming
/// [`PerformanceLongTaskTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongTaskTiming)
class PerformanceLongTaskTiming : public PerformanceEntry {
    explicit PerformanceLongTaskTiming(Handle h) noexcept;
public:
    explicit PerformanceLongTaskTiming(const emlite::Val &val) noexcept;
    static PerformanceLongTaskTiming take_ownership(Handle h) noexcept;
    [[nodiscard]] PerformanceLongTaskTiming clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`PerformanceLongTaskTiming.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongTaskTiming/startTime)
    /// [`PerformanceLongTaskTiming.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongTaskTiming/startTime)
    [[nodiscard]] jsbind::Any startTime() const;
    /// [`PerformanceLongTaskTiming.duration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongTaskTiming/duration)
    /// [`PerformanceLongTaskTiming.duration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongTaskTiming/duration)
    [[nodiscard]] jsbind::Any duration() const;
    /// [`PerformanceLongTaskTiming.name`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongTaskTiming/name)
    /// [`PerformanceLongTaskTiming.name`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongTaskTiming/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`PerformanceLongTaskTiming.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongTaskTiming/entryType)
    /// [`PerformanceLongTaskTiming.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongTaskTiming/entryType)
    [[nodiscard]] jsbind::String entryType() const;
    /// [`PerformanceLongTaskTiming.attribution`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongTaskTiming/attribution)
    /// [`PerformanceLongTaskTiming.attribution`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongTaskTiming/attribution)
    [[nodiscard]] jsbind::TypedArray<TaskAttributionTiming> attribution() const;
    /// The toJSON method.
    /// [`PerformanceLongTaskTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongTaskTiming/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind