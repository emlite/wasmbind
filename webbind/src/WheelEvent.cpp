#include "webbind/WheelEvent.hpp"
#include "webbind/WheelEventInit.hpp"

namespace webbind {

WheelEvent WheelEvent::take_ownership(Handle h) noexcept {
        return WheelEvent(h);
    }
WheelEvent WheelEvent::clone() const noexcept { return *this; }
emlite::Val WheelEvent::instance() noexcept { return emlite::Val::global("WheelEvent"); }
WheelEvent::WheelEvent(Handle h) noexcept : MouseEvent(emlite::Val::take_ownership(h)) {}
WheelEvent::WheelEvent(const emlite::Val &val) noexcept: MouseEvent(val) {}

WheelEvent::WheelEvent(const jsbind::String& type) : MouseEvent(emlite::Val::global("WheelEvent").new_(type)) {}

WheelEvent::WheelEvent(const jsbind::String& type, const WheelEventInit& eventInitDict) : MouseEvent(emlite::Val::global("WheelEvent").new_(type, eventInitDict)) {}

double WheelEvent::deltaX() const {
    return MouseEvent::get("deltaX").as<double>();
}

double WheelEvent::deltaY() const {
    return MouseEvent::get("deltaY").as<double>();
}

double WheelEvent::deltaZ() const {
    return MouseEvent::get("deltaZ").as<double>();
}

unsigned long WheelEvent::deltaMode() const {
    return MouseEvent::get("deltaMode").as<unsigned long>();
}


} // namespace webbind