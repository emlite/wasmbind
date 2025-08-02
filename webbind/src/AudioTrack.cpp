#include <webbind/AudioTrack.hpp>
#include <webbind/SourceBuffer.hpp>


AudioTrack AudioTrack::take_ownership(Handle h) noexcept {
        return AudioTrack(h);
    }
AudioTrack AudioTrack::clone() const noexcept { return *this; }
emlite::Val AudioTrack::instance() noexcept { return emlite::Val::global("AudioTrack"); }
AudioTrack::AudioTrack(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioTrack::AudioTrack(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String AudioTrack::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

jsbind::String AudioTrack::kind() const {
    return emlite::Val::get("kind").as<jsbind::String>();
}

jsbind::String AudioTrack::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

jsbind::String AudioTrack::language() const {
    return emlite::Val::get("language").as<jsbind::String>();
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

