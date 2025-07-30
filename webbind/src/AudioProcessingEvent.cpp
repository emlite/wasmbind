#include <webbind/AudioProcessingEvent.hpp>
#include <webbind/AudioBuffer.hpp>


AudioProcessingEvent AudioProcessingEvent::take_ownership(Handle h) noexcept {
        return AudioProcessingEvent(h);
    }
AudioProcessingEvent AudioProcessingEvent::clone() const noexcept { return *this; }
AudioProcessingEvent::AudioProcessingEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
AudioProcessingEvent::AudioProcessingEvent(const emlite::Val &val) noexcept: Event(val) {}


AudioProcessingEvent::AudioProcessingEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("AudioProcessingEvent").new_(type, eventInitDict)) {}

double AudioProcessingEvent::playbackTime() const {
    return Event::get("playbackTime").as<double>();
}

AudioBuffer AudioProcessingEvent::inputBuffer() const {
    return Event::get("inputBuffer").as<AudioBuffer>();
}

AudioBuffer AudioProcessingEvent::outputBuffer() const {
    return Event::get("outputBuffer").as<AudioBuffer>();
}

