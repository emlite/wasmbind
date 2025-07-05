#include <webbind/MediaSession.hpp>
#include <webbind/MediaMetadata.hpp>


MediaPositionState::MediaPositionState(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaPositionState MediaPositionState::take_ownership(Handle h) noexcept {
        return MediaPositionState(h);
    }
MediaPositionState::MediaPositionState(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaPositionState::MediaPositionState() noexcept: emlite::Val(emlite::Val::object()) {}
MediaPositionState MediaPositionState::clone() const noexcept { return *this; }

double MediaPositionState::duration() const {
    return emlite::Val::get("duration").as<double>();
}

void MediaPositionState::duration(double value) {
    emlite::Val::set("duration", value);
}

double MediaPositionState::playbackRate() const {
    return emlite::Val::get("playbackRate").as<double>();
}

void MediaPositionState::playbackRate(double value) {
    emlite::Val::set("playbackRate", value);
}

double MediaPositionState::position() const {
    return emlite::Val::get("position").as<double>();
}

void MediaPositionState::position(double value) {
    emlite::Val::set("position", value);
}

MediaSession MediaSession::take_ownership(Handle h) noexcept {
        return MediaSession(h);
    }
MediaSession MediaSession::clone() const noexcept { return *this; }
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

jsbind::Promise MediaSession::setMicrophoneActive(bool active) {
    return emlite::Val::call("setMicrophoneActive", active).as<jsbind::Promise>();
}

jsbind::Promise MediaSession::setCameraActive(bool active) {
    return emlite::Val::call("setCameraActive", active).as<jsbind::Promise>();
}

jsbind::Promise MediaSession::setScreenshareActive(bool active) {
    return emlite::Val::call("setScreenshareActive", active).as<jsbind::Promise>();
}

