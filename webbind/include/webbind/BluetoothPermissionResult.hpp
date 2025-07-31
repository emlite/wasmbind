#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PermissionStatus.hpp"
#include "enums.hpp"

class BluetoothDevice;


/// The BluetoothPermissionResult class.
/// [`BluetoothPermissionResult`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothPermissionResult)
class BluetoothPermissionResult : public PermissionStatus {
    explicit BluetoothPermissionResult(Handle h) noexcept;

public:
    explicit BluetoothPermissionResult(const emlite::Val &val) noexcept;
    static BluetoothPermissionResult take_ownership(Handle h) noexcept;

    [[nodiscard]] BluetoothPermissionResult clone() const noexcept;
    /// Getter of the `devices` attribute.
    /// [`BluetoothPermissionResult.devices`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothPermissionResult/devices)
    [[nodiscard]] jsbind::TypedArray<BluetoothDevice> devices() const;
    /// Setter of the `devices` attribute.
    /// [`BluetoothPermissionResult.devices`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothPermissionResult/devices)
    void devices(const jsbind::TypedArray<BluetoothDevice>& value);
};

