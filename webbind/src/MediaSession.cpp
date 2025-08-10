#include <webbind/MediaSession.hpp>
#include <webbind/MediaMetadata.hpp>
#include <webbind/MediaPositionState.hpp>

namespace webbind {

MediaSession MediaSession::take_ownership(Handle h) noexcept {
    return MediaSession(h);
}

MediaSession MediaSession::clone() const noexcept { return *this; }

emlite::Val MediaSession::instance() noexcept { return emlite::Val::global("MediaSession"); }

MediaSession::MediaSession(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

MediaSession::MediaSession(const emlite::Val &val) noexcept: emlite::Val(val) {}

MediaMetadata MediaSession::metadata() const {
    return emlite::Val::get("metadata").as<MediaMetadata>();
}

void MediaSession::metadata(const MediaMetadata& value) {
    emlite::Val::set("metadata", value);
}

MediaSessionPlaybackState MediaSession::playbackState() const {
    return emlite::Val::get("playbackState").as<MediaSessionPlaybackState>();
}

void MediaSession::playbackState(const MediaSessionPlaybackState& value) {
    emlite::Val::set("playbackState", value);
}

jsbind::Undefined MediaSession::setActionHandler(const MediaSessionAction& action, const jsbind::Function& handler) {
    return emlite::Val::call("setActionHandler", action, handler).as<jsbind::Undefined>();
}

jsbind::Undefined MediaSession::setPositionState() {
    return emlite::Val::call("setPositionState").as<jsbind::Undefined>();
}

jsbind::Undefined MediaSession::setPositionState(const MediaPositionState& state) {
    return emlite::Val::call("setPositionState", state).as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> MediaSession::setMicrophoneActive(bool active) {
    return emlite::Val::call("setMicrophoneActive", active).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> MediaSession::setCameraActive(bool active) {
    return emlite::Val::call("setCameraActive", active).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> MediaSession::setScreenshareActive(bool active) {
    return emlite::Val::call("setScreenshareActive", active).as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind