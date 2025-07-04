#include <webbind/MediaKeySession.hpp>
#include <webbind/MediaKeyStatusMap.hpp>


MediaKeySession MediaKeySession::take_ownership(Handle h) noexcept {
        return MediaKeySession(h);
    }
MediaKeySession MediaKeySession::clone() const noexcept { return *this; }
MediaKeySession::MediaKeySession(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
MediaKeySession::MediaKeySession(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::DOMString MediaKeySession::sessionId() const {
    return EventTarget::get("sessionId").as<jsbind::DOMString>();
}

double MediaKeySession::expiration() const {
    return EventTarget::get("expiration").as<double>();
}

jsbind::Promise MediaKeySession::closed() const {
    return EventTarget::get("closed").as<jsbind::Promise>();
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

jsbind::Promise MediaKeySession::generateRequest(const jsbind::DOMString& initDataType, const jsbind::Any& initData) {
    return EventTarget::call("generateRequest", initDataType, initData).as<jsbind::Promise>();
}

jsbind::Promise MediaKeySession::load(const jsbind::DOMString& sessionId) {
    return EventTarget::call("load", sessionId).as<jsbind::Promise>();
}

jsbind::Promise MediaKeySession::update(const jsbind::Any& response) {
    return EventTarget::call("update", response).as<jsbind::Promise>();
}

jsbind::Promise MediaKeySession::close() {
    return EventTarget::call("close").as<jsbind::Promise>();
}

jsbind::Promise MediaKeySession::remove() {
    return EventTarget::call("remove").as<jsbind::Promise>();
}

