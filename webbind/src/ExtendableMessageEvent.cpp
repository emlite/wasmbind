#include <webbind/ExtendableMessageEvent.hpp>
#include <webbind/MessagePort.hpp>


ExtendableMessageEvent ExtendableMessageEvent::take_ownership(Handle h) noexcept {
        return ExtendableMessageEvent(h);
    }
ExtendableMessageEvent ExtendableMessageEvent::clone() const noexcept { return *this; }
ExtendableMessageEvent::ExtendableMessageEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
ExtendableMessageEvent::ExtendableMessageEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}


ExtendableMessageEvent::ExtendableMessageEvent(const jsbind::DOMString& type) : ExtendableEvent(emlite::Val::global("ExtendableMessageEvent").new_(type)) {}

ExtendableMessageEvent::ExtendableMessageEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : ExtendableEvent(emlite::Val::global("ExtendableMessageEvent").new_(type, eventInitDict)) {}

jsbind::Any ExtendableMessageEvent::data() const {
    return ExtendableEvent::get("data").as<jsbind::Any>();
}

jsbind::USVString ExtendableMessageEvent::origin() const {
    return ExtendableEvent::get("origin").as<jsbind::USVString>();
}

jsbind::DOMString ExtendableMessageEvent::lastEventId() const {
    return ExtendableEvent::get("lastEventId").as<jsbind::DOMString>();
}

jsbind::Any ExtendableMessageEvent::source() const {
    return ExtendableEvent::get("source").as<jsbind::Any>();
}

jsbind::FrozenArray<jsbind::Any> ExtendableMessageEvent::ports() const {
    return ExtendableEvent::get("ports").as<jsbind::FrozenArray<jsbind::Any>>();
}

