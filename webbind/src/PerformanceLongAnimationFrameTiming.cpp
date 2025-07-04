#include <webbind/PerformanceLongAnimationFrameTiming.hpp>
#include <webbind/PerformanceScriptTiming.hpp>


PerformanceLongAnimationFrameTiming PerformanceLongAnimationFrameTiming::take_ownership(Handle h) noexcept {
        return PerformanceLongAnimationFrameTiming(h);
    }
PerformanceLongAnimationFrameTiming PerformanceLongAnimationFrameTiming::clone() const noexcept { return *this; }
PerformanceLongAnimationFrameTiming::PerformanceLongAnimationFrameTiming(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}
PerformanceLongAnimationFrameTiming::PerformanceLongAnimationFrameTiming(const emlite::Val &val) noexcept: PerformanceEntry(val) {}


jsbind::Any PerformanceLongAnimationFrameTiming::startTime() const {
    return PerformanceEntry::get("startTime").as<jsbind::Any>();
}

jsbind::Any PerformanceLongAnimationFrameTiming::duration() const {
    return PerformanceEntry::get("duration").as<jsbind::Any>();
}

jsbind::DOMString PerformanceLongAnimationFrameTiming::name() const {
    return PerformanceEntry::get("name").as<jsbind::DOMString>();
}

jsbind::DOMString PerformanceLongAnimationFrameTiming::entryType() const {
    return PerformanceEntry::get("entryType").as<jsbind::DOMString>();
}

jsbind::Any PerformanceLongAnimationFrameTiming::renderStart() const {
    return PerformanceEntry::get("renderStart").as<jsbind::Any>();
}

jsbind::Any PerformanceLongAnimationFrameTiming::styleAndLayoutStart() const {
    return PerformanceEntry::get("styleAndLayoutStart").as<jsbind::Any>();
}

jsbind::Any PerformanceLongAnimationFrameTiming::blockingDuration() const {
    return PerformanceEntry::get("blockingDuration").as<jsbind::Any>();
}

jsbind::Any PerformanceLongAnimationFrameTiming::firstUIEventTimestamp() const {
    return PerformanceEntry::get("firstUIEventTimestamp").as<jsbind::Any>();
}

jsbind::FrozenArray<PerformanceScriptTiming> PerformanceLongAnimationFrameTiming::scripts() const {
    return PerformanceEntry::get("scripts").as<jsbind::FrozenArray<PerformanceScriptTiming>>();
}

jsbind::Object PerformanceLongAnimationFrameTiming::toJSON() {
    return PerformanceEntry::call("toJSON").as<jsbind::Object>();
}

jsbind::Any PerformanceLongAnimationFrameTiming::paintTime() const {
    return PerformanceEntry::get("paintTime").as<jsbind::Any>();
}

jsbind::Any PerformanceLongAnimationFrameTiming::presentationTime() const {
    return PerformanceEntry::get("presentationTime").as<jsbind::Any>();
}

