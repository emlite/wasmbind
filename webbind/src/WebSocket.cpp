#include <webbind/WebSocket.hpp>


WebSocket WebSocket::take_ownership(Handle h) noexcept {
        return WebSocket(h);
    }
WebSocket WebSocket::clone() const noexcept { return *this; }
WebSocket::WebSocket(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
WebSocket::WebSocket(const emlite::Val &val) noexcept: EventTarget(val) {}


WebSocket::WebSocket(const jsbind::USVString& url) : EventTarget(emlite::Val::global("WebSocket").new_(url)) {}

WebSocket::WebSocket(const jsbind::USVString& url, const jsbind::Any& protocols) : EventTarget(emlite::Val::global("WebSocket").new_(url, protocols)) {}

jsbind::USVString WebSocket::url() const {
    return EventTarget::get("url").as<jsbind::USVString>();
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

jsbind::DOMString WebSocket::extensions() const {
    return EventTarget::get("extensions").as<jsbind::DOMString>();
}

jsbind::DOMString WebSocket::protocol() const {
    return EventTarget::get("protocol").as<jsbind::DOMString>();
}

jsbind::Undefined WebSocket::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

jsbind::Undefined WebSocket::close(unsigned short code) {
    return EventTarget::call("close", code).as<jsbind::Undefined>();
}

jsbind::Undefined WebSocket::close(unsigned short code, const jsbind::USVString& reason) {
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

