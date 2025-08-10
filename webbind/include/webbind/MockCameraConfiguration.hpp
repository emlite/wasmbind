#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MockCaptureDeviceConfiguration.hpp"

namespace webbind {

/// Dictionary type MockCameraConfiguration
/// [`MockCameraConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/MockCameraConfiguration)
class MockCameraConfiguration : public MockCaptureDeviceConfiguration {
  explicit MockCameraConfiguration(Handle h) noexcept;
public:
    static MockCameraConfiguration take_ownership(Handle h) noexcept;
    explicit MockCameraConfiguration(const emlite::Val &val) noexcept;
    MockCameraConfiguration() noexcept;
    [[nodiscard]] MockCameraConfiguration clone() const noexcept;
    [[nodiscard]] double defaultFrameRate() const;
    void defaultFrameRate(double value);
    [[nodiscard]] jsbind::String facingMode() const;
    void facingMode(const jsbind::String& value);
};

} // namespace webbind