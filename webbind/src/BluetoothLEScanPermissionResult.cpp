#include "webbind/BluetoothLEScanPermissionResult.hpp"
#include "webbind/BluetoothLEScan.hpp"

namespace webbind {

BluetoothLEScanPermissionResult BluetoothLEScanPermissionResult::take_ownership(Handle h) noexcept {
        return BluetoothLEScanPermissionResult(h);
    }
BluetoothLEScanPermissionResult BluetoothLEScanPermissionResult::clone() const noexcept { return *this; }
emlite::Val BluetoothLEScanPermissionResult::instance() noexcept { return emlite::Val::global("BluetoothLEScanPermissionResult"); }
BluetoothLEScanPermissionResult::BluetoothLEScanPermissionResult(Handle h) noexcept : PermissionStatus(emlite::Val::take_ownership(h)) {}
BluetoothLEScanPermissionResult::BluetoothLEScanPermissionResult(const emlite::Val &val) noexcept: PermissionStatus(val) {}

jsbind::TypedArray<BluetoothLEScan> BluetoothLEScanPermissionResult::scans() const {
    return PermissionStatus::get("scans").as<jsbind::TypedArray<BluetoothLEScan>>();
}

void BluetoothLEScanPermissionResult::scans(const jsbind::TypedArray<BluetoothLEScan>& value) {
    PermissionStatus::set("scans", value);
}


} // namespace webbind