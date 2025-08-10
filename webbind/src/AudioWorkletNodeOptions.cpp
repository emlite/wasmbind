#include "webbind/AudioWorkletNodeOptions.hpp"

using emlite::Val;
namespace webbind {

AudioWorkletNodeOptions::AudioWorkletNodeOptions(Handle h) noexcept : AudioNodeOptions(emlite::Val::take_ownership(h)) {}
AudioWorkletNodeOptions AudioWorkletNodeOptions::take_ownership(Handle h) noexcept {
        return AudioWorkletNodeOptions(h);
    }
AudioWorkletNodeOptions::AudioWorkletNodeOptions(const emlite::Val &val) noexcept: AudioNodeOptions(val) {}
AudioWorkletNodeOptions::AudioWorkletNodeOptions() noexcept: AudioNodeOptions(emlite::Val::object()) {}
AudioWorkletNodeOptions AudioWorkletNodeOptions::clone() const noexcept { return *this; }

unsigned long AudioWorkletNodeOptions::numberOfInputs() const {
    return emlite::Val::get("numberOfInputs").as<unsigned long>();
}

void AudioWorkletNodeOptions::numberOfInputs(unsigned long value) {
    emlite::Val::set("numberOfInputs", value);
}

unsigned long AudioWorkletNodeOptions::numberOfOutputs() const {
    return emlite::Val::get("numberOfOutputs").as<unsigned long>();
}

void AudioWorkletNodeOptions::numberOfOutputs(unsigned long value) {
    emlite::Val::set("numberOfOutputs", value);
}

jsbind::TypedArray<unsigned long> AudioWorkletNodeOptions::outputChannelCount() const {
    return emlite::Val::get("outputChannelCount").as<jsbind::TypedArray<unsigned long>>();
}

void AudioWorkletNodeOptions::outputChannelCount(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("outputChannelCount", value);
}

jsbind::Record<jsbind::String, double> AudioWorkletNodeOptions::parameterData() const {
    return emlite::Val::get("parameterData").as<jsbind::Record<jsbind::String, double>>();
}

void AudioWorkletNodeOptions::parameterData(jsbind::Record<jsbind::String, double> value) {
    emlite::Val::set("parameterData", value);
}

jsbind::Object AudioWorkletNodeOptions::processorOptions() const {
    return emlite::Val::get("processorOptions").as<jsbind::Object>();
}

void AudioWorkletNodeOptions::processorOptions(const jsbind::Object& value) {
    emlite::Val::set("processorOptions", value);
}


} // namespace webbind