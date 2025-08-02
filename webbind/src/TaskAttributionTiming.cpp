#include <webbind/TaskAttributionTiming.hpp>


TaskAttributionTiming TaskAttributionTiming::take_ownership(Handle h) noexcept {
        return TaskAttributionTiming(h);
    }
TaskAttributionTiming TaskAttributionTiming::clone() const noexcept { return *this; }
emlite::Val TaskAttributionTiming::instance() noexcept { return emlite::Val::global("TaskAttributionTiming"); }
TaskAttributionTiming::TaskAttributionTiming(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}
TaskAttributionTiming::TaskAttributionTiming(const emlite::Val &val) noexcept: PerformanceEntry(val) {}


jsbind::Any TaskAttributionTiming::startTime() const {
    return PerformanceEntry::get("startTime").as<jsbind::Any>();
}

jsbind::Any TaskAttributionTiming::duration() const {
    return PerformanceEntry::get("duration").as<jsbind::Any>();
}

jsbind::String TaskAttributionTiming::name() const {
    return PerformanceEntry::get("name").as<jsbind::String>();
}

jsbind::String TaskAttributionTiming::entryType() const {
    return PerformanceEntry::get("entryType").as<jsbind::String>();
}

jsbind::String TaskAttributionTiming::containerType() const {
    return PerformanceEntry::get("containerType").as<jsbind::String>();
}

jsbind::String TaskAttributionTiming::containerSrc() const {
    return PerformanceEntry::get("containerSrc").as<jsbind::String>();
}

jsbind::String TaskAttributionTiming::containerId() const {
    return PerformanceEntry::get("containerId").as<jsbind::String>();
}

jsbind::String TaskAttributionTiming::containerName() const {
    return PerformanceEntry::get("containerName").as<jsbind::String>();
}

jsbind::Object TaskAttributionTiming::toJSON() {
    return PerformanceEntry::call("toJSON").as<jsbind::Object>();
}

