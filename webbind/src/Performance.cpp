#include <webbind/Performance.hpp>
#include <webbind/EventCounts.hpp>
#include <webbind/PerformanceTiming.hpp>
#include <webbind/PerformanceNavigation.hpp>
#include <webbind/MemoryMeasurement.hpp>
#include <webbind/PerformanceMark.hpp>
#include <webbind/PerformanceMarkOptions.hpp>
#include <webbind/PerformanceMeasure.hpp>

namespace webbind {

Performance Performance::take_ownership(Handle h) noexcept {
        return Performance(h);
    }
Performance Performance::clone() const noexcept { return *this; }
emlite::Val Performance::instance() noexcept { return emlite::Val::global("Performance"); }
Performance::Performance(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
Performance::Performance(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Any Performance::now() {
    return EventTarget::call("now").as<jsbind::Any>();
}

jsbind::Any Performance::timeOrigin() const {
    return EventTarget::get("timeOrigin").as<jsbind::Any>();
}

jsbind::Object Performance::toJSON() {
    return EventTarget::call("toJSON").as<jsbind::Object>();
}

EventCounts Performance::eventCounts() const {
    return EventTarget::get("eventCounts").as<EventCounts>();
}

long long Performance::interactionCount() const {
    return EventTarget::get("interactionCount").as<long long>();
}

PerformanceTiming Performance::timing() const {
    return EventTarget::get("timing").as<PerformanceTiming>();
}

PerformanceNavigation Performance::navigation() const {
    return EventTarget::get("navigation").as<PerformanceNavigation>();
}

jsbind::Promise<MemoryMeasurement> Performance::measureUserAgentSpecificMemory() {
    return EventTarget::call("measureUserAgentSpecificMemory").as<jsbind::Promise<MemoryMeasurement>>();
}

jsbind::Any Performance::getEntries() {
    return EventTarget::call("getEntries").as<jsbind::Any>();
}

jsbind::Any Performance::getEntriesByType(const jsbind::String& type) {
    return EventTarget::call("getEntriesByType", type).as<jsbind::Any>();
}

jsbind::Any Performance::getEntriesByName(const jsbind::String& name) {
    return EventTarget::call("getEntriesByName", name).as<jsbind::Any>();
}

jsbind::Any Performance::getEntriesByName(const jsbind::String& name, const jsbind::String& type) {
    return EventTarget::call("getEntriesByName", name, type).as<jsbind::Any>();
}

jsbind::Undefined Performance::clearResourceTimings() {
    return EventTarget::call("clearResourceTimings").as<jsbind::Undefined>();
}

jsbind::Undefined Performance::setResourceTimingBufferSize(unsigned long maxSize) {
    return EventTarget::call("setResourceTimingBufferSize", maxSize).as<jsbind::Undefined>();
}

jsbind::Any Performance::onresourcetimingbufferfull() const {
    return EventTarget::get("onresourcetimingbufferfull").as<jsbind::Any>();
}

void Performance::onresourcetimingbufferfull(const jsbind::Any& value) {
    EventTarget::set("onresourcetimingbufferfull", value);
}

PerformanceMark Performance::mark(const jsbind::String& markName) {
    return EventTarget::call("mark", markName).as<PerformanceMark>();
}

PerformanceMark Performance::mark(const jsbind::String& markName, const PerformanceMarkOptions& markOptions) {
    return EventTarget::call("mark", markName, markOptions).as<PerformanceMark>();
}

jsbind::Undefined Performance::clearMarks() {
    return EventTarget::call("clearMarks").as<jsbind::Undefined>();
}

jsbind::Undefined Performance::clearMarks(const jsbind::String& markName) {
    return EventTarget::call("clearMarks", markName).as<jsbind::Undefined>();
}

PerformanceMeasure Performance::measure(const jsbind::String& measureName) {
    return EventTarget::call("measure", measureName).as<PerformanceMeasure>();
}

PerformanceMeasure Performance::measure(const jsbind::String& measureName, const jsbind::Any& startOrMeasureOptions) {
    return EventTarget::call("measure", measureName, startOrMeasureOptions).as<PerformanceMeasure>();
}

PerformanceMeasure Performance::measure(const jsbind::String& measureName, const jsbind::Any& startOrMeasureOptions, const jsbind::String& endMark) {
    return EventTarget::call("measure", measureName, startOrMeasureOptions, endMark).as<PerformanceMeasure>();
}

jsbind::Undefined Performance::clearMeasures() {
    return EventTarget::call("clearMeasures").as<jsbind::Undefined>();
}

jsbind::Undefined Performance::clearMeasures(const jsbind::String& measureName) {
    return EventTarget::call("clearMeasures", measureName).as<jsbind::Undefined>();
}


} // namespace webbind