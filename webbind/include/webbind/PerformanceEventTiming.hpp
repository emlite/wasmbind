#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PerformanceEntry.hpp"

namespace webbind {

class Node;

/// Interface PerformanceEventTiming
/// [`PerformanceEventTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming)
class PerformanceEventTiming : public PerformanceEntry {
    explicit PerformanceEventTiming(Handle h) noexcept;
public:
    explicit PerformanceEventTiming(const emlite::Val &val) noexcept;
    static PerformanceEventTiming take_ownership(Handle h) noexcept;
    [[nodiscard]] PerformanceEventTiming clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`PerformanceEventTiming.processingStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/processingStart)
    /// [`PerformanceEventTiming.processingStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/processingStart)
    [[nodiscard]] jsbind::Any processingStart() const;
    /// [`PerformanceEventTiming.processingEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/processingEnd)
    /// [`PerformanceEventTiming.processingEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/processingEnd)
    [[nodiscard]] jsbind::Any processingEnd() const;
    /// [`PerformanceEventTiming.cancelable`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/cancelable)
    /// [`PerformanceEventTiming.cancelable`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/cancelable)
    [[nodiscard]] bool cancelable() const;
    /// [`PerformanceEventTiming.target`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/target)
    /// [`PerformanceEventTiming.target`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/target)
    [[nodiscard]] Node target() const;
    /// [`PerformanceEventTiming.interactionId`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/interactionId)
    /// [`PerformanceEventTiming.interactionId`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/interactionId)
    [[nodiscard]] long long interactionId() const;
    /// The toJSON method.
    /// [`PerformanceEventTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceEventTiming/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind