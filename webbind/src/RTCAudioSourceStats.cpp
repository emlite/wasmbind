#include <webbind/RTCAudioSourceStats.hpp>

namespace webbind {

RTCAudioSourceStats::RTCAudioSourceStats(Handle h) noexcept : RTCMediaSourceStats(emlite::Val::take_ownership(h)) {}
RTCAudioSourceStats RTCAudioSourceStats::take_ownership(Handle h) noexcept {
    return RTCAudioSourceStats(h);
}

RTCAudioSourceStats::RTCAudioSourceStats(const emlite::Val &val) noexcept: RTCMediaSourceStats(val) {}

RTCAudioSourceStats::RTCAudioSourceStats() noexcept: RTCMediaSourceStats(emlite::Val::object()) {}

RTCAudioSourceStats RTCAudioSourceStats::clone() const noexcept { return *this; }

double RTCAudioSourceStats::audioLevel() const {
    return emlite::Val::get("audioLevel").as<double>();
}

void RTCAudioSourceStats::audioLevel(double value) {
    emlite::Val::set("audioLevel", value);
}

double RTCAudioSourceStats::totalAudioEnergy() const {
    return emlite::Val::get("totalAudioEnergy").as<double>();
}

void RTCAudioSourceStats::totalAudioEnergy(double value) {
    emlite::Val::set("totalAudioEnergy", value);
}

double RTCAudioSourceStats::totalSamplesDuration() const {
    return emlite::Val::get("totalSamplesDuration").as<double>();
}

void RTCAudioSourceStats::totalSamplesDuration(double value) {
    emlite::Val::set("totalSamplesDuration", value);
}

double RTCAudioSourceStats::echoReturnLoss() const {
    return emlite::Val::get("echoReturnLoss").as<double>();
}

void RTCAudioSourceStats::echoReturnLoss(double value) {
    emlite::Val::set("echoReturnLoss", value);
}

double RTCAudioSourceStats::echoReturnLossEnhancement() const {
    return emlite::Val::get("echoReturnLossEnhancement").as<double>();
}

void RTCAudioSourceStats::echoReturnLossEnhancement(double value) {
    emlite::Val::set("echoReturnLossEnhancement", value);
}


} // namespace webbind