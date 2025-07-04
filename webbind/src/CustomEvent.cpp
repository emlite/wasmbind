#include <webbind/CustomEvent.hpp>


CustomEvent CustomEvent::take_ownership(Handle h) noexcept {
        return CustomEvent(h);
    }
CustomEvent CustomEvent::clone() const noexcept { return *this; }
CustomEvent::CustomEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
CustomEvent::CustomEvent(const emlite::Val &val) noexcept: Event(val) {}


CustomEvent::CustomEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("CustomEvent").new_(type, eventInitDict)) {}

jsbind::Any CustomEvent::detail() const {
    return Event::get("detail").as<jsbind::Any>();
}

jsbind::Undefined CustomEvent::initCustomEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable, const jsbind::Any& detail) {
    return Event::call("initCustomEvent", type, bubbles, cancelable, detail).as<jsbind::Undefined>();
}

