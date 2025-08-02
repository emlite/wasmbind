#include <webbind/MediaKeySession.hpp>
#include <webbind/MediaKeyStatusMap.hpp>


MediaKeySession MediaKeySession::take_ownership(Handle h) noexcept {
        return MediaKeySession(h);
    }
MediaKeySession MediaKeySession::clone() const noexcept { return *this; }
emlite::Val MediaKeySession::instance() noexcept { return emlite::Val::global("MediaKeySession"); }
MediaKeySession::MediaKeySession(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
MediaKeySession::MediaKeySession(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::String MediaKeySession::sessionId() const {
    return EventTarget::get("sessionId").as<jsbind::String>();
}

double MediaKeySession::expiration() const {
    return EventTarget::get("expiration").as<double>();
}

jsbind::Promise<MediaKeySessionClosedReason> MediaKeySession::closed() const {
    return EventTarget::get("closed").as<jsbind::Promise<MediaKeySessionClosedReason>>();
}

MediaKeyStatusMap MediaKeySession::keyStatuses() const {
    return EventTarget::get("keyStatuses").as<MediaKeyStatusMap>();
}

jsbind::Any MediaKeySession::onkeystatuseschange() const {
    return EventTarget::get("onkeystatuseschange").as<jsbind::Any>();
}

void MediaKeySession::onkeystatuseschange(const jsbind::Any& value) {
    EventTarget::set("onkeystatuseschange", value);
}

jsbind::Any MediaKeySession::onmessage() const {
    return EventTarget::get("onmessage").as<jsbind::Any>();
}

void MediaKeySession::onmessage(const jsbind::Any& value) {
    EventTarget::set("onmessage", value);
}

jsbind::Promise<jsbind::Undefined> MediaKeySession::generateRequest(const jsbind::String& initDataType, const jsbind::Any& initData) {
    return EventTarget::call("generateRequest", initDataType, initData).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<bool> MediaKeySession::load(const jsbind::String& sessionId) {
    return EventTarget::call("load", sessionId).as<jsbind::Promise<bool>>();
}

jsbind::Promise<jsbind::Undefined> MediaKeySession::update(const jsbind::Any& response) {
    return EventTarget::call("update", response).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> MediaKeySession::close() {
    return EventTarget::call("close").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> MediaKeySession::remove() {
    return EventTarget::call("remove").as<jsbind::Promise<jsbind::Undefined>>();
}

