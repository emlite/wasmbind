#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PermissionStatus.hpp"
#include "enums.hpp"

class BluetoothLEScan;


class BluetoothLEScanPermissionResult : public PermissionStatus {
    explicit BluetoothLEScanPermissionResult(Handle h) noexcept;

public:
    explicit BluetoothLEScanPermissionResult(const emlite::Val &val) noexcept;
    static BluetoothLEScanPermissionResult take_ownership(Handle h) noexcept;

    BluetoothLEScanPermissionResult clone() const noexcept;
    jsbind::TypedArray<BluetoothLEScan> scans() const;
    void scans(const jsbind::TypedArray<BluetoothLEScan>& value);
};

