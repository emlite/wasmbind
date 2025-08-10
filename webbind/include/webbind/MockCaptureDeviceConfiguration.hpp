#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MockCaptureDeviceConfiguration
class MockCaptureDeviceConfiguration : public emlite::Val {
  explicit MockCaptureDeviceConfiguration(Handle h) noexcept;
public:
    static MockCaptureDeviceConfiguration take_ownership(Handle h) noexcept;
    explicit MockCaptureDeviceConfiguration(const emlite::Val &val) noexcept;
    MockCaptureDeviceConfiguration() noexcept;
    [[nodiscard]] MockCaptureDeviceConfiguration clone() const noexcept;
    /// Getter of the `label` attribute.
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    void label(const jsbind::String& value);
    /// Getter of the `deviceId` attribute.
    [[nodiscard]] jsbind::String deviceId() const;
    /// Setter of the `deviceId` attribute.
    void deviceId(const jsbind::String& value);
    /// Getter of the `groupId` attribute.
    [[nodiscard]] jsbind::String groupId() const;
    /// Setter of the `groupId` attribute.
    void groupId(const jsbind::String& value);
};

} // namespace webbind