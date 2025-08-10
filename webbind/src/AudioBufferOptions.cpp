#include "webbind/AudioBufferOptions.hpp"

using emlite::Val;
namespace webbind {

AudioBufferOptions::AudioBufferOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioBufferOptions AudioBufferOptions::take_ownership(Handle h) noexcept {
        return AudioBufferOptions(h);
    }
AudioBufferOptions::AudioBufferOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioBufferOptions::AudioBufferOptions() noexcept: emlite::Val(emlite::Val::object()) {}
AudioBufferOptions AudioBufferOptions::clone() const noexcept { return *this; }

unsigned long AudioBufferOptions::numberOfChannels() const {
    return emlite::Val::get("numberOfChannels").as<unsigned long>();
}

void AudioBufferOptions::numberOfChannels(unsigned long value) {
    emlite::Val::set("numberOfChannels", value);
}

unsigned long AudioBufferOptions::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

void AudioBufferOptions::length(unsigned long value) {
    emlite::Val::set("length", value);
}

float AudioBufferOptions::sampleRate() const {
    return emlite::Val::get("sampleRate").as<float>();
}

void AudioBufferOptions::sampleRate(float value) {
    emlite::Val::set("sampleRate", value);
}


} // namespace webbind