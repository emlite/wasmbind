#include <webbind/DeviceOrientationEventInit.hpp>

namespace webbind {

DeviceOrientationEventInit::DeviceOrientationEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
DeviceOrientationEventInit DeviceOrientationEventInit::take_ownership(Handle h) noexcept {
    return DeviceOrientationEventInit(h);
}

DeviceOrientationEventInit::DeviceOrientationEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

DeviceOrientationEventInit::DeviceOrientationEventInit() noexcept: EventInit(emlite::Val::object()) {}

DeviceOrientationEventInit DeviceOrientationEventInit::clone() const noexcept { return *this; }

double DeviceOrientationEventInit::alpha() const {
    return emlite::Val::get("alpha").as<double>();
}

void DeviceOrientationEventInit::alpha(double value) {
    emlite::Val::set("alpha", value);
}

double DeviceOrientationEventInit::beta() const {
    return emlite::Val::get("beta").as<double>();
}

void DeviceOrientationEventInit::beta(double value) {
    emlite::Val::set("beta", value);
}

double DeviceOrientationEventInit::gamma() const {
    return emlite::Val::get("gamma").as<double>();
}

void DeviceOrientationEventInit::gamma(double value) {
    emlite::Val::set("gamma", value);
}

bool DeviceOrientationEventInit::absolute() const {
    return emlite::Val::get("absolute").as<bool>();
}

void DeviceOrientationEventInit::absolute(bool value) {
    emlite::Val::set("absolute", value);
}


} // namespace webbind