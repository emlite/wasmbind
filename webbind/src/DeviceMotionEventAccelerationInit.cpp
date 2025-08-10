#include "webbind/DeviceMotionEventAccelerationInit.hpp"

using emlite::Val;
namespace webbind {

DeviceMotionEventAccelerationInit::DeviceMotionEventAccelerationInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DeviceMotionEventAccelerationInit DeviceMotionEventAccelerationInit::take_ownership(Handle h) noexcept {
        return DeviceMotionEventAccelerationInit(h);
    }
DeviceMotionEventAccelerationInit::DeviceMotionEventAccelerationInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
DeviceMotionEventAccelerationInit::DeviceMotionEventAccelerationInit() noexcept: emlite::Val(emlite::Val::object()) {}
DeviceMotionEventAccelerationInit DeviceMotionEventAccelerationInit::clone() const noexcept { return *this; }

double DeviceMotionEventAccelerationInit::x() const {
    return emlite::Val::get("x").as<double>();
}

void DeviceMotionEventAccelerationInit::x(double value) {
    emlite::Val::set("x", value);
}

double DeviceMotionEventAccelerationInit::y() const {
    return emlite::Val::get("y").as<double>();
}

void DeviceMotionEventAccelerationInit::y(double value) {
    emlite::Val::set("y", value);
}

double DeviceMotionEventAccelerationInit::z() const {
    return emlite::Val::get("z").as<double>();
}

void DeviceMotionEventAccelerationInit::z(double value) {
    emlite::Val::set("z", value);
}


} // namespace webbind