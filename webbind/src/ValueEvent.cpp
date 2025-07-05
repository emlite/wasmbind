#include <webbind/ValueEvent.hpp>


ValueEvent ValueEvent::take_ownership(Handle h) noexcept {
        return ValueEvent(h);
    }
ValueEvent ValueEvent::clone() const noexcept { return *this; }
ValueEvent::ValueEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
ValueEvent::ValueEvent(const emlite::Val &val) noexcept: Event(val) {}


ValueEvent::ValueEvent(const jsbind::DOMString& type) : Event(emlite::Val::global("ValueEvent").new_(type)) {}

ValueEvent::ValueEvent(const jsbind::DOMString& type, const jsbind::Any& initDict) : Event(emlite::Val::global("ValueEvent").new_(type, initDict)) {}

jsbind::Any ValueEvent::value() const {
    return Event::get("value").as<jsbind::Any>();
}

