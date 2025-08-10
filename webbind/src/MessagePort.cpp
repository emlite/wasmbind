#include "webbind/MessagePort.hpp"
#include "webbind/StructuredSerializeOptions.hpp"

namespace webbind {

MessagePort MessagePort::take_ownership(Handle h) noexcept {
        return MessagePort(h);
    }
MessagePort MessagePort::clone() const noexcept { return *this; }
emlite::Val MessagePort::instance() noexcept { return emlite::Val::global("MessagePort"); }
MessagePort::MessagePort(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
MessagePort::MessagePort(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Undefined MessagePort::postMessage(const jsbind::Any& message) {
    return EventTarget::call("postMessage", message).as<jsbind::Undefined>();
}

jsbind::Undefined MessagePort::postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options) {
    return EventTarget::call("postMessage", message, options).as<jsbind::Undefined>();
}

jsbind::Undefined MessagePort::start() {
    return EventTarget::call("start").as<jsbind::Undefined>();
}

jsbind::Undefined MessagePort::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

jsbind::Any MessagePort::onclose() const {
    return EventTarget::get("onclose").as<jsbind::Any>();
}

void MessagePort::onclose(const jsbind::Any& value) {
    EventTarget::set("onclose", value);
}

jsbind::Any MessagePort::onmessage() const {
    return EventTarget::get("onmessage").as<jsbind::Any>();
}

void MessagePort::onmessage(const jsbind::Any& value) {
    EventTarget::set("onmessage", value);
}

jsbind::Any MessagePort::onmessageerror() const {
    return EventTarget::get("onmessageerror").as<jsbind::Any>();
}

void MessagePort::onmessageerror(const jsbind::Any& value) {
    EventTarget::set("onmessageerror", value);
}


} // namespace webbind