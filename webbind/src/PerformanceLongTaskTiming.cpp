#include <webbind/PerformanceLongTaskTiming.hpp>
#include <webbind/TaskAttributionTiming.hpp>


PerformanceLongTaskTiming PerformanceLongTaskTiming::take_ownership(Handle h) noexcept {
        return PerformanceLongTaskTiming(h);
    }
PerformanceLongTaskTiming PerformanceLongTaskTiming::clone() const noexcept { return *this; }
PerformanceLongTaskTiming::PerformanceLongTaskTiming(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}
PerformanceLongTaskTiming::PerformanceLongTaskTiming(const emlite::Val &val) noexcept: PerformanceEntry(val) {}


jsbind::Any PerformanceLongTaskTiming::startTime() const {
    return PerformanceEntry::get("startTime").as<jsbind::Any>();
}

jsbind::Any PerformanceLongTaskTiming::duration() const {
    return PerformanceEntry::get("duration").as<jsbind::Any>();
}

jsbind::DOMString PerformanceLongTaskTiming::name() const {
    return PerformanceEntry::get("name").as<jsbind::DOMString>();
}

jsbind::DOMString PerformanceLongTaskTiming::entryType() const {
    return PerformanceEntry::get("entryType").as<jsbind::DOMString>();
}

jsbind::FrozenArray<TaskAttributionTiming> PerformanceLongTaskTiming::attribution() const {
    return PerformanceEntry::get("attribution").as<jsbind::FrozenArray<TaskAttributionTiming>>();
}

jsbind::Object PerformanceLongTaskTiming::toJSON() {
    return PerformanceEntry::call("toJSON").as<jsbind::Object>();
}

