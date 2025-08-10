#include <webbind/WheelEventInit.hpp>

namespace webbind {

WheelEventInit::WheelEventInit(Handle h) noexcept : MouseEventInit(emlite::Val::take_ownership(h)) {}
WheelEventInit WheelEventInit::take_ownership(Handle h) noexcept {
    return WheelEventInit(h);
}

WheelEventInit::WheelEventInit(const emlite::Val &val) noexcept: MouseEventInit(val) {}

WheelEventInit::WheelEventInit() noexcept: MouseEventInit(emlite::Val::object()) {}

WheelEventInit WheelEventInit::clone() const noexcept { return *this; }

double WheelEventInit::deltaX() const {
    return emlite::Val::get("deltaX").as<double>();
}

void WheelEventInit::deltaX(double value) {
    emlite::Val::set("deltaX", value);
}

double WheelEventInit::deltaY() const {
    return emlite::Val::get("deltaY").as<double>();
}

void WheelEventInit::deltaY(double value) {
    emlite::Val::set("deltaY", value);
}

double WheelEventInit::deltaZ() const {
    return emlite::Val::get("deltaZ").as<double>();
}

void WheelEventInit::deltaZ(double value) {
    emlite::Val::set("deltaZ", value);
}

unsigned long WheelEventInit::deltaMode() const {
    return emlite::Val::get("deltaMode").as<unsigned long>();
}

void WheelEventInit::deltaMode(unsigned long value) {
    emlite::Val::set("deltaMode", value);
}


} // namespace webbind