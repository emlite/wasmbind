#include "webbind/PointerEventInit.hpp"
#include "webbind/PointerEvent.hpp"

using emlite::Val;
namespace webbind {

PointerEventInit::PointerEventInit(Handle h) noexcept : MouseEventInit(emlite::Val::take_ownership(h)) {}
PointerEventInit PointerEventInit::take_ownership(Handle h) noexcept {
        return PointerEventInit(h);
    }
PointerEventInit::PointerEventInit(const emlite::Val &val) noexcept: MouseEventInit(val) {}
PointerEventInit::PointerEventInit() noexcept: MouseEventInit(emlite::Val::object()) {}
PointerEventInit PointerEventInit::clone() const noexcept { return *this; }

long PointerEventInit::pointerId() const {
    return emlite::Val::get("pointerId").as<long>();
}

void PointerEventInit::pointerId(long value) {
    emlite::Val::set("pointerId", value);
}

double PointerEventInit::width() const {
    return emlite::Val::get("width").as<double>();
}

void PointerEventInit::width(double value) {
    emlite::Val::set("width", value);
}

double PointerEventInit::height() const {
    return emlite::Val::get("height").as<double>();
}

void PointerEventInit::height(double value) {
    emlite::Val::set("height", value);
}

float PointerEventInit::pressure() const {
    return emlite::Val::get("pressure").as<float>();
}

void PointerEventInit::pressure(float value) {
    emlite::Val::set("pressure", value);
}

float PointerEventInit::tangentialPressure() const {
    return emlite::Val::get("tangentialPressure").as<float>();
}

void PointerEventInit::tangentialPressure(float value) {
    emlite::Val::set("tangentialPressure", value);
}

long PointerEventInit::tiltX() const {
    return emlite::Val::get("tiltX").as<long>();
}

void PointerEventInit::tiltX(long value) {
    emlite::Val::set("tiltX", value);
}

long PointerEventInit::tiltY() const {
    return emlite::Val::get("tiltY").as<long>();
}

void PointerEventInit::tiltY(long value) {
    emlite::Val::set("tiltY", value);
}

long PointerEventInit::twist() const {
    return emlite::Val::get("twist").as<long>();
}

void PointerEventInit::twist(long value) {
    emlite::Val::set("twist", value);
}

double PointerEventInit::altitudeAngle() const {
    return emlite::Val::get("altitudeAngle").as<double>();
}

void PointerEventInit::altitudeAngle(double value) {
    emlite::Val::set("altitudeAngle", value);
}

double PointerEventInit::azimuthAngle() const {
    return emlite::Val::get("azimuthAngle").as<double>();
}

void PointerEventInit::azimuthAngle(double value) {
    emlite::Val::set("azimuthAngle", value);
}

jsbind::String PointerEventInit::pointerType() const {
    return emlite::Val::get("pointerType").as<jsbind::String>();
}

void PointerEventInit::pointerType(const jsbind::String& value) {
    emlite::Val::set("pointerType", value);
}

bool PointerEventInit::isPrimary() const {
    return emlite::Val::get("isPrimary").as<bool>();
}

void PointerEventInit::isPrimary(bool value) {
    emlite::Val::set("isPrimary", value);
}

long PointerEventInit::persistentDeviceId() const {
    return emlite::Val::get("persistentDeviceId").as<long>();
}

void PointerEventInit::persistentDeviceId(long value) {
    emlite::Val::set("persistentDeviceId", value);
}

jsbind::TypedArray<PointerEvent> PointerEventInit::coalescedEvents() const {
    return emlite::Val::get("coalescedEvents").as<jsbind::TypedArray<PointerEvent>>();
}

void PointerEventInit::coalescedEvents(const jsbind::TypedArray<PointerEvent>& value) {
    emlite::Val::set("coalescedEvents", value);
}

jsbind::TypedArray<PointerEvent> PointerEventInit::predictedEvents() const {
    return emlite::Val::get("predictedEvents").as<jsbind::TypedArray<PointerEvent>>();
}

void PointerEventInit::predictedEvents(const jsbind::TypedArray<PointerEvent>& value) {
    emlite::Val::set("predictedEvents", value);
}


} // namespace webbind