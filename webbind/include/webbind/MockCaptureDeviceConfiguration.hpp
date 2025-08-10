#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MockCaptureDeviceConfiguration
/// [`MockCaptureDeviceConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/MockCaptureDeviceConfiguration)
class MockCaptureDeviceConfiguration : public emlite::Val {
  explicit MockCaptureDeviceConfiguration(Handle h) noexcept;
public:
    static MockCaptureDeviceConfiguration take_ownership(Handle h) noexcept;
    explicit MockCaptureDeviceConfiguration(const emlite::Val &val) noexcept;
    MockCaptureDeviceConfiguration() noexcept;
    [[nodiscard]] MockCaptureDeviceConfiguration clone() const noexcept;
    [[nodiscard]] jsbind::String label() const;
    void label(const jsbind::String& value);
    [[nodiscard]] jsbind::String deviceId() const;
    void deviceId(const jsbind::String& value);
    [[nodiscard]] jsbind::String groupId() const;
    void groupId(const jsbind::String& value);
};

} // namespace webbind