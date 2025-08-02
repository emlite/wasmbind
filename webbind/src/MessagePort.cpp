#include <webbind/MessagePort.hpp>


StructuredSerializeOptions::StructuredSerializeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StructuredSerializeOptions StructuredSerializeOptions::take_ownership(Handle h) noexcept {
        return StructuredSerializeOptions(h);
    }
StructuredSerializeOptions::StructuredSerializeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
StructuredSerializeOptions::StructuredSerializeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
StructuredSerializeOptions StructuredSerializeOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::Object> StructuredSerializeOptions::transfer() const {
    return emlite::Val::get("transfer").as<jsbind::TypedArray<jsbind::Object>>();
}

void StructuredSerializeOptions::transfer(const jsbind::TypedArray<jsbind::Object>& value) {
    emlite::Val::set("transfer", value);
}

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

