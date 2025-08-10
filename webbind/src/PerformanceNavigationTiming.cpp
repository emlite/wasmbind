#include <webbind/PerformanceNavigationTiming.hpp>
#include <webbind/NotRestoredReasons.hpp>

namespace webbind {

PerformanceNavigationTiming PerformanceNavigationTiming::take_ownership(Handle h) noexcept {
    return PerformanceNavigationTiming(h);
}

PerformanceNavigationTiming PerformanceNavigationTiming::clone() const noexcept { return *this; }

emlite::Val PerformanceNavigationTiming::instance() noexcept { return emlite::Val::global("PerformanceNavigationTiming"); }

PerformanceNavigationTiming::PerformanceNavigationTiming(Handle h) noexcept : PerformanceResourceTiming(emlite::Val::take_ownership(h)) {}

PerformanceNavigationTiming::PerformanceNavigationTiming(const emlite::Val &val) noexcept: PerformanceResourceTiming(val) {}

jsbind::Any PerformanceNavigationTiming::unloadEventStart() const {
    return PerformanceResourceTiming::get("unloadEventStart").as<jsbind::Any>();
}

jsbind::Any PerformanceNavigationTiming::unloadEventEnd() const {
    return PerformanceResourceTiming::get("unloadEventEnd").as<jsbind::Any>();
}

jsbind::Any PerformanceNavigationTiming::domInteractive() const {
    return PerformanceResourceTiming::get("domInteractive").as<jsbind::Any>();
}

jsbind::Any PerformanceNavigationTiming::domContentLoadedEventStart() const {
    return PerformanceResourceTiming::get("domContentLoadedEventStart").as<jsbind::Any>();
}

jsbind::Any PerformanceNavigationTiming::domContentLoadedEventEnd() const {
    return PerformanceResourceTiming::get("domContentLoadedEventEnd").as<jsbind::Any>();
}

jsbind::Any PerformanceNavigationTiming::domComplete() const {
    return PerformanceResourceTiming::get("domComplete").as<jsbind::Any>();
}

jsbind::Any PerformanceNavigationTiming::loadEventStart() const {
    return PerformanceResourceTiming::get("loadEventStart").as<jsbind::Any>();
}

jsbind::Any PerformanceNavigationTiming::loadEventEnd() const {
    return PerformanceResourceTiming::get("loadEventEnd").as<jsbind::Any>();
}

NavigationTimingType PerformanceNavigationTiming::type() const {
    return PerformanceResourceTiming::get("type").as<NavigationTimingType>();
}

unsigned short PerformanceNavigationTiming::redirectCount() const {
    return PerformanceResourceTiming::get("redirectCount").as<unsigned short>();
}

jsbind::Any PerformanceNavigationTiming::criticalCHRestart() const {
    return PerformanceResourceTiming::get("criticalCHRestart").as<jsbind::Any>();
}

NotRestoredReasons PerformanceNavigationTiming::notRestoredReasons() const {
    return PerformanceResourceTiming::get("notRestoredReasons").as<NotRestoredReasons>();
}

jsbind::Object PerformanceNavigationTiming::toJSON() {
    return PerformanceResourceTiming::call("toJSON").as<jsbind::Object>();
}

jsbind::Any PerformanceNavigationTiming::activationStart() const {
    return PerformanceResourceTiming::get("activationStart").as<jsbind::Any>();
}


} // namespace webbind