#include <webbind/TouchInit.hpp>
#include <webbind/EventTarget.hpp>

namespace webbind {

TouchInit::TouchInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TouchInit TouchInit::take_ownership(Handle h) noexcept {
    return TouchInit(h);
}

TouchInit::TouchInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

TouchInit::TouchInit() noexcept: emlite::Val(emlite::Val::object()) {}

TouchInit TouchInit::clone() const noexcept { return *this; }

long TouchInit::identifier() const {
    return emlite::Val::get("identifier").as<long>();
}

void TouchInit::identifier(long value) {
    emlite::Val::set("identifier", value);
}

EventTarget TouchInit::target() const {
    return emlite::Val::get("target").as<EventTarget>();
}

void TouchInit::target(const EventTarget& value) {
    emlite::Val::set("target", value);
}

double TouchInit::clientX() const {
    return emlite::Val::get("clientX").as<double>();
}

void TouchInit::clientX(double value) {
    emlite::Val::set("clientX", value);
}

double TouchInit::clientY() const {
    return emlite::Val::get("clientY").as<double>();
}

void TouchInit::clientY(double value) {
    emlite::Val::set("clientY", value);
}

double TouchInit::screenX() const {
    return emlite::Val::get("screenX").as<double>();
}

void TouchInit::screenX(double value) {
    emlite::Val::set("screenX", value);
}

double TouchInit::screenY() const {
    return emlite::Val::get("screenY").as<double>();
}

void TouchInit::screenY(double value) {
    emlite::Val::set("screenY", value);
}

double TouchInit::pageX() const {
    return emlite::Val::get("pageX").as<double>();
}

void TouchInit::pageX(double value) {
    emlite::Val::set("pageX", value);
}

double TouchInit::pageY() const {
    return emlite::Val::get("pageY").as<double>();
}

void TouchInit::pageY(double value) {
    emlite::Val::set("pageY", value);
}

float TouchInit::radiusX() const {
    return emlite::Val::get("radiusX").as<float>();
}

void TouchInit::radiusX(float value) {
    emlite::Val::set("radiusX", value);
}

float TouchInit::radiusY() const {
    return emlite::Val::get("radiusY").as<float>();
}

void TouchInit::radiusY(float value) {
    emlite::Val::set("radiusY", value);
}

float TouchInit::rotationAngle() const {
    return emlite::Val::get("rotationAngle").as<float>();
}

void TouchInit::rotationAngle(float value) {
    emlite::Val::set("rotationAngle", value);
}

float TouchInit::force() const {
    return emlite::Val::get("force").as<float>();
}

void TouchInit::force(float value) {
    emlite::Val::set("force", value);
}

double TouchInit::altitudeAngle() const {
    return emlite::Val::get("altitudeAngle").as<double>();
}

void TouchInit::altitudeAngle(double value) {
    emlite::Val::set("altitudeAngle", value);
}

double TouchInit::azimuthAngle() const {
    return emlite::Val::get("azimuthAngle").as<double>();
}

void TouchInit::azimuthAngle(double value) {
    emlite::Val::set("azimuthAngle", value);
}

TouchType TouchInit::touchType() const {
    return emlite::Val::get("touchType").as<TouchType>();
}

void TouchInit::touchType(const TouchType& value) {
    emlite::Val::set("touchType", value);
}


} // namespace webbind