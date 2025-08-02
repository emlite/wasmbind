#include <webbind/AudioSession.hpp>


AudioSession AudioSession::take_ownership(Handle h) noexcept {
        return AudioSession(h);
    }
AudioSession AudioSession::clone() const noexcept { return *this; }
emlite::Val AudioSession::instance() noexcept { return emlite::Val::global("AudioSession"); }
AudioSession::AudioSession(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
AudioSession::AudioSession(const emlite::Val &val) noexcept: EventTarget(val) {}


AudioSessionType AudioSession::type() const {
    return EventTarget::get("type").as<AudioSessionType>();
}

void AudioSession::type(const AudioSessionType& value) {
    EventTarget::set("type", value);
}

AudioSessionState AudioSession::state() const {
    return EventTarget::get("state").as<AudioSessionState>();
}

jsbind::Any AudioSession::onstatechange() const {
    return EventTarget::get("onstatechange").as<jsbind::Any>();
}

void AudioSession::onstatechange(const jsbind::Any& value) {
    EventTarget::set("onstatechange", value);
}

