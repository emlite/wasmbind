#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceResourceTiming.hpp"
#include "enums.hpp"

class NotRestoredReasons;


/// The PerformanceNavigationTiming class.
/// [`PerformanceNavigationTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming)
class PerformanceNavigationTiming : public PerformanceResourceTiming {
    explicit PerformanceNavigationTiming(Handle h) noexcept;

public:
    explicit PerformanceNavigationTiming(const emlite::Val &val) noexcept;
    static PerformanceNavigationTiming take_ownership(Handle h) noexcept;

    [[nodiscard]] PerformanceNavigationTiming clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `unloadEventStart` attribute.
    /// [`PerformanceNavigationTiming.unloadEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/unloadEventStart)
    [[nodiscard]] jsbind::Any unloadEventStart() const;
    /// Getter of the `unloadEventEnd` attribute.
    /// [`PerformanceNavigationTiming.unloadEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/unloadEventEnd)
    [[nodiscard]] jsbind::Any unloadEventEnd() const;
    /// Getter of the `domInteractive` attribute.
    /// [`PerformanceNavigationTiming.domInteractive`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/domInteractive)
    [[nodiscard]] jsbind::Any domInteractive() const;
    /// Getter of the `domContentLoadedEventStart` attribute.
    /// [`PerformanceNavigationTiming.domContentLoadedEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/domContentLoadedEventStart)
    [[nodiscard]] jsbind::Any domContentLoadedEventStart() const;
    /// Getter of the `domContentLoadedEventEnd` attribute.
    /// [`PerformanceNavigationTiming.domContentLoadedEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/domContentLoadedEventEnd)
    [[nodiscard]] jsbind::Any domContentLoadedEventEnd() const;
    /// Getter of the `domComplete` attribute.
    /// [`PerformanceNavigationTiming.domComplete`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/domComplete)
    [[nodiscard]] jsbind::Any domComplete() const;
    /// Getter of the `loadEventStart` attribute.
    /// [`PerformanceNavigationTiming.loadEventStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/loadEventStart)
    [[nodiscard]] jsbind::Any loadEventStart() const;
    /// Getter of the `loadEventEnd` attribute.
    /// [`PerformanceNavigationTiming.loadEventEnd`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/loadEventEnd)
    [[nodiscard]] jsbind::Any loadEventEnd() const;
    /// Getter of the `type` attribute.
    /// [`PerformanceNavigationTiming.type`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/type)
    [[nodiscard]] NavigationTimingType type() const;
    /// Getter of the `redirectCount` attribute.
    /// [`PerformanceNavigationTiming.redirectCount`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/redirectCount)
    [[nodiscard]] unsigned short redirectCount() const;
    /// Getter of the `criticalCHRestart` attribute.
    /// [`PerformanceNavigationTiming.criticalCHRestart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/criticalCHRestart)
    [[nodiscard]] jsbind::Any criticalCHRestart() const;
    /// Getter of the `notRestoredReasons` attribute.
    /// [`PerformanceNavigationTiming.notRestoredReasons`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/notRestoredReasons)
    [[nodiscard]] NotRestoredReasons notRestoredReasons() const;
    /// The toJSON method.
    /// [`PerformanceNavigationTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/toJSON)
    jsbind::Object toJSON();
    /// Getter of the `activationStart` attribute.
    /// [`PerformanceNavigationTiming.activationStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigationTiming/activationStart)
    [[nodiscard]] jsbind::Any activationStart() const;
};

