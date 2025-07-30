#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PermissionStatus.hpp"
#include "enums.hpp"

class BluetoothDevice;


class BluetoothPermissionResult : public PermissionStatus {
    explicit BluetoothPermissionResult(Handle h) noexcept;

public:
    explicit BluetoothPermissionResult(const emlite::Val &val) noexcept;
    static BluetoothPermissionResult take_ownership(Handle h) noexcept;

    BluetoothPermissionResult clone() const noexcept;
    jsbind::TypedArray<BluetoothDevice> devices() const;
    void devices(const jsbind::TypedArray<BluetoothDevice>& value);
};

