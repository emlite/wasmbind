#include "webbind/BroadcastChannel.hpp"

namespace webbind {

BroadcastChannel BroadcastChannel::take_ownership(Handle h) noexcept {
        return BroadcastChannel(h);
    }
BroadcastChannel BroadcastChannel::clone() const noexcept { return *this; }
emlite::Val BroadcastChannel::instance() noexcept { return emlite::Val::global("BroadcastChannel"); }
BroadcastChannel::BroadcastChannel(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
BroadcastChannel::BroadcastChannel(const emlite::Val &val) noexcept: EventTarget(val) {}

BroadcastChannel::BroadcastChannel(const jsbind::String& name) : EventTarget(emlite::Val::global("BroadcastChannel").new_(name)) {}

jsbind::String BroadcastChannel::name() const {
    return EventTarget::get("name").as<jsbind::String>();
}

jsbind::Undefined BroadcastChannel::postMessage(const jsbind::Any& message) {
    return EventTarget::call("postMessage", message).as<jsbind::Undefined>();
}

jsbind::Undefined BroadcastChannel::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

jsbind::Any BroadcastChannel::onmessage() const {
    return EventTarget::get("onmessage").as<jsbind::Any>();
}

void BroadcastChannel::onmessage(const jsbind::Any& value) {
    EventTarget::set("onmessage", value);
}

jsbind::Any BroadcastChannel::onmessageerror() const {
    return EventTarget::get("onmessageerror").as<jsbind::Any>();
}

void BroadcastChannel::onmessageerror(const jsbind::Any& value) {
    EventTarget::set("onmessageerror", value);
}


} // namespace webbind