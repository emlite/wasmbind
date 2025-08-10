#include <webbind/AllowedBluetoothDevice.hpp>

using emlite::Val;
namespace webbind {

AllowedBluetoothDevice::AllowedBluetoothDevice(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AllowedBluetoothDevice AllowedBluetoothDevice::take_ownership(Handle h) noexcept {
        return AllowedBluetoothDevice(h);
    }
AllowedBluetoothDevice::AllowedBluetoothDevice(const emlite::Val &val) noexcept: emlite::Val(val) {}
AllowedBluetoothDevice::AllowedBluetoothDevice() noexcept: emlite::Val(emlite::Val::object()) {}
AllowedBluetoothDevice AllowedBluetoothDevice::clone() const noexcept { return *this; }

jsbind::String AllowedBluetoothDevice::deviceId() const {
    return emlite::Val::get("deviceId").as<jsbind::String>();
}

void AllowedBluetoothDevice::deviceId(const jsbind::String& value) {
    emlite::Val::set("deviceId", value);
}

bool AllowedBluetoothDevice::mayUseGATT() const {
    return emlite::Val::get("mayUseGATT").as<bool>();
}

void AllowedBluetoothDevice::mayUseGATT(bool value) {
    emlite::Val::set("mayUseGATT", value);
}

jsbind::Any AllowedBluetoothDevice::allowedServices() const {
    return emlite::Val::get("allowedServices").as<jsbind::Any>();
}

void AllowedBluetoothDevice::allowedServices(const jsbind::Any& value) {
    emlite::Val::set("allowedServices", value);
}

jsbind::TypedArray<unsigned short> AllowedBluetoothDevice::allowedManufacturerData() const {
    return emlite::Val::get("allowedManufacturerData").as<jsbind::TypedArray<unsigned short>>();
}

void AllowedBluetoothDevice::allowedManufacturerData(jsbind::TypedArray<unsigned short> value) {
    emlite::Val::set("allowedManufacturerData", value);
}


} // namespace webbind