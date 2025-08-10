#include "webbind/AudioBufferSourceOptions.hpp"
#include "webbind/AudioBuffer.hpp"

using emlite::Val;
namespace webbind {

AudioBufferSourceOptions::AudioBufferSourceOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioBufferSourceOptions AudioBufferSourceOptions::take_ownership(Handle h) noexcept {
        return AudioBufferSourceOptions(h);
    }
AudioBufferSourceOptions::AudioBufferSourceOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioBufferSourceOptions::AudioBufferSourceOptions() noexcept: emlite::Val(emlite::Val::object()) {}
AudioBufferSourceOptions AudioBufferSourceOptions::clone() const noexcept { return *this; }

AudioBuffer AudioBufferSourceOptions::buffer() const {
    return emlite::Val::get("buffer").as<AudioBuffer>();
}

void AudioBufferSourceOptions::buffer(const AudioBuffer& value) {
    emlite::Val::set("buffer", value);
}

float AudioBufferSourceOptions::detune() const {
    return emlite::Val::get("detune").as<float>();
}

void AudioBufferSourceOptions::detune(float value) {
    emlite::Val::set("detune", value);
}

bool AudioBufferSourceOptions::loop() const {
    return emlite::Val::get("loop").as<bool>();
}

void AudioBufferSourceOptions::loop(bool value) {
    emlite::Val::set("loop", value);
}

double AudioBufferSourceOptions::loopEnd() const {
    return emlite::Val::get("loopEnd").as<double>();
}

void AudioBufferSourceOptions::loopEnd(double value) {
    emlite::Val::set("loopEnd", value);
}

double AudioBufferSourceOptions::loopStart() const {
    return emlite::Val::get("loopStart").as<double>();
}

void AudioBufferSourceOptions::loopStart(double value) {
    emlite::Val::set("loopStart", value);
}

float AudioBufferSourceOptions::playbackRate() const {
    return emlite::Val::get("playbackRate").as<float>();
}

void AudioBufferSourceOptions::playbackRate(float value) {
    emlite::Val::set("playbackRate", value);
}


} // namespace webbind