#include <webbind/SensorErrorEvent.hpp>
#include <webbind/DOMException.hpp>


SensorErrorEvent SensorErrorEvent::take_ownership(Handle h) noexcept {
        return SensorErrorEvent(h);
    }
SensorErrorEvent SensorErrorEvent::clone() const noexcept { return *this; }
SensorErrorEvent::SensorErrorEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
SensorErrorEvent::SensorErrorEvent(const emlite::Val &val) noexcept: Event(val) {}


SensorErrorEvent::SensorErrorEvent(const jsbind::DOMString& type, const jsbind::Any& errorEventInitDict) : Event(emlite::Val::global("SensorErrorEvent").new_(type, errorEventInitDict)) {}

DOMException SensorErrorEvent::error() const {
    return Event::get("error").as<DOMException>();
}

