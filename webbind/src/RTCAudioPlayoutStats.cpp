#include "webbind/RTCAudioPlayoutStats.hpp"

using emlite::Val;
namespace webbind {

RTCAudioPlayoutStats::RTCAudioPlayoutStats(Handle h) noexcept : RTCStats(emlite::Val::take_ownership(h)) {}
RTCAudioPlayoutStats RTCAudioPlayoutStats::take_ownership(Handle h) noexcept {
        return RTCAudioPlayoutStats(h);
    }
RTCAudioPlayoutStats::RTCAudioPlayoutStats(const emlite::Val &val) noexcept: RTCStats(val) {}
RTCAudioPlayoutStats::RTCAudioPlayoutStats() noexcept: RTCStats(emlite::Val::object()) {}
RTCAudioPlayoutStats RTCAudioPlayoutStats::clone() const noexcept { return *this; }

jsbind::String RTCAudioPlayoutStats::kind() const {
    return emlite::Val::get("kind").as<jsbind::String>();
}

void RTCAudioPlayoutStats::kind(const jsbind::String& value) {
    emlite::Val::set("kind", value);
}

double RTCAudioPlayoutStats::synthesizedSamplesDuration() const {
    return emlite::Val::get("synthesizedSamplesDuration").as<double>();
}

void RTCAudioPlayoutStats::synthesizedSamplesDuration(double value) {
    emlite::Val::set("synthesizedSamplesDuration", value);
}

unsigned long RTCAudioPlayoutStats::synthesizedSamplesEvents() const {
    return emlite::Val::get("synthesizedSamplesEvents").as<unsigned long>();
}

void RTCAudioPlayoutStats::synthesizedSamplesEvents(unsigned long value) {
    emlite::Val::set("synthesizedSamplesEvents", value);
}

double RTCAudioPlayoutStats::totalSamplesDuration() const {
    return emlite::Val::get("totalSamplesDuration").as<double>();
}

void RTCAudioPlayoutStats::totalSamplesDuration(double value) {
    emlite::Val::set("totalSamplesDuration", value);
}

double RTCAudioPlayoutStats::totalPlayoutDelay() const {
    return emlite::Val::get("totalPlayoutDelay").as<double>();
}

void RTCAudioPlayoutStats::totalPlayoutDelay(double value) {
    emlite::Val::set("totalPlayoutDelay", value);
}

long long RTCAudioPlayoutStats::totalSamplesCount() const {
    return emlite::Val::get("totalSamplesCount").as<long long>();
}

void RTCAudioPlayoutStats::totalSamplesCount(long long value) {
    emlite::Val::set("totalSamplesCount", value);
}


} // namespace webbind