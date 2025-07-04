#include <webbind/PerformanceServerTiming.hpp>


PerformanceServerTiming PerformanceServerTiming::take_ownership(Handle h) noexcept {
        return PerformanceServerTiming(h);
    }
PerformanceServerTiming PerformanceServerTiming::clone() const noexcept { return *this; }
PerformanceServerTiming::PerformanceServerTiming(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceServerTiming::PerformanceServerTiming(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString PerformanceServerTiming::name() const {
    return emlite::Val::get("name").as<jsbind::DOMString>();
}

jsbind::Any PerformanceServerTiming::duration() const {
    return emlite::Val::get("duration").as<jsbind::Any>();
}

jsbind::DOMString PerformanceServerTiming::description() const {
    return emlite::Val::get("description").as<jsbind::DOMString>();
}

jsbind::Object PerformanceServerTiming::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}

