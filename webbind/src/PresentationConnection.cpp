#include <webbind/PresentationConnection.hpp>

namespace webbind {

PresentationConnection PresentationConnection::take_ownership(Handle h) noexcept {
    return PresentationConnection(h);
}

PresentationConnection PresentationConnection::clone() const noexcept { return *this; }

emlite::Val PresentationConnection::instance() noexcept { return emlite::Val::global("PresentationConnection"); }

PresentationConnection::PresentationConnection(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

PresentationConnection::PresentationConnection(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::String PresentationConnection::id() const {
    return EventTarget::get("id").as<jsbind::String>();
}

jsbind::String PresentationConnection::url() const {
    return EventTarget::get("url").as<jsbind::String>();
}

PresentationConnectionState PresentationConnection::state() const {
    return EventTarget::get("state").as<PresentationConnectionState>();
}

jsbind::Undefined PresentationConnection::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

jsbind::Undefined PresentationConnection::terminate() {
    return EventTarget::call("terminate").as<jsbind::Undefined>();
}

jsbind::Any PresentationConnection::onconnect() const {
    return EventTarget::get("onconnect").as<jsbind::Any>();
}

void PresentationConnection::onconnect(const jsbind::Any& value) {
    EventTarget::set("onconnect", value);
}

jsbind::Any PresentationConnection::onclose() const {
    return EventTarget::get("onclose").as<jsbind::Any>();
}

void PresentationConnection::onclose(const jsbind::Any& value) {
    EventTarget::set("onclose", value);
}

jsbind::Any PresentationConnection::onterminate() const {
    return EventTarget::get("onterminate").as<jsbind::Any>();
}

void PresentationConnection::onterminate(const jsbind::Any& value) {
    EventTarget::set("onterminate", value);
}

BinaryType PresentationConnection::binaryType() const {
    return EventTarget::get("binaryType").as<BinaryType>();
}

void PresentationConnection::binaryType(const BinaryType& value) {
    EventTarget::set("binaryType", value);
}

jsbind::Any PresentationConnection::onmessage() const {
    return EventTarget::get("onmessage").as<jsbind::Any>();
}

void PresentationConnection::onmessage(const jsbind::Any& value) {
    EventTarget::set("onmessage", value);
}

jsbind::Undefined PresentationConnection::send(const jsbind::Any& data) {
    return EventTarget::call("send", data).as<jsbind::Undefined>();
}


} // namespace webbind