#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PermissionStatus.hpp"
#include "enums.hpp"

class BluetoothLEScan;


/// The BluetoothLEScanPermissionResult class.
/// [`BluetoothLEScanPermissionResult`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScanPermissionResult)
class BluetoothLEScanPermissionResult : public PermissionStatus {
    explicit BluetoothLEScanPermissionResult(Handle h) noexcept;

public:
    explicit BluetoothLEScanPermissionResult(const emlite::Val &val) noexcept;
    static BluetoothLEScanPermissionResult take_ownership(Handle h) noexcept;

    [[nodiscard]] BluetoothLEScanPermissionResult clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `scans` attribute.
    /// [`BluetoothLEScanPermissionResult.scans`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScanPermissionResult/scans)
    [[nodiscard]] jsbind::TypedArray<BluetoothLEScan> scans() const;
    /// Setter of the `scans` attribute.
    /// [`BluetoothLEScanPermissionResult.scans`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScanPermissionResult/scans)
    void scans(const jsbind::TypedArray<BluetoothLEScan>& value);
};

