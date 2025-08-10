#include "webbind/WebSocket.hpp"

namespace webbind {

WebSocket WebSocket::take_ownership(Handle h) noexcept {
        return WebSocket(h);
    }
WebSocket WebSocket::clone() const noexcept { return *this; }
emlite::Val WebSocket::instance() noexcept { return emlite::Val::global("WebSocket"); }
WebSocket::WebSocket(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
WebSocket::WebSocket(const emlite::Val &val) noexcept: EventTarget(val) {}

WebSocket::WebSocket(const jsbind::String& url) : EventTarget(emlite::Val::global("WebSocket").new_(url)) {}

WebSocket::WebSocket(const jsbind::String& url, const jsbind::Any& protocols) : EventTarget(emlite::Val::global("WebSocket").new_(url, protocols)) {}

jsbind::String WebSocket::url() const {
    return EventTarget::get("url").as<jsbind::String>();
}

unsigned short WebSocket::readyState() const {
    return EventTarget::get("readyState").as<unsigned short>();
}

long long WebSocket::bufferedAmount() const {
    return EventTarget::get("bufferedAmount").as<long long>();
}

jsbind::Any WebSocket::onopen() const {
    return EventTarget::get("onopen").as<jsbind::Any>();
}

void WebSocket::onopen(const jsbind::Any& value) {
    EventTarget::set("onopen", value);
}

jsbind::Any WebSocket::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void WebSocket::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

jsbind::Any WebSocket::onclose() const {
    return EventTarget::get("onclose").as<jsbind::Any>();
}

void WebSocket::onclose(const jsbind::Any& value) {
    EventTarget::set("onclose", value);
}

jsbind::String WebSocket::extensions() const {
    return EventTarget::get("extensions").as<jsbind::String>();
}

jsbind::String WebSocket::protocol() const {
    return EventTarget::get("protocol").as<jsbind::String>();
}

jsbind::Undefined WebSocket::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

jsbind::Undefined WebSocket::close(unsigned short code) {
    return EventTarget::call("close", code).as<jsbind::Undefined>();
}

jsbind::Undefined WebSocket::close(unsigned short code, const jsbind::String& reason) {
    return EventTarget::call("close", code, reason).as<jsbind::Undefined>();
}

jsbind::Any WebSocket::onmessage() const {
    return EventTarget::get("onmessage").as<jsbind::Any>();
}

void WebSocket::onmessage(const jsbind::Any& value) {
    EventTarget::set("onmessage", value);
}

BinaryType WebSocket::binaryType() const {
    return EventTarget::get("binaryType").as<BinaryType>();
}

void WebSocket::binaryType(const BinaryType& value) {
    EventTarget::set("binaryType", value);
}

jsbind::Undefined WebSocket::send(const jsbind::Any& data) {
    return EventTarget::call("send", data).as<jsbind::Undefined>();
}


} // namespace webbind