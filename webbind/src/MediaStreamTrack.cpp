#include <webbind/MediaStreamTrack.hpp>


MediaTrackCapabilities::MediaTrackCapabilities(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaTrackCapabilities MediaTrackCapabilities::take_ownership(Handle h) noexcept {
        return MediaTrackCapabilities(h);
    }
MediaTrackCapabilities::MediaTrackCapabilities(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaTrackCapabilities::MediaTrackCapabilities() noexcept: emlite::Val(emlite::Val::object()) {}
MediaTrackCapabilities MediaTrackCapabilities::clone() const noexcept { return *this; }

jsbind::DOMString MediaTrackCapabilities::displaySurface() const {
    return emlite::Val::get("displaySurface").as<jsbind::DOMString>();
}

void MediaTrackCapabilities::displaySurface(const jsbind::DOMString& value) {
    emlite::Val::set("displaySurface", value);
}

bool MediaTrackCapabilities::logicalSurface() const {
    return emlite::Val::get("logicalSurface").as<bool>();
}

void MediaTrackCapabilities::logicalSurface(bool value) {
    emlite::Val::set("logicalSurface", value);
}

jsbind::Sequence<jsbind::DOMString> MediaTrackCapabilities::cursor() const {
    return emlite::Val::get("cursor").as<jsbind::Sequence<jsbind::DOMString>>();
}

void MediaTrackCapabilities::cursor(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("cursor", value);
}

MediaTrackConstraints::MediaTrackConstraints(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaTrackConstraints MediaTrackConstraints::take_ownership(Handle h) noexcept {
        return MediaTrackConstraints(h);
    }
MediaTrackConstraints::MediaTrackConstraints(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaTrackConstraints::MediaTrackConstraints() noexcept: emlite::Val(emlite::Val::object()) {}
MediaTrackConstraints MediaTrackConstraints::clone() const noexcept { return *this; }

jsbind::Sequence<jsbind::Any> MediaTrackConstraints::advanced() const {
    return emlite::Val::get("advanced").as<jsbind::Sequence<jsbind::Any>>();
}

void MediaTrackConstraints::advanced(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("advanced", value);
}

MediaTrackSettings::MediaTrackSettings(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaTrackSettings MediaTrackSettings::take_ownership(Handle h) noexcept {
        return MediaTrackSettings(h);
    }
MediaTrackSettings::MediaTrackSettings(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaTrackSettings::MediaTrackSettings() noexcept: emlite::Val(emlite::Val::object()) {}
MediaTrackSettings MediaTrackSettings::clone() const noexcept { return *this; }

jsbind::DOMString MediaTrackSettings::displaySurface() const {
    return emlite::Val::get("displaySurface").as<jsbind::DOMString>();
}

void MediaTrackSettings::displaySurface(const jsbind::DOMString& value) {
    emlite::Val::set("displaySurface", value);
}

bool MediaTrackSettings::logicalSurface() const {
    return emlite::Val::get("logicalSurface").as<bool>();
}

void MediaTrackSettings::logicalSurface(bool value) {
    emlite::Val::set("logicalSurface", value);
}

jsbind::DOMString MediaTrackSettings::cursor() const {
    return emlite::Val::get("cursor").as<jsbind::DOMString>();
}

void MediaTrackSettings::cursor(const jsbind::DOMString& value) {
    emlite::Val::set("cursor", value);
}

bool MediaTrackSettings::restrictOwnAudio() const {
    return emlite::Val::get("restrictOwnAudio").as<bool>();
}

void MediaTrackSettings::restrictOwnAudio(bool value) {
    emlite::Val::set("restrictOwnAudio", value);
}

bool MediaTrackSettings::suppressLocalAudioPlayback() const {
    return emlite::Val::get("suppressLocalAudioPlayback").as<bool>();
}

void MediaTrackSettings::suppressLocalAudioPlayback(bool value) {
    emlite::Val::set("suppressLocalAudioPlayback", value);
}

double MediaTrackSettings::screenPixelRatio() const {
    return emlite::Val::get("screenPixelRatio").as<double>();
}

void MediaTrackSettings::screenPixelRatio(double value) {
    emlite::Val::set("screenPixelRatio", value);
}

CaptureHandle::CaptureHandle(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CaptureHandle CaptureHandle::take_ownership(Handle h) noexcept {
        return CaptureHandle(h);
    }
CaptureHandle::CaptureHandle(const emlite::Val &val) noexcept: emlite::Val(val) {}
CaptureHandle::CaptureHandle() noexcept: emlite::Val(emlite::Val::object()) {}
CaptureHandle CaptureHandle::clone() const noexcept { return *this; }

jsbind::DOMString CaptureHandle::origin() const {
    return emlite::Val::get("origin").as<jsbind::DOMString>();
}

void CaptureHandle::origin(const jsbind::DOMString& value) {
    emlite::Val::set("origin", value);
}

jsbind::DOMString CaptureHandle::handle() const {
    return emlite::Val::get("handle").as<jsbind::DOMString>();
}

void CaptureHandle::handle(const jsbind::DOMString& value) {
    emlite::Val::set("handle", value);
}

MediaStreamTrack MediaStreamTrack::take_ownership(Handle h) noexcept {
        return MediaStreamTrack(h);
    }
MediaStreamTrack MediaStreamTrack::clone() const noexcept { return *this; }
MediaStreamTrack::MediaStreamTrack(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
MediaStreamTrack::MediaStreamTrack(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::DOMString MediaStreamTrack::kind() const {
    return EventTarget::get("kind").as<jsbind::DOMString>();
}

jsbind::DOMString MediaStreamTrack::id() const {
    return EventTarget::get("id").as<jsbind::DOMString>();
}

jsbind::DOMString MediaStreamTrack::label() const {
    return EventTarget::get("label").as<jsbind::DOMString>();
}

bool MediaStreamTrack::enabled() const {
    return EventTarget::get("enabled").as<bool>();
}

void MediaStreamTrack::enabled(bool value) {
    EventTarget::set("enabled", value);
}

bool MediaStreamTrack::muted() const {
    return EventTarget::get("muted").as<bool>();
}

jsbind::Any MediaStreamTrack::onmute() const {
    return EventTarget::get("onmute").as<jsbind::Any>();
}

void MediaStreamTrack::onmute(const jsbind::Any& value) {
    EventTarget::set("onmute", value);
}

jsbind::Any MediaStreamTrack::onunmute() const {
    return EventTarget::get("onunmute").as<jsbind::Any>();
}

void MediaStreamTrack::onunmute(const jsbind::Any& value) {
    EventTarget::set("onunmute", value);
}

MediaStreamTrackState MediaStreamTrack::readyState() const {
    return EventTarget::get("readyState").as<MediaStreamTrackState>();
}

jsbind::Any MediaStreamTrack::onended() const {
    return EventTarget::get("onended").as<jsbind::Any>();
}

void MediaStreamTrack::onended(const jsbind::Any& value) {
    EventTarget::set("onended", value);
}

MediaStreamTrack MediaStreamTrack::clone() {
    return EventTarget::call("clone").as<MediaStreamTrack>();
}

jsbind::Undefined MediaStreamTrack::stop() {
    return EventTarget::call("stop").as<jsbind::Undefined>();
}

MediaTrackCapabilities MediaStreamTrack::getCapabilities() {
    return EventTarget::call("getCapabilities").as<MediaTrackCapabilities>();
}

MediaTrackConstraints MediaStreamTrack::getConstraints() {
    return EventTarget::call("getConstraints").as<MediaTrackConstraints>();
}

MediaTrackSettings MediaStreamTrack::getSettings() {
    return EventTarget::call("getSettings").as<MediaTrackSettings>();
}

jsbind::Promise MediaStreamTrack::applyConstraints() {
    return EventTarget::call("applyConstraints").as<jsbind::Promise>();
}

jsbind::Promise MediaStreamTrack::applyConstraints(const MediaTrackConstraints& constraints) {
    return EventTarget::call("applyConstraints", constraints).as<jsbind::Promise>();
}

CaptureHandle MediaStreamTrack::getCaptureHandle() {
    return EventTarget::call("getCaptureHandle").as<CaptureHandle>();
}

jsbind::Any MediaStreamTrack::oncapturehandlechange() const {
    return EventTarget::get("oncapturehandlechange").as<jsbind::Any>();
}

void MediaStreamTrack::oncapturehandlechange(const jsbind::Any& value) {
    EventTarget::set("oncapturehandlechange", value);
}

jsbind::Sequence<jsbind::DOMString> MediaStreamTrack::getSupportedCaptureActions() {
    return EventTarget::call("getSupportedCaptureActions").as<jsbind::Sequence<jsbind::DOMString>>();
}

jsbind::Promise MediaStreamTrack::sendCaptureAction(const CaptureAction& action) {
    return EventTarget::call("sendCaptureAction", action).as<jsbind::Promise>();
}

jsbind::DOMString MediaStreamTrack::contentHint() const {
    return EventTarget::get("contentHint").as<jsbind::DOMString>();
}

void MediaStreamTrack::contentHint(const jsbind::DOMString& value) {
    EventTarget::set("contentHint", value);
}

bool MediaStreamTrack::isolated() const {
    return EventTarget::get("isolated").as<bool>();
}

jsbind::Any MediaStreamTrack::onisolationchange() const {
    return EventTarget::get("onisolationchange").as<jsbind::Any>();
}

void MediaStreamTrack::onisolationchange(const jsbind::Any& value) {
    EventTarget::set("onisolationchange", value);
}

