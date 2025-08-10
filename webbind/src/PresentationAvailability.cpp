#include <webbind/PresentationAvailability.hpp>

namespace webbind {

PresentationAvailability PresentationAvailability::take_ownership(Handle h) noexcept {
    return PresentationAvailability(h);
}

PresentationAvailability PresentationAvailability::clone() const noexcept { return *this; }

emlite::Val PresentationAvailability::instance() noexcept { return emlite::Val::global("PresentationAvailability"); }

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


} // namespace webbind