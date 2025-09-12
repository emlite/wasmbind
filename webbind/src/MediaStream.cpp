#include <webbind/MediaStream.hpp>
#include <webbind/MediaStream.hpp>
#include <webbind/MediaStreamTrack.hpp>

namespace webbind {

MediaStream MediaStream::take_ownership(Handle h) noexcept {
    return MediaStream(h);
}

MediaStream MediaStream::clone() const noexcept { return *this; }

emlite::Val MediaStream::instance() noexcept { return emlite::Val::global("MediaStream"); }

MediaStream::MediaStream(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

MediaStream::MediaStream(const emlite::Val &val) noexcept: EventTarget(val) {}

MediaStream::MediaStream() : EventTarget(emlite::Val::global("MediaStream").new_()) {}

MediaStream::MediaStream(const MediaStream& stream) : EventTarget(emlite::Val::global("MediaStream").new_(stream)) {}

MediaStream::MediaStream(const jsbind::TypedArray<MediaStreamTrack>& tracks) : EventTarget(emlite::Val::global("MediaStream").new_(tracks)) {}

jsbind::String MediaStream::id() const {
    return EventTarget::get("id").as<jsbind::String>();
}

jsbind::TypedArray<MediaStreamTrack> MediaStream::getAudioTracks() {
    return EventTarget::call("getAudioTracks").as<jsbind::TypedArray<MediaStreamTrack>>();
}

jsbind::TypedArray<MediaStreamTrack> MediaStream::getVideoTracks() {
    return EventTarget::call("getVideoTracks").as<jsbind::TypedArray<MediaStreamTrack>>();
}

jsbind::TypedArray<MediaStreamTrack> MediaStream::getTracks() {
    return EventTarget::call("getTracks").as<jsbind::TypedArray<MediaStreamTrack>>();
}

MediaStreamTrack MediaStream::getTrackById(const jsbind::String& trackId) {
    return EventTarget::call("getTrackById", trackId).as<MediaStreamTrack>();
}

jsbind::Undefined MediaStream::addTrack(const MediaStreamTrack& track) {
    return EventTarget::call("addTrack", track).as<jsbind::Undefined>();
}

jsbind::Undefined MediaStream::removeTrack(const MediaStreamTrack& track) {
    return EventTarget::call("removeTrack", track).as<jsbind::Undefined>();
}

MediaStream MediaStream::clone() {
    return EventTarget::call("clone").as<MediaStream>();
}

bool MediaStream::active() const {
    return EventTarget::get("active").as<bool>();
}

jsbind::Any MediaStream::onaddtrack() const {
    return EventTarget::get("onaddtrack").as<jsbind::Any>();
}

void MediaStream::onaddtrack(const jsbind::Any& value) {
    EventTarget::set("onaddtrack", value);
}

jsbind::Any MediaStream::onremovetrack() const {
    return EventTarget::get("onremovetrack").as<jsbind::Any>();
}

void MediaStream::onremovetrack(const jsbind::Any& value) {
    EventTarget::set("onremovetrack", value);
}


} // namespace webbind