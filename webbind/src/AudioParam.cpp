#include <webbind/AudioParam.hpp>
#include <webbind/AudioParam.hpp>

namespace webbind {

AudioParam AudioParam::take_ownership(Handle h) noexcept {
    return AudioParam(h);
}

AudioParam AudioParam::clone() const noexcept { return *this; }

emlite::Val AudioParam::instance() noexcept { return emlite::Val::global("AudioParam"); }

AudioParam::AudioParam(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

AudioParam::AudioParam(const emlite::Val &val) noexcept: emlite::Val(val) {}

float AudioParam::value() const {
    return emlite::Val::get("value").as<float>();
}

void AudioParam::value(float value) {
    emlite::Val::set("value", value);
}

AutomationRate AudioParam::automationRate() const {
    return emlite::Val::get("automationRate").as<AutomationRate>();
}

void AudioParam::automationRate(const AutomationRate& value) {
    emlite::Val::set("automationRate", value);
}

float AudioParam::defaultValue() const {
    return emlite::Val::get("defaultValue").as<float>();
}

float AudioParam::minValue() const {
    return emlite::Val::get("minValue").as<float>();
}

float AudioParam::maxValue() const {
    return emlite::Val::get("maxValue").as<float>();
}

AudioParam AudioParam::setValueAtTime(float value, double startTime) {
    return emlite::Val::call("setValueAtTime", value, startTime).as<AudioParam>();
}

AudioParam AudioParam::linearRampToValueAtTime(float value, double endTime) {
    return emlite::Val::call("linearRampToValueAtTime", value, endTime).as<AudioParam>();
}

AudioParam AudioParam::exponentialRampToValueAtTime(float value, double endTime) {
    return emlite::Val::call("exponentialRampToValueAtTime", value, endTime).as<AudioParam>();
}

AudioParam AudioParam::setTargetAtTime(float target, double startTime, float timeConstant) {
    return emlite::Val::call("setTargetAtTime", target, startTime, timeConstant).as<AudioParam>();
}

AudioParam AudioParam::setValueCurveAtTime(jsbind::TypedArray<float> values, double startTime, double duration) {
    return emlite::Val::call("setValueCurveAtTime", values, startTime, duration).as<AudioParam>();
}

AudioParam AudioParam::cancelScheduledValues(double cancelTime) {
    return emlite::Val::call("cancelScheduledValues", cancelTime).as<AudioParam>();
}

AudioParam AudioParam::cancelAndHoldAtTime(double cancelTime) {
    return emlite::Val::call("cancelAndHoldAtTime", cancelTime).as<AudioParam>();
}


} // namespace webbind