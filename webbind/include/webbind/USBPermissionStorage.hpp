#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AllowedUSBDevice.hpp"

namespace webbind {

/// Dictionary type USBPermissionStorage
/// [`USBPermissionStorage`](https://developer.mozilla.org/en-US/docs/Web/API/USBPermissionStorage)
class USBPermissionStorage : public emlite::Val {
  explicit USBPermissionStorage(Handle h) noexcept;
public:
    static USBPermissionStorage take_ownership(Handle h) noexcept;
    explicit USBPermissionStorage(const emlite::Val &val) noexcept;
    USBPermissionStorage() noexcept;
    [[nodiscard]] USBPermissionStorage clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<AllowedUSBDevice> allowedDevices() const;
    void allowedDevices(const jsbind::TypedArray<AllowedUSBDevice>& value);
};

} // namespace webbind