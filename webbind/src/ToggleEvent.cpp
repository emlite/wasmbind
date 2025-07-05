#include <webbind/ToggleEvent.hpp>
#include <webbind/Element.hpp>


ToggleEvent ToggleEvent::take_ownership(Handle h) noexcept {
        return ToggleEvent(h);
    }
ToggleEvent ToggleEvent::clone() const noexcept { return *this; }
ToggleEvent::ToggleEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
ToggleEvent::ToggleEvent(const emlite::Val &val) noexcept: Event(val) {}


ToggleEvent::ToggleEvent(const jsbind::DOMString& type) : Event(emlite::Val::global("ToggleEvent").new_(type)) {}

ToggleEvent::ToggleEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("ToggleEvent").new_(type, eventInitDict)) {}

jsbind::DOMString ToggleEvent::oldState() const {
    return Event::get("oldState").as<jsbind::DOMString>();
}

jsbind::DOMString ToggleEvent::newState() const {
    return Event::get("newState").as<jsbind::DOMString>();
}

Element ToggleEvent::source() const {
    return Event::get("source").as<Element>();
}

