#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"


/// The TaskAttributionTiming class.
/// [`TaskAttributionTiming`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming)
class TaskAttributionTiming : public PerformanceEntry {
    explicit TaskAttributionTiming(Handle h) noexcept;

public:
    explicit TaskAttributionTiming(const emlite::Val &val) noexcept;
    static TaskAttributionTiming take_ownership(Handle h) noexcept;

    [[nodiscard]] TaskAttributionTiming clone() const noexcept;
    /// Getter of the `startTime` attribute.
    /// [`TaskAttributionTiming.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/startTime)
    [[nodiscard]] jsbind::Any startTime() const;
    /// Getter of the `duration` attribute.
    /// [`TaskAttributionTiming.duration`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/duration)
    [[nodiscard]] jsbind::Any duration() const;
    /// Getter of the `name` attribute.
    /// [`TaskAttributionTiming.name`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `entryType` attribute.
    /// [`TaskAttributionTiming.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/entryType)
    [[nodiscard]] jsbind::String entryType() const;
    /// Getter of the `containerType` attribute.
    /// [`TaskAttributionTiming.containerType`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/containerType)
    [[nodiscard]] jsbind::String containerType() const;
    /// Getter of the `containerSrc` attribute.
    /// [`TaskAttributionTiming.containerSrc`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/containerSrc)
    [[nodiscard]] jsbind::String containerSrc() const;
    /// Getter of the `containerId` attribute.
    /// [`TaskAttributionTiming.containerId`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/containerId)
    [[nodiscard]] jsbind::String containerId() const;
    /// Getter of the `containerName` attribute.
    /// [`TaskAttributionTiming.containerName`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/containerName)
    [[nodiscard]] jsbind::String containerName() const;
    /// The toJSON method.
    /// [`TaskAttributionTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/TaskAttributionTiming/toJSON)
    jsbind::Object toJSON();
};

