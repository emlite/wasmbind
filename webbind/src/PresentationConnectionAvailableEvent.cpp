#include <webbind/PresentationConnectionAvailableEvent.hpp>
#include <webbind/PresentationConnection.hpp>


PresentationConnectionAvailableEvent PresentationConnectionAvailableEvent::take_ownership(Handle h) noexcept {
        return PresentationConnectionAvailableEvent(h);
    }
PresentationConnectionAvailableEvent PresentationConnectionAvailableEvent::clone() const noexcept { return *this; }
PresentationConnectionAvailableEvent::PresentationConnectionAvailableEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
PresentationConnectionAvailableEvent::PresentationConnectionAvailableEvent(const emlite::Val &val) noexcept: Event(val) {}


PresentationConnectionAvailableEvent::PresentationConnectionAvailableEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("PresentationConnectionAvailableEvent").new_(type, eventInitDict)) {}

PresentationConnection PresentationConnectionAvailableEvent::connection() const {
    return Event::get("connection").as<PresentationConnection>();
}

