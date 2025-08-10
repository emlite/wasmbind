#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MockCaptureDeviceConfiguration.hpp"

namespace webbind {

/// Dictionary type MockCameraConfiguration
class MockCameraConfiguration : public MockCaptureDeviceConfiguration {
  explicit MockCameraConfiguration(Handle h) noexcept;
public:
    static MockCameraConfiguration take_ownership(Handle h) noexcept;
    explicit MockCameraConfiguration(const emlite::Val &val) noexcept;
    MockCameraConfiguration() noexcept;
    [[nodiscard]] MockCameraConfiguration clone() const noexcept;
    /// Getter of the `defaultFrameRate` attribute.
    [[nodiscard]] double defaultFrameRate() const;
    /// Setter of the `defaultFrameRate` attribute.
    void defaultFrameRate(double value);
    /// Getter of the `facingMode` attribute.
    [[nodiscard]] jsbind::String facingMode() const;
    /// Setter of the `facingMode` attribute.
    void facingMode(const jsbind::String& value);
};

} // namespace webbind