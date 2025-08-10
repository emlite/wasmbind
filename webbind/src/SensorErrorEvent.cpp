#include "webbind/SensorErrorEvent.hpp"
#include "webbind/SensorErrorEventInit.hpp"
#include "webbind/DOMException.hpp"

namespace webbind {

SensorErrorEvent SensorErrorEvent::take_ownership(Handle h) noexcept {
        return SensorErrorEvent(h);
    }
SensorErrorEvent SensorErrorEvent::clone() const noexcept { return *this; }
emlite::Val SensorErrorEvent::instance() noexcept { return emlite::Val::global("SensorErrorEvent"); }
SensorErrorEvent::SensorErrorEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
SensorErrorEvent::SensorErrorEvent(const emlite::Val &val) noexcept: Event(val) {}

SensorErrorEvent::SensorErrorEvent(const jsbind::String& type, const SensorErrorEventInit& errorEventInitDict) : Event(emlite::Val::global("SensorErrorEvent").new_(type, errorEventInitDict)) {}

DOMException SensorErrorEvent::error() const {
    return Event::get("error").as<DOMException>();
}


} // namespace webbind