#include "webbind/BluetoothPermissionResult.hpp"
#include "webbind/BluetoothDevice.hpp"

namespace webbind {

BluetoothPermissionResult BluetoothPermissionResult::take_ownership(Handle h) noexcept {
        return BluetoothPermissionResult(h);
    }
BluetoothPermissionResult BluetoothPermissionResult::clone() const noexcept { return *this; }
emlite::Val BluetoothPermissionResult::instance() noexcept { return emlite::Val::global("BluetoothPermissionResult"); }
BluetoothPermissionResult::BluetoothPermissionResult(Handle h) noexcept : PermissionStatus(emlite::Val::take_ownership(h)) {}
BluetoothPermissionResult::BluetoothPermissionResult(const emlite::Val &val) noexcept: PermissionStatus(val) {}

jsbind::TypedArray<BluetoothDevice> BluetoothPermissionResult::devices() const {
    return PermissionStatus::get("devices").as<jsbind::TypedArray<BluetoothDevice>>();
}

void BluetoothPermissionResult::devices(const jsbind::TypedArray<BluetoothDevice>& value) {
    PermissionStatus::set("devices", value);
}


} // namespace webbind