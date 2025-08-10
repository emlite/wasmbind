#include "webbind/MockCaptureDeviceConfiguration.hpp"

using emlite::Val;
namespace webbind {

MockCaptureDeviceConfiguration::MockCaptureDeviceConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MockCaptureDeviceConfiguration MockCaptureDeviceConfiguration::take_ownership(Handle h) noexcept {
        return MockCaptureDeviceConfiguration(h);
    }
MockCaptureDeviceConfiguration::MockCaptureDeviceConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}
MockCaptureDeviceConfiguration::MockCaptureDeviceConfiguration() noexcept: emlite::Val(emlite::Val::object()) {}
MockCaptureDeviceConfiguration MockCaptureDeviceConfiguration::clone() const noexcept { return *this; }

jsbind::String MockCaptureDeviceConfiguration::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void MockCaptureDeviceConfiguration::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

jsbind::String MockCaptureDeviceConfiguration::deviceId() const {
    return emlite::Val::get("deviceId").as<jsbind::String>();
}

void MockCaptureDeviceConfiguration::deviceId(const jsbind::String& value) {
    emlite::Val::set("deviceId", value);
}

jsbind::String MockCaptureDeviceConfiguration::groupId() const {
    return emlite::Val::get("groupId").as<jsbind::String>();
}

void MockCaptureDeviceConfiguration::groupId(const jsbind::String& value) {
    emlite::Val::set("groupId", value);
}


} // namespace webbind