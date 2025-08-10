#include <webbind/PresentationConnectionAvailableEvent.hpp>
#include <webbind/PresentationConnectionAvailableEventInit.hpp>
#include <webbind/PresentationConnection.hpp>

namespace webbind {

PresentationConnectionAvailableEvent PresentationConnectionAvailableEvent::take_ownership(Handle h) noexcept {
    return PresentationConnectionAvailableEvent(h);
}

PresentationConnectionAvailableEvent PresentationConnectionAvailableEvent::clone() const noexcept { return *this; }

emlite::Val PresentationConnectionAvailableEvent::instance() noexcept { return emlite::Val::global("PresentationConnectionAvailableEvent"); }

PresentationConnectionAvailableEvent::PresentationConnectionAvailableEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

PresentationConnectionAvailableEvent::PresentationConnectionAvailableEvent(const emlite::Val &val) noexcept: Event(val) {}

PresentationConnectionAvailableEvent::PresentationConnectionAvailableEvent(const jsbind::String& type, const PresentationConnectionAvailableEventInit& eventInitDict) : Event(emlite::Val::global("PresentationConnectionAvailableEvent").new_(type, eventInitDict)) {}

PresentationConnection PresentationConnectionAvailableEvent::connection() const {
    return Event::get("connection").as<PresentationConnection>();
}


} // namespace webbind