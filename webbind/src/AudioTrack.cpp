#include <webbind/AudioTrack.hpp>
#include <webbind/SourceBuffer.hpp>


AudioTrack AudioTrack::take_ownership(Handle h) noexcept {
        return AudioTrack(h);
    }
AudioTrack AudioTrack::clone() const noexcept { return *this; }
AudioTrack::AudioTrack(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioTrack::AudioTrack(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString AudioTrack::id() const {
    return emlite::Val::get("id").as<jsbind::DOMString>();
}

jsbind::DOMString AudioTrack::kind() const {
    return emlite::Val::get("kind").as<jsbind::DOMString>();
}

jsbind::DOMString AudioTrack::label() const {
    return emlite::Val::get("label").as<jsbind::DOMString>();
}

jsbind::DOMString AudioTrack::language() const {
    return emlite::Val::get("language").as<jsbind::DOMString>();
}

bool AudioTrack::enabled() const {
    return emlite::Val::get("enabled").as<bool>();
}

void AudioTrack::enabled(bool value) {
    emlite::Val::set("enabled", value);
}

SourceBuffer AudioTrack::sourceBuffer() const {
    return emlite::Val::get("sourceBuffer").as<SourceBuffer>();
}

