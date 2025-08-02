#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"

class Node;


/// The PerformanceEventTiming class.
/// [`PerformanceEventTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming)
class PerformanceEventTiming : public PerformanceEntry {
    explicit PerformanceEventTiming(Handle h) noexcept;

public:
    explicit PerformanceEventTiming(const emlite::Val &val) noexcept;
    static PerformanceEventTiming take_ownership(Handle h) noexcept;

    [[nodiscard]] PerformanceEventTiming clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `processingStart` attribute.
    /// [`PerformanceEventTiming.processingStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/processingStart)
    [[nodiscard]] jsbind::Any processingStart() const;
    /// Getter of the `processingEnd` attribute.
    /// [`PerformanceEventTiming.processingEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/processingEnd)
    [[nodiscard]] jsbind::Any processingEnd() const;
    /// Getter of the `cancelable` attribute.
    /// [`PerformanceEventTiming.cancelable`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/cancelable)
    [[nodiscard]] bool cancelable() const;
    /// Getter of the `target` attribute.
    /// [`PerformanceEventTiming.target`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/target)
    [[nodiscard]] Node target() const;
    /// Getter of the `interactionId` attribute.
    /// [`PerformanceEventTiming.interactionId`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/interactionId)
    [[nodiscard]] long long interactionId() const;
    /// The toJSON method.
    /// [`PerformanceEventTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/toJSON)
    jsbind::Object toJSON();
};

