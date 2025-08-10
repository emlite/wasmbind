#include <webbind/BluetoothPermissionDescriptor.hpp>
#include <webbind/BluetoothLEScanFilterInit.hpp>

using emlite::Val;
namespace webbind {

BluetoothPermissionDescriptor::BluetoothPermissionDescriptor(Handle h) noexcept : PermissionDescriptor(emlite::Val::take_ownership(h)) {}
BluetoothPermissionDescriptor BluetoothPermissionDescriptor::take_ownership(Handle h) noexcept {
        return BluetoothPermissionDescriptor(h);
    }
BluetoothPermissionDescriptor::BluetoothPermissionDescriptor(const emlite::Val &val) noexcept: PermissionDescriptor(val) {}
BluetoothPermissionDescriptor::BluetoothPermissionDescriptor() noexcept: PermissionDescriptor(emlite::Val::object()) {}
BluetoothPermissionDescriptor BluetoothPermissionDescriptor::clone() const noexcept { return *this; }

jsbind::String BluetoothPermissionDescriptor::deviceId() const {
    return emlite::Val::get("deviceId").as<jsbind::String>();
}

void BluetoothPermissionDescriptor::deviceId(const jsbind::String& value) {
    emlite::Val::set("deviceId", value);
}

jsbind::TypedArray<BluetoothLEScanFilterInit> BluetoothPermissionDescriptor::filters() const {
    return emlite::Val::get("filters").as<jsbind::TypedArray<BluetoothLEScanFilterInit>>();
}

void BluetoothPermissionDescriptor::filters(const jsbind::TypedArray<BluetoothLEScanFilterInit>& value) {
    emlite::Val::set("filters", value);
}

jsbind::TypedArray<jsbind::Any> BluetoothPermissionDescriptor::optionalServices() const {
    return emlite::Val::get("optionalServices").as<jsbind::TypedArray<jsbind::Any>>();
}

void BluetoothPermissionDescriptor::optionalServices(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("optionalServices", value);
}

jsbind::TypedArray<unsigned short> BluetoothPermissionDescriptor::optionalManufacturerData() const {
    return emlite::Val::get("optionalManufacturerData").as<jsbind::TypedArray<unsigned short>>();
}

void BluetoothPermissionDescriptor::optionalManufacturerData(jsbind::TypedArray<unsigned short> value) {
    emlite::Val::set("optionalManufacturerData", value);
}

bool BluetoothPermissionDescriptor::acceptAllDevices() const {
    return emlite::Val::get("acceptAllDevices").as<bool>();
}

void BluetoothPermissionDescriptor::acceptAllDevices(bool value) {
    emlite::Val::set("acceptAllDevices", value);
}


} // namespace webbind