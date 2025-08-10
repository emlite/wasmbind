#include <webbind/AudioTrackList.hpp>
#include <webbind/AudioTrack.hpp>

namespace webbind {

AudioTrackList AudioTrackList::take_ownership(Handle h) noexcept {
        return AudioTrackList(h);
    }
AudioTrackList AudioTrackList::clone() const noexcept { return *this; }
emlite::Val AudioTrackList::instance() noexcept { return emlite::Val::global("AudioTrackList"); }
AudioTrackList::AudioTrackList(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
AudioTrackList::AudioTrackList(const emlite::Val &val) noexcept: EventTarget(val) {}

unsigned long AudioTrackList::length() const {
    return EventTarget::get("length").as<unsigned long>();
}

AudioTrack AudioTrackList::getTrackById(const jsbind::String& id) {
    return EventTarget::call("getTrackById", id).as<AudioTrack>();
}

jsbind::Any AudioTrackList::onchange() const {
    return EventTarget::get("onchange").as<jsbind::Any>();
}

void AudioTrackList::onchange(const jsbind::Any& value) {
    EventTarget::set("onchange", value);
}

jsbind::Any AudioTrackList::onaddtrack() const {
    return EventTarget::get("onaddtrack").as<jsbind::Any>();
}

void AudioTrackList::onaddtrack(const jsbind::Any& value) {
    EventTarget::set("onaddtrack", value);
}

jsbind::Any AudioTrackList::onremovetrack() const {
    return EventTarget::get("onremovetrack").as<jsbind::Any>();
}

void AudioTrackList::onremovetrack(const jsbind::Any& value) {
    EventTarget::set("onremovetrack", value);
}


} // namespace webbind