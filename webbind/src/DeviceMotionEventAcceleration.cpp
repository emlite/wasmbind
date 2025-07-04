#include <webbind/DeviceMotionEventAcceleration.hpp>


DeviceMotionEventAcceleration DeviceMotionEventAcceleration::take_ownership(Handle h) noexcept {
        return DeviceMotionEventAcceleration(h);
    }
DeviceMotionEventAcceleration DeviceMotionEventAcceleration::clone() const noexcept { return *this; }
DeviceMotionEventAcceleration::DeviceMotionEventAcceleration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DeviceMotionEventAcceleration::DeviceMotionEventAcceleration(const emlite::Val &val) noexcept: emlite::Val(val) {}


double DeviceMotionEventAcceleration::x() const {
    return emlite::Val::get("x").as<double>();
}

double DeviceMotionEventAcceleration::y() const {
    return emlite::Val::get("y").as<double>();
}

double DeviceMotionEventAcceleration::z() const {
    return emlite::Val::get("z").as<double>();
}

