#include <webbind/BluetoothLEScanPermissionResult.hpp>
#include <webbind/BluetoothLEScan.hpp>


BluetoothLEScanPermissionResult BluetoothLEScanPermissionResult::take_ownership(Handle h) noexcept {
        return BluetoothLEScanPermissionResult(h);
    }
BluetoothLEScanPermissionResult BluetoothLEScanPermissionResult::clone() const noexcept { return *this; }
BluetoothLEScanPermissionResult::BluetoothLEScanPermissionResult(Handle h) noexcept : PermissionStatus(emlite::Val::take_ownership(h)) {}
BluetoothLEScanPermissionResult::BluetoothLEScanPermissionResult(const emlite::Val &val) noexcept: PermissionStatus(val) {}


jsbind::FrozenArray<BluetoothLEScan> BluetoothLEScanPermissionResult::scans() const {
    return PermissionStatus::get("scans").as<jsbind::FrozenArray<BluetoothLEScan>>();
}

void BluetoothLEScanPermissionResult::scans(const jsbind::FrozenArray<BluetoothLEScan>& value) {
    PermissionStatus::set("scans", value);
}

