#include <webbind/RemotePlayback.hpp>


RemotePlayback RemotePlayback::take_ownership(Handle h) noexcept {
        return RemotePlayback(h);
    }
RemotePlayback RemotePlayback::clone() const noexcept { return *this; }
emlite::Val RemotePlayback::instance() noexcept { return emlite::Val::global("RemotePlayback"); }
RemotePlayback::RemotePlayback(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
RemotePlayback::RemotePlayback(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Promise<long> RemotePlayback::watchAvailability(const jsbind::Function& callback) {
    return EventTarget::call("watchAvailability", callback).as<jsbind::Promise<long>>();
}

jsbind::Promise<jsbind::Undefined> RemotePlayback::cancelWatchAvailability() {
    return EventTarget::call("cancelWatchAvailability").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> RemotePlayback::cancelWatchAvailability(long id) {
    return EventTarget::call("cancelWatchAvailability", id).as<jsbind::Promise<jsbind::Undefined>>();
}

RemotePlaybackState RemotePlayback::state() const {
    return EventTarget::get("state").as<RemotePlaybackState>();
}

jsbind::Any RemotePlayback::onconnecting() const {
    return EventTarget::get("onconnecting").as<jsbind::Any>();
}

void RemotePlayback::onconnecting(const jsbind::Any& value) {
    EventTarget::set("onconnecting", value);
}

jsbind::Any RemotePlayback::onconnect() const {
    return EventTarget::get("onconnect").as<jsbind::Any>();
}

void RemotePlayback::onconnect(const jsbind::Any& value) {
    EventTarget::set("onconnect", value);
}

jsbind::Any RemotePlayback::ondisconnect() const {
    return EventTarget::get("ondisconnect").as<jsbind::Any>();
}

void RemotePlayback::ondisconnect(const jsbind::Any& value) {
    EventTarget::set("ondisconnect", value);
}

jsbind::Promise<jsbind::Undefined> RemotePlayback::prompt() {
    return EventTarget::call("prompt").as<jsbind::Promise<jsbind::Undefined>>();
}

