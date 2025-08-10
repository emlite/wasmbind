#include <webbind/AudioProcessingEventInit.hpp>
#include <webbind/AudioBuffer.hpp>

using emlite::Val;
namespace webbind {

AudioProcessingEventInit::AudioProcessingEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
AudioProcessingEventInit AudioProcessingEventInit::take_ownership(Handle h) noexcept {
        return AudioProcessingEventInit(h);
    }
AudioProcessingEventInit::AudioProcessingEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
AudioProcessingEventInit::AudioProcessingEventInit() noexcept: EventInit(emlite::Val::object()) {}
AudioProcessingEventInit AudioProcessingEventInit::clone() const noexcept { return *this; }

double AudioProcessingEventInit::playbackTime() const {
    return emlite::Val::get("playbackTime").as<double>();
}

void AudioProcessingEventInit::playbackTime(double value) {
    emlite::Val::set("playbackTime", value);
}

AudioBuffer AudioProcessingEventInit::inputBuffer() const {
    return emlite::Val::get("inputBuffer").as<AudioBuffer>();
}

void AudioProcessingEventInit::inputBuffer(const AudioBuffer& value) {
    emlite::Val::set("inputBuffer", value);
}

AudioBuffer AudioProcessingEventInit::outputBuffer() const {
    return emlite::Val::get("outputBuffer").as<AudioBuffer>();
}

void AudioProcessingEventInit::outputBuffer(const AudioBuffer& value) {
    emlite::Val::set("outputBuffer", value);
}


} // namespace webbind