#include <webbind/PerformanceServerTiming.hpp>


PerformanceServerTiming PerformanceServerTiming::take_ownership(Handle h) noexcept {
        return PerformanceServerTiming(h);
    }
PerformanceServerTiming PerformanceServerTiming::clone() const noexcept { return *this; }
PerformanceServerTiming::PerformanceServerTiming(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceServerTiming::PerformanceServerTiming(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String PerformanceServerTiming::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

jsbind::Any PerformanceServerTiming::duration() const {
    return emlite::Val::get("duration").as<jsbind::Any>();
}

jsbind::String PerformanceServerTiming::description() const {
    return emlite::Val::get("description").as<jsbind::String>();
}

jsbind::Object PerformanceServerTiming::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}

