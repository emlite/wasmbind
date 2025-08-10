#include <webbind/PerformanceLongTaskTiming.hpp>
#include <webbind/TaskAttributionTiming.hpp>

namespace webbind {

PerformanceLongTaskTiming PerformanceLongTaskTiming::take_ownership(Handle h) noexcept {
    return PerformanceLongTaskTiming(h);
}

PerformanceLongTaskTiming PerformanceLongTaskTiming::clone() const noexcept { return *this; }

emlite::Val PerformanceLongTaskTiming::instance() noexcept { return emlite::Val::global("PerformanceLongTaskTiming"); }

PerformanceLongTaskTiming::PerformanceLongTaskTiming(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}

PerformanceLongTaskTiming::PerformanceLongTaskTiming(const emlite::Val &val) noexcept: PerformanceEntry(val) {}

jsbind::Any PerformanceLongTaskTiming::startTime() const {
    return PerformanceEntry::get("startTime").as<jsbind::Any>();
}

jsbind::Any PerformanceLongTaskTiming::duration() const {
    return PerformanceEntry::get("duration").as<jsbind::Any>();
}

jsbind::String PerformanceLongTaskTiming::name() const {
    return PerformanceEntry::get("name").as<jsbind::String>();
}

jsbind::String PerformanceLongTaskTiming::entryType() const {
    return PerformanceEntry::get("entryType").as<jsbind::String>();
}

jsbind::TypedArray<TaskAttributionTiming> PerformanceLongTaskTiming::attribution() const {
    return PerformanceEntry::get("attribution").as<jsbind::TypedArray<TaskAttributionTiming>>();
}

jsbind::Object PerformanceLongTaskTiming::toJSON() {
    return PerformanceEntry::call("toJSON").as<jsbind::Object>();
}


} // namespace webbind