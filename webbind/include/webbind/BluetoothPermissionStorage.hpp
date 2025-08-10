#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AllowedBluetoothDevice.hpp"

namespace webbind {

/// Dictionary type BluetoothPermissionStorage
class BluetoothPermissionStorage : public emlite::Val {
  explicit BluetoothPermissionStorage(Handle h) noexcept;
public:
    static BluetoothPermissionStorage take_ownership(Handle h) noexcept;
    explicit BluetoothPermissionStorage(const emlite::Val &val) noexcept;
    BluetoothPermissionStorage() noexcept;
    [[nodiscard]] BluetoothPermissionStorage clone() const noexcept;
    /// Getter of the `allowedDevices` attribute.
    [[nodiscard]] jsbind::TypedArray<AllowedBluetoothDevice> allowedDevices() const;
    /// Setter of the `allowedDevices` attribute.
    void allowedDevices(const jsbind::TypedArray<AllowedBluetoothDevice>& value);
};

} // namespace webbind