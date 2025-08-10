#include <webbind/BluetoothPermissionStorage.hpp>
#include <webbind/AllowedBluetoothDevice.hpp>

namespace webbind {

BluetoothPermissionStorage::BluetoothPermissionStorage(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothPermissionStorage BluetoothPermissionStorage::take_ownership(Handle h) noexcept {
    return BluetoothPermissionStorage(h);
}

BluetoothPermissionStorage::BluetoothPermissionStorage(const emlite::Val &val) noexcept: emlite::Val(val) {}

BluetoothPermissionStorage::BluetoothPermissionStorage() noexcept: emlite::Val(emlite::Val::object()) {}

BluetoothPermissionStorage BluetoothPermissionStorage::clone() const noexcept { return *this; }

jsbind::TypedArray<AllowedBluetoothDevice> BluetoothPermissionStorage::allowedDevices() const {
    return emlite::Val::get("allowedDevices").as<jsbind::TypedArray<AllowedBluetoothDevice>>();
}

void BluetoothPermissionStorage::allowedDevices(const jsbind::TypedArray<AllowedBluetoothDevice>& value) {
    emlite::Val::set("allowedDevices", value);
}


} // namespace webbind