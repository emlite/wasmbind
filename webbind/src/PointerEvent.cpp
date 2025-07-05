#include <webbind/PointerEvent.hpp>


PointerEvent PointerEvent::take_ownership(Handle h) noexcept {
        return PointerEvent(h);
    }
PointerEvent PointerEvent::clone() const noexcept { return *this; }
PointerEvent::PointerEvent(Handle h) noexcept : MouseEvent(emlite::Val::take_ownership(h)) {}
PointerEvent::PointerEvent(const emlite::Val &val) noexcept: MouseEvent(val) {}


PointerEvent::PointerEvent(const jsbind::DOMString& type) : MouseEvent(emlite::Val::global("PointerEvent").new_(type)) {}

PointerEvent::PointerEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : MouseEvent(emlite::Val::global("PointerEvent").new_(type, eventInitDict)) {}

long PointerEvent::pointerId() const {
    return MouseEvent::get("pointerId").as<long>();
}

double PointerEvent::width() const {
    return MouseEvent::get("width").as<double>();
}

double PointerEvent::height() const {
    return MouseEvent::get("height").as<double>();
}

float PointerEvent::pressure() const {
    return MouseEvent::get("pressure").as<float>();
}

float PointerEvent::tangentialPressure() const {
    return MouseEvent::get("tangentialPressure").as<float>();
}

long PointerEvent::tiltX() const {
    return MouseEvent::get("tiltX").as<long>();
}

long PointerEvent::tiltY() const {
    return MouseEvent::get("tiltY").as<long>();
}

long PointerEvent::twist() const {
    return MouseEvent::get("twist").as<long>();
}

double PointerEvent::altitudeAngle() const {
    return MouseEvent::get("altitudeAngle").as<double>();
}

double PointerEvent::azimuthAngle() const {
    return MouseEvent::get("azimuthAngle").as<double>();
}

jsbind::DOMString PointerEvent::pointerType() const {
    return MouseEvent::get("pointerType").as<jsbind::DOMString>();
}

bool PointerEvent::isPrimary() const {
    return MouseEvent::get("isPrimary").as<bool>();
}

long PointerEvent::persistentDeviceId() const {
    return MouseEvent::get("persistentDeviceId").as<long>();
}

jsbind::Sequence<PointerEvent> PointerEvent::getCoalescedEvents() {
    return MouseEvent::call("getCoalescedEvents").as<jsbind::Sequence<PointerEvent>>();
}

jsbind::Sequence<PointerEvent> PointerEvent::getPredictedEvents() {
    return MouseEvent::call("getPredictedEvents").as<jsbind::Sequence<PointerEvent>>();
}

