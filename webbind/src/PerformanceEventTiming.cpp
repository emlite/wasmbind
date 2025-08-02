#include <webbind/PerformanceEventTiming.hpp>
#include <webbind/Node.hpp>


PerformanceEventTiming PerformanceEventTiming::take_ownership(Handle h) noexcept {
        return PerformanceEventTiming(h);
    }
PerformanceEventTiming PerformanceEventTiming::clone() const noexcept { return *this; }
emlite::Val PerformanceEventTiming::instance() noexcept { return emlite::Val::global("PerformanceEventTiming"); }
PerformanceEventTiming::PerformanceEventTiming(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}
PerformanceEventTiming::PerformanceEventTiming(const emlite::Val &val) noexcept: PerformanceEntry(val) {}


jsbind::Any PerformanceEventTiming::processingStart() const {
    return PerformanceEntry::get("processingStart").as<jsbind::Any>();
}

jsbind::Any PerformanceEventTiming::processingEnd() const {
    return PerformanceEntry::get("processingEnd").as<jsbind::Any>();
}

bool PerformanceEventTiming::cancelable() const {
    return PerformanceEntry::get("cancelable").as<bool>();
}

Node PerformanceEventTiming::target() const {
    return PerformanceEntry::get("target").as<Node>();
}

long long PerformanceEventTiming::interactionId() const {
    return PerformanceEntry::get("interactionId").as<long long>();
}

jsbind::Object PerformanceEventTiming::toJSON() {
    return PerformanceEntry::call("toJSON").as<jsbind::Object>();
}

