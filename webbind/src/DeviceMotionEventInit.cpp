#include <webbind/DeviceMotionEventInit.hpp>
#include <webbind/DeviceMotionEventAccelerationInit.hpp>
#include <webbind/DeviceMotionEventRotationRateInit.hpp>

namespace webbind {

DeviceMotionEventInit::DeviceMotionEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
DeviceMotionEventInit DeviceMotionEventInit::take_ownership(Handle h) noexcept {
    return DeviceMotionEventInit(h);
}

DeviceMotionEventInit::DeviceMotionEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

DeviceMotionEventInit::DeviceMotionEventInit() noexcept: EventInit(emlite::Val::object()) {}

DeviceMotionEventInit DeviceMotionEventInit::clone() const noexcept { return *this; }

DeviceMotionEventAccelerationInit DeviceMotionEventInit::acceleration() const {
    return emlite::Val::get("acceleration").as<DeviceMotionEventAccelerationInit>();
}

void DeviceMotionEventInit::acceleration(const DeviceMotionEventAccelerationInit& value) {
    emlite::Val::set("acceleration", value);
}

DeviceMotionEventAccelerationInit DeviceMotionEventInit::accelerationIncludingGravity() const {
    return emlite::Val::get("accelerationIncludingGravity").as<DeviceMotionEventAccelerationInit>();
}

void DeviceMotionEventInit::accelerationIncludingGravity(const DeviceMotionEventAccelerationInit& value) {
    emlite::Val::set("accelerationIncludingGravity", value);
}

DeviceMotionEventRotationRateInit DeviceMotionEventInit::rotationRate() const {
    return emlite::Val::get("rotationRate").as<DeviceMotionEventRotationRateInit>();
}

void DeviceMotionEventInit::rotationRate(const DeviceMotionEventRotationRateInit& value) {
    emlite::Val::set("rotationRate", value);
}

double DeviceMotionEventInit::interval() const {
    return emlite::Val::get("interval").as<double>();
}

void DeviceMotionEventInit::interval(double value) {
    emlite::Val::set("interval", value);
}


} // namespace webbind