#include <webbind/DeviceMotionEventRotationRate.hpp>

namespace webbind {

DeviceMotionEventRotationRate DeviceMotionEventRotationRate::take_ownership(Handle h) noexcept {
        return DeviceMotionEventRotationRate(h);
    }
DeviceMotionEventRotationRate DeviceMotionEventRotationRate::clone() const noexcept { return *this; }
emlite::Val DeviceMotionEventRotationRate::instance() noexcept { return emlite::Val::global("DeviceMotionEventRotationRate"); }
DeviceMotionEventRotationRate::DeviceMotionEventRotationRate(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DeviceMotionEventRotationRate::DeviceMotionEventRotationRate(const emlite::Val &val) noexcept: emlite::Val(val) {}

double DeviceMotionEventRotationRate::alpha() const {
    return emlite::Val::get("alpha").as<double>();
}

double DeviceMotionEventRotationRate::beta() const {
    return emlite::Val::get("beta").as<double>();
}

double DeviceMotionEventRotationRate::gamma() const {
    return emlite::Val::get("gamma").as<double>();
}


} // namespace webbind