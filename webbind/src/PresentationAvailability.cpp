#include <webbind/PresentationAvailability.hpp>


PresentationAvailability PresentationAvailability::take_ownership(Handle h) noexcept {
        return PresentationAvailability(h);
    }
PresentationAvailability PresentationAvailability::clone() const noexcept { return *this; }
PresentationAvailability::PresentationAvailability(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
PresentationAvailability::PresentationAvailability(const emlite::Val &val) noexcept: EventTarget(val) {}


bool PresentationAvailability::value() const {
    return EventTarget::get("value").as<bool>();
}

jsbind::Any PresentationAvailability::onchange() const {
    return EventTarget::get("onchange").as<jsbind::Any>();
}

void PresentationAvailability::onchange(const jsbind::Any& value) {
    EventTarget::set("onchange", value);
}

