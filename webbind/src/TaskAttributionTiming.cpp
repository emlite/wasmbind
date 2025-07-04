#include <webbind/TaskAttributionTiming.hpp>


TaskAttributionTiming TaskAttributionTiming::take_ownership(Handle h) noexcept {
        return TaskAttributionTiming(h);
    }
TaskAttributionTiming TaskAttributionTiming::clone() const noexcept { return *this; }
TaskAttributionTiming::TaskAttributionTiming(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}
TaskAttributionTiming::TaskAttributionTiming(const emlite::Val &val) noexcept: PerformanceEntry(val) {}


jsbind::Any TaskAttributionTiming::startTime() const {
    return PerformanceEntry::get("startTime").as<jsbind::Any>();
}

jsbind::Any TaskAttributionTiming::duration() const {
    return PerformanceEntry::get("duration").as<jsbind::Any>();
}

jsbind::DOMString TaskAttributionTiming::name() const {
    return PerformanceEntry::get("name").as<jsbind::DOMString>();
}

jsbind::DOMString TaskAttributionTiming::entryType() const {
    return PerformanceEntry::get("entryType").as<jsbind::DOMString>();
}

jsbind::DOMString TaskAttributionTiming::containerType() const {
    return PerformanceEntry::get("containerType").as<jsbind::DOMString>();
}

jsbind::DOMString TaskAttributionTiming::containerSrc() const {
    return PerformanceEntry::get("containerSrc").as<jsbind::DOMString>();
}

jsbind::DOMString TaskAttributionTiming::containerId() const {
    return PerformanceEntry::get("containerId").as<jsbind::DOMString>();
}

jsbind::DOMString TaskAttributionTiming::containerName() const {
    return PerformanceEntry::get("containerName").as<jsbind::DOMString>();
}

jsbind::Object TaskAttributionTiming::toJSON() {
    return PerformanceEntry::call("toJSON").as<jsbind::Object>();
}

