#include <webbind/MessageEvent.hpp>
#include <webbind/MessagePort.hpp>


MessageEvent MessageEvent::take_ownership(Handle h) noexcept {
        return MessageEvent(h);
    }
MessageEvent MessageEvent::clone() const noexcept { return *this; }
MessageEvent::MessageEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
MessageEvent::MessageEvent(const emlite::Val &val) noexcept: Event(val) {}


MessageEvent::MessageEvent(const jsbind::String& type) : Event(emlite::Val::global("MessageEvent").new_(type)) {}

MessageEvent::MessageEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("MessageEvent").new_(type, eventInitDict)) {}

jsbind::Any MessageEvent::data() const {
    return Event::get("data").as<jsbind::Any>();
}

jsbind::String MessageEvent::origin() const {
    return Event::get("origin").as<jsbind::String>();
}

jsbind::String MessageEvent::lastEventId() const {
    return Event::get("lastEventId").as<jsbind::String>();
}

jsbind::Any MessageEvent::source() const {
    return Event::get("source").as<jsbind::Any>();
}

jsbind::TypedArray<jsbind::Any> MessageEvent::ports() const {
    return Event::get("ports").as<jsbind::TypedArray<jsbind::Any>>();
}

jsbind::Undefined MessageEvent::initMessageEvent(const jsbind::String& type) {
    return Event::call("initMessageEvent", type).as<jsbind::Undefined>();
}

jsbind::Undefined MessageEvent::initMessageEvent(const jsbind::String& type, bool bubbles) {
    return Event::call("initMessageEvent", type, bubbles).as<jsbind::Undefined>();
}

jsbind::Undefined MessageEvent::initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable) {
    return Event::call("initMessageEvent", type, bubbles, cancelable).as<jsbind::Undefined>();
}

jsbind::Undefined MessageEvent::initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data) {
    return Event::call("initMessageEvent", type, bubbles, cancelable, data).as<jsbind::Undefined>();
}

jsbind::Undefined MessageEvent::initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data, const jsbind::String& origin) {
    return Event::call("initMessageEvent", type, bubbles, cancelable, data, origin).as<jsbind::Undefined>();
}

jsbind::Undefined MessageEvent::initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data, const jsbind::String& origin, const jsbind::String& lastEventId) {
    return Event::call("initMessageEvent", type, bubbles, cancelable, data, origin, lastEventId).as<jsbind::Undefined>();
}

jsbind::Undefined MessageEvent::initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data, const jsbind::String& origin, const jsbind::String& lastEventId, const jsbind::Any& source) {
    return Event::call("initMessageEvent", type, bubbles, cancelable, data, origin, lastEventId, source).as<jsbind::Undefined>();
}

jsbind::Undefined MessageEvent::initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data, const jsbind::String& origin, const jsbind::String& lastEventId, const jsbind::Any& source, const jsbind::TypedArray<jsbind::Any>& ports) {
    return Event::call("initMessageEvent", type, bubbles, cancelable, data, origin, lastEventId, source, ports).as<jsbind::Undefined>();
}

