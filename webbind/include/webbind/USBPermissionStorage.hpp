#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AllowedUSBDevice.hpp"

namespace webbind {

/// Dictionary type USBPermissionStorage
class USBPermissionStorage : public emlite::Val {
  explicit USBPermissionStorage(Handle h) noexcept;
public:
    static USBPermissionStorage take_ownership(Handle h) noexcept;
    explicit USBPermissionStorage(const emlite::Val &val) noexcept;
    USBPermissionStorage() noexcept;
    [[nodiscard]] USBPermissionStorage clone() const noexcept;
    /// Getter of the `allowedDevices` attribute.
    [[nodiscard]] jsbind::TypedArray<AllowedUSBDevice> allowedDevices() const;
    /// Setter of the `allowedDevices` attribute.
    void allowedDevices(const jsbind::TypedArray<AllowedUSBDevice>& value);
};

} // namespace webbind