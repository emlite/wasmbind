#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceResourceTiming.hpp"
#include "enums.hpp"

class NotRestoredReasons;


class PerformanceNavigationTiming : public PerformanceResourceTiming {
    explicit PerformanceNavigationTiming(Handle h) noexcept;

public:
    explicit PerformanceNavigationTiming(const emlite::Val &val) noexcept;
    static PerformanceNavigationTiming take_ownership(Handle h) noexcept;

    PerformanceNavigationTiming clone() const noexcept;
    jsbind::Any unloadEventStart() const;
    jsbind::Any unloadEventEnd() const;
    jsbind::Any domInteractive() const;
    jsbind::Any domContentLoadedEventStart() const;
    jsbind::Any domContentLoadedEventEnd() const;
    jsbind::Any domComplete() const;
    jsbind::Any loadEventStart() const;
    jsbind::Any loadEventEnd() const;
    NavigationTimingType type() const;
    unsigned short redirectCount() const;
    jsbind::Any criticalCHRestart() const;
    NotRestoredReasons notRestoredReasons() const;
    jsbind::Object toJSON();
    jsbind::Any activationStart() const;
};

