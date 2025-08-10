#include <webbind/BluetoothLEScanPermissionDescriptor.hpp>
#include <webbind/BluetoothLEScanFilterInit.hpp>

using emlite::Val;
namespace webbind {

BluetoothLEScanPermissionDescriptor::BluetoothLEScanPermissionDescriptor(Handle h) noexcept : PermissionDescriptor(emlite::Val::take_ownership(h)) {}
BluetoothLEScanPermissionDescriptor BluetoothLEScanPermissionDescriptor::take_ownership(Handle h) noexcept {
        return BluetoothLEScanPermissionDescriptor(h);
    }
BluetoothLEScanPermissionDescriptor::BluetoothLEScanPermissionDescriptor(const emlite::Val &val) noexcept: PermissionDescriptor(val) {}
BluetoothLEScanPermissionDescriptor::BluetoothLEScanPermissionDescriptor() noexcept: PermissionDescriptor(emlite::Val::object()) {}
BluetoothLEScanPermissionDescriptor BluetoothLEScanPermissionDescriptor::clone() const noexcept { return *this; }

jsbind::TypedArray<BluetoothLEScanFilterInit> BluetoothLEScanPermissionDescriptor::filters() const {
    return emlite::Val::get("filters").as<jsbind::TypedArray<BluetoothLEScanFilterInit>>();
}

void BluetoothLEScanPermissionDescriptor::filters(const jsbind::TypedArray<BluetoothLEScanFilterInit>& value) {
    emlite::Val::set("filters", value);
}

bool BluetoothLEScanPermissionDescriptor::keepRepeatedDevices() const {
    return emlite::Val::get("keepRepeatedDevices").as<bool>();
}

void BluetoothLEScanPermissionDescriptor::keepRepeatedDevices(bool value) {
    emlite::Val::set("keepRepeatedDevices", value);
}

bool BluetoothLEScanPermissionDescriptor::acceptAllAdvertisements() const {
    return emlite::Val::get("acceptAllAdvertisements").as<bool>();
}

void BluetoothLEScanPermissionDescriptor::acceptAllAdvertisements(bool value) {
    emlite::Val::set("acceptAllAdvertisements", value);
}


} // namespace webbind