#include <webbind/Performance.hpp>
#include <webbind/EventCounts.hpp>
#include <webbind/PerformanceTiming.hpp>
#include <webbind/PerformanceNavigation.hpp>
#include <webbind/PerformanceMark.hpp>
#include <webbind/PerformanceMeasure.hpp>


MemoryMeasurement::MemoryMeasurement(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MemoryMeasurement MemoryMeasurement::take_ownership(Handle h) noexcept {
        return MemoryMeasurement(h);
    }
MemoryMeasurement::MemoryMeasurement(const emlite::Val &val) noexcept: emlite::Val(val) {}
MemoryMeasurement::MemoryMeasurement() noexcept: emlite::Val(emlite::Val::object()) {}
MemoryMeasurement MemoryMeasurement::clone() const noexcept { return *this; }

long long MemoryMeasurement::bytes() const {
    return emlite::Val::get("bytes").as<long long>();
}

void MemoryMeasurement::bytes(long long value) {
    emlite::Val::set("bytes", value);
}

jsbind::TypedArray<jsbind::Any> MemoryMeasurement::breakdown() const {
    return emlite::Val::get("breakdown").as<jsbind::TypedArray<jsbind::Any>>();
}

void MemoryMeasurement::breakdown(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("breakdown", value);
}

PerformanceMarkOptions::PerformanceMarkOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceMarkOptions PerformanceMarkOptions::take_ownership(Handle h) noexcept {
        return PerformanceMarkOptions(h);
    }
PerformanceMarkOptions::PerformanceMarkOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PerformanceMarkOptions::PerformanceMarkOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PerformanceMarkOptions PerformanceMarkOptions::clone() const noexcept { return *this; }

jsbind::Any PerformanceMarkOptions::detail() const {
    return emlite::Val::get("detail").as<jsbind::Any>();
}

void PerformanceMarkOptions::detail(const jsbind::Any& value) {
    emlite::Val::set("detail", value);
}

jsbind::Any PerformanceMarkOptions::startTime() const {
    return emlite::Val::get("startTime").as<jsbind::Any>();
}

void PerformanceMarkOptions::startTime(const jsbind::Any& value) {
    emlite::Val::set("startTime", value);
}

Performance Performance::take_ownership(Handle h) noexcept {
        return Performance(h);
    }
Performance Performance::clone() const noexcept { return *this; }
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

