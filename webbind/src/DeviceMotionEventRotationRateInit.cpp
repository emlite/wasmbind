#include <webbind/DeviceMotionEventRotationRateInit.hpp>

using emlite::Val;
namespace webbind {

DeviceMotionEventRotationRateInit::DeviceMotionEventRotationRateInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DeviceMotionEventRotationRateInit DeviceMotionEventRotationRateInit::take_ownership(Handle h) noexcept {
        return DeviceMotionEventRotationRateInit(h);
    }
DeviceMotionEventRotationRateInit::DeviceMotionEventRotationRateInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
DeviceMotionEventRotationRateInit::DeviceMotionEventRotationRateInit() noexcept: emlite::Val(emlite::Val::object()) {}
DeviceMotionEventRotationRateInit DeviceMotionEventRotationRateInit::clone() const noexcept { return *this; }

double DeviceMotionEventRotationRateInit::alpha() const {
    return emlite::Val::get("alpha").as<double>();
}

void DeviceMotionEventRotationRateInit::alpha(double value) {
    emlite::Val::set("alpha", value);
}

double DeviceMotionEventRotationRateInit::beta() const {
    return emlite::Val::get("beta").as<double>();
}

void DeviceMotionEventRotationRateInit::beta(double value) {
    emlite::Val::set("beta", value);
}

double DeviceMotionEventRotationRateInit::gamma() const {
    return emlite::Val::get("gamma").as<double>();
}

void DeviceMotionEventRotationRateInit::gamma(double value) {
    emlite::Val::set("gamma", value);
}


} // namespace webbind