#include <webbind/AudioParamDescriptor.hpp>

namespace webbind {

AudioParamDescriptor::AudioParamDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioParamDescriptor AudioParamDescriptor::take_ownership(Handle h) noexcept {
    return AudioParamDescriptor(h);
}

AudioParamDescriptor::AudioParamDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}

AudioParamDescriptor::AudioParamDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}

AudioParamDescriptor AudioParamDescriptor::clone() const noexcept { return *this; }

jsbind::String AudioParamDescriptor::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void AudioParamDescriptor::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

float AudioParamDescriptor::defaultValue() const {
    return emlite::Val::get("defaultValue").as<float>();
}

void AudioParamDescriptor::defaultValue(float value) {
    emlite::Val::set("defaultValue", value);
}

float AudioParamDescriptor::minValue() const {
    return emlite::Val::get("minValue").as<float>();
}

void AudioParamDescriptor::minValue(float value) {
    emlite::Val::set("minValue", value);
}

float AudioParamDescriptor::maxValue() const {
    return emlite::Val::get("maxValue").as<float>();
}

void AudioParamDescriptor::maxValue(float value) {
    emlite::Val::set("maxValue", value);
}

AutomationRate AudioParamDescriptor::automationRate() const {
    return emlite::Val::get("automationRate").as<AutomationRate>();
}

void AudioParamDescriptor::automationRate(const AutomationRate& value) {
    emlite::Val::set("automationRate", value);
}


} // namespace webbind