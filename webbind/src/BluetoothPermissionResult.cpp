#include <webbind/BluetoothPermissionResult.hpp>
#include <webbind/BluetoothDevice.hpp>


BluetoothPermissionResult BluetoothPermissionResult::take_ownership(Handle h) noexcept {
        return BluetoothPermissionResult(h);
    }
BluetoothPermissionResult BluetoothPermissionResult::clone() const noexcept { return *this; }
BluetoothPermissionResult::BluetoothPermissionResult(Handle h) noexcept : PermissionStatus(emlite::Val::take_ownership(h)) {}
BluetoothPermissionResult::BluetoothPermissionResult(const emlite::Val &val) noexcept: PermissionStatus(val) {}


jsbind::FrozenArray<BluetoothDevice> BluetoothPermissionResult::devices() const {
    return PermissionStatus::get("devices").as<jsbind::FrozenArray<BluetoothDevice>>();
}

void BluetoothPermissionResult::devices(const jsbind::FrozenArray<BluetoothDevice>& value) {
    PermissionStatus::set("devices", value);
}

