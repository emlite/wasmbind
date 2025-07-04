#include <webbind/MessageEvent.hpp>
#include <webbind/MessagePort.hpp>


MessageEvent MessageEvent::take_ownership(Handle h) noexcept {
        return MessageEvent(h);
    }
MessageEvent MessageEvent::clone() const noexcept { return *this; }
MessageEvent::MessageEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
MessageEvent::MessageEvent(const emlite::Val &val) noexcept: Event(val) {}


MessageEvent::MessageEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("MessageEvent").new_(type, eventInitDict)) {}

jsbind::Any MessageEvent::data() const {
    return Event::get("data").as<jsbind::Any>();
}

jsbind::USVString MessageEvent::origin() const {
    return Event::get("origin").as<jsbind::USVString>();
}

jsbind::DOMString MessageEvent::lastEventId() const {
    return Event::get("lastEventId").as<jsbind::DOMString>();
}

jsbind::Any MessageEvent::source() const {
    return Event::get("source").as<jsbind::Any>();
}

jsbind::FrozenArray<jsbind::Any> MessageEvent::ports() const {
    return Event::get("ports").as<jsbind::FrozenArray<jsbind::Any>>();
}

jsbind::Undefined MessageEvent::initMessageEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable, const jsbind::Any& data, const jsbind::USVString& origin, const jsbind::DOMString& lastEventId, const jsbind::Any& source, const jsbind::Sequence<jsbind::Any>& ports) {
    return Event::call("initMessageEvent", type, bubbles, cancelable, data, origin, lastEventId, source, ports).as<jsbind::Undefined>();
}

