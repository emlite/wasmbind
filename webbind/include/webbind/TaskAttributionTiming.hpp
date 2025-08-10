#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PerformanceEntry.hpp"

namespace webbind {

/// Interface TaskAttributionTiming
/// [`TaskAttributionTiming`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming)
class TaskAttributionTiming : public PerformanceEntry {
    explicit TaskAttributionTiming(Handle h) noexcept;
public:
    explicit TaskAttributionTiming(const emlite::Val &val) noexcept;
    static TaskAttributionTiming take_ownership(Handle h) noexcept;
    [[nodiscard]] TaskAttributionTiming clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`TaskAttributionTiming.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/startTime)
    /// [`TaskAttributionTiming.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/startTime)
    [[nodiscard]] jsbind::Any startTime() const;
    /// [`TaskAttributionTiming.duration`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/duration)
    /// [`TaskAttributionTiming.duration`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/duration)
    [[nodiscard]] jsbind::Any duration() const;
    /// [`TaskAttributionTiming.name`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/name)
    /// [`TaskAttributionTiming.name`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`TaskAttributionTiming.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/entryType)
    /// [`TaskAttributionTiming.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/entryType)
    [[nodiscard]] jsbind::String entryType() const;
    /// [`TaskAttributionTiming.containerType`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/containerType)
    /// [`TaskAttributionTiming.containerType`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/containerType)
    [[nodiscard]] jsbind::String containerType() const;
    /// [`TaskAttributionTiming.containerSrc`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/containerSrc)
    /// [`TaskAttributionTiming.containerSrc`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/containerSrc)
    [[nodiscard]] jsbind::String containerSrc() const;
    /// [`TaskAttributionTiming.containerId`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/containerId)
    /// [`TaskAttributionTiming.containerId`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/containerId)
    [[nodiscard]] jsbind::String containerId() const;
    /// [`TaskAttributionTiming.containerName`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/containerName)
    /// [`TaskAttributionTiming.containerName`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/containerName)
    [[nodiscard]] jsbind::String containerName() const;
    /// The toJSON method.
    /// [`TaskAttributionTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind