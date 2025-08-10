#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PerformanceResourceTiming.hpp"
#include "enums.hpp"

namespace webbind {

class NotRestoredReasons;

/// Interface PerformanceNavigationTiming
/// [`PerformanceNavigationTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming)
class PerformanceNavigationTiming : public PerformanceResourceTiming {
    explicit PerformanceNavigationTiming(Handle h) noexcept;
public:
    explicit PerformanceNavigationTiming(const emlite::Val &val) noexcept;
    static PerformanceNavigationTiming take_ownership(Handle h) noexcept;
    [[nodiscard]] PerformanceNavigationTiming clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`PerformanceNavigationTiming.unloadEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/unloadEventStart)
    /// [`PerformanceNavigationTiming.unloadEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/unloadEventStart)
    [[nodiscard]] jsbind::Any unloadEventStart() const;
    /// [`PerformanceNavigationTiming.unloadEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/unloadEventEnd)
    /// [`PerformanceNavigationTiming.unloadEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/unloadEventEnd)
    [[nodiscard]] jsbind::Any unloadEventEnd() const;
    /// [`PerformanceNavigationTiming.domInteractive`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/domInteractive)
    /// [`PerformanceNavigationTiming.domInteractive`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/domInteractive)
    [[nodiscard]] jsbind::Any domInteractive() const;
    /// [`PerformanceNavigationTiming.domContentLoadedEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/domContentLoadedEventStart)
    /// [`PerformanceNavigationTiming.domContentLoadedEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/domContentLoadedEventStart)
    [[nodiscard]] jsbind::Any domContentLoadedEventStart() const;
    /// [`PerformanceNavigationTiming.domContentLoadedEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/domContentLoadedEventEnd)
    /// [`PerformanceNavigationTiming.domContentLoadedEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/domContentLoadedEventEnd)
    [[nodiscard]] jsbind::Any domContentLoadedEventEnd() const;
    /// [`PerformanceNavigationTiming.domComplete`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/domComplete)
    /// [`PerformanceNavigationTiming.domComplete`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/domComplete)
    [[nodiscard]] jsbind::Any domComplete() const;
    /// [`PerformanceNavigationTiming.loadEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/loadEventStart)
    /// [`PerformanceNavigationTiming.loadEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/loadEventStart)
    [[nodiscard]] jsbind::Any loadEventStart() const;
    /// [`PerformanceNavigationTiming.loadEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/loadEventEnd)
    /// [`PerformanceNavigationTiming.loadEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/loadEventEnd)
    [[nodiscard]] jsbind::Any loadEventEnd() const;
    /// [`PerformanceNavigationTiming.type`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/type)
    /// [`PerformanceNavigationTiming.type`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/type)
    [[nodiscard]] NavigationTimingType type() const;
    /// [`PerformanceNavigationTiming.redirectCount`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/redirectCount)
    /// [`PerformanceNavigationTiming.redirectCount`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/redirectCount)
    [[nodiscard]] unsigned short redirectCount() const;
    /// [`PerformanceNavigationTiming.criticalCHRestart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/criticalCHRestart)
    /// [`PerformanceNavigationTiming.criticalCHRestart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/criticalCHRestart)
    [[nodiscard]] jsbind::Any criticalCHRestart() const;
    /// [`PerformanceNavigationTiming.notRestoredReasons`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/notRestoredReasons)
    /// [`PerformanceNavigationTiming.notRestoredReasons`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/notRestoredReasons)
    [[nodiscard]] NotRestoredReasons notRestoredReasons() const;
    /// The toJSON method.
    /// [`PerformanceNavigationTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/toJSON)
    jsbind::Object toJSON();
    /// [`PerformanceNavigationTiming.activationStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/activationStart)
    /// [`PerformanceNavigationTiming.activationStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/activationStart)
    [[nodiscard]] jsbind::Any activationStart() const;
};

} // namespace webbind