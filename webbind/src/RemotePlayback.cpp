#include <webbind/RemotePlayback.hpp>


RemotePlayback RemotePlayback::take_ownership(Handle h) noexcept {
        return RemotePlayback(h);
    }
RemotePlayback RemotePlayback::clone() const noexcept { return *this; }
RemotePlayback::RemotePlayback(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
RemotePlayback::RemotePlayback(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Promise RemotePlayback::watchAvailability(const jsbind::Function& callback) {
    return EventTarget::call("watchAvailability", callback).as<jsbind::Promise>();
}

jsbind::Promise RemotePlayback::cancelWatchAvailability() {
    return EventTarget::call("cancelWatchAvailability").as<jsbind::Promise>();
}

jsbind::Promise RemotePlayback::cancelWatchAvailability(long id) {
    return EventTarget::call("cancelWatchAvailability", id).as<jsbind::Promise>();
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

jsbind::Promise RemotePlayback::prompt() {
    return EventTarget::call("prompt").as<jsbind::Promise>();
}

