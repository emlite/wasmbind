#include "webbind/MockMicrophoneConfiguration.hpp"

using emlite::Val;
namespace webbind {

MockMicrophoneConfiguration::MockMicrophoneConfiguration(Handle h) noexcept : MockCaptureDeviceConfiguration(emlite::Val::take_ownership(h)) {}
MockMicrophoneConfiguration MockMicrophoneConfiguration::take_ownership(Handle h) noexcept {
        return MockMicrophoneConfiguration(h);
    }
MockMicrophoneConfiguration::MockMicrophoneConfiguration(const emlite::Val &val) noexcept: MockCaptureDeviceConfiguration(val) {}
MockMicrophoneConfiguration::MockMicrophoneConfiguration() noexcept: MockCaptureDeviceConfiguration(emlite::Val::object()) {}
MockMicrophoneConfiguration MockMicrophoneConfiguration::clone() const noexcept { return *this; }

unsigned long MockMicrophoneConfiguration::defaultSampleRate() const {
    return emlite::Val::get("defaultSampleRate").as<unsigned long>();
}

void MockMicrophoneConfiguration::defaultSampleRate(unsigned long value) {
    emlite::Val::set("defaultSampleRate", value);
}


} // namespace webbind