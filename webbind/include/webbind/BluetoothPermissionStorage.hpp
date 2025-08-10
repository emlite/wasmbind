#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AllowedBluetoothDevice.hpp"

namespace webbind {

/// Dictionary type BluetoothPermissionStorage
/// [`BluetoothPermissionStorage`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothPermissionStorage)
class BluetoothPermissionStorage : public emlite::Val {
  explicit BluetoothPermissionStorage(Handle h) noexcept;
public:
    static BluetoothPermissionStorage take_ownership(Handle h) noexcept;
    explicit BluetoothPermissionStorage(const emlite::Val &val) noexcept;
    BluetoothPermissionStorage() noexcept;
    [[nodiscard]] BluetoothPermissionStorage clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<AllowedBluetoothDevice> allowedDevices() const;
    void allowedDevices(const jsbind::TypedArray<AllowedBluetoothDevice>& value);
};

} // namespace webbind