#include <webbind/MockCameraConfiguration.hpp>

namespace webbind {

MockCameraConfiguration::MockCameraConfiguration(Handle h) noexcept : MockCaptureDeviceConfiguration(emlite::Val::take_ownership(h)) {}
MockCameraConfiguration MockCameraConfiguration::take_ownership(Handle h) noexcept {
    return MockCameraConfiguration(h);
}

MockCameraConfiguration::MockCameraConfiguration(const emlite::Val &val) noexcept: MockCaptureDeviceConfiguration(val) {}

MockCameraConfiguration::MockCameraConfiguration() noexcept: MockCaptureDeviceConfiguration(emlite::Val::object()) {}

MockCameraConfiguration MockCameraConfiguration::clone() const noexcept { return *this; }

double MockCameraConfiguration::defaultFrameRate() const {
    return emlite::Val::get("defaultFrameRate").as<double>();
}

void MockCameraConfiguration::defaultFrameRate(double value) {
    emlite::Val::set("defaultFrameRate", value);
}

jsbind::String MockCameraConfiguration::facingMode() const {
    return emlite::Val::get("facingMode").as<jsbind::String>();
}

void MockCameraConfiguration::facingMode(const jsbind::String& value) {
    emlite::Val::set("facingMode", value);
}


} // namespace webbind