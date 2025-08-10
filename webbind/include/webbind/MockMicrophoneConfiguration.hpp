#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MockCaptureDeviceConfiguration.hpp"

namespace webbind {

/// Dictionary type MockMicrophoneConfiguration
/// [`MockMicrophoneConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/MockMicrophoneConfiguration)
class MockMicrophoneConfiguration : public MockCaptureDeviceConfiguration {
  explicit MockMicrophoneConfiguration(Handle h) noexcept;
public:
    static MockMicrophoneConfiguration take_ownership(Handle h) noexcept;
    explicit MockMicrophoneConfiguration(const emlite::Val &val) noexcept;
    MockMicrophoneConfiguration() noexcept;
    [[nodiscard]] MockMicrophoneConfiguration clone() const noexcept;
    [[nodiscard]] unsigned long defaultSampleRate() const;
    void defaultSampleRate(unsigned long value);
};

} // namespace webbind