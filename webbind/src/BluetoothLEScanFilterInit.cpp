#include <webbind/BluetoothLEScanFilterInit.hpp>
#include <webbind/BluetoothManufacturerDataFilterInit.hpp>
#include <webbind/BluetoothServiceDataFilterInit.hpp>

using emlite::Val;
namespace webbind {

BluetoothLEScanFilterInit::BluetoothLEScanFilterInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothLEScanFilterInit BluetoothLEScanFilterInit::take_ownership(Handle h) noexcept {
        return BluetoothLEScanFilterInit(h);
    }
BluetoothLEScanFilterInit::BluetoothLEScanFilterInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
BluetoothLEScanFilterInit::BluetoothLEScanFilterInit() noexcept: emlite::Val(emlite::Val::object()) {}
BluetoothLEScanFilterInit BluetoothLEScanFilterInit::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::Any> BluetoothLEScanFilterInit::services() const {
    return emlite::Val::get("services").as<jsbind::TypedArray<jsbind::Any>>();
}

void BluetoothLEScanFilterInit::services(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("services", value);
}

jsbind::String BluetoothLEScanFilterInit::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void BluetoothLEScanFilterInit::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String BluetoothLEScanFilterInit::namePrefix() const {
    return emlite::Val::get("namePrefix").as<jsbind::String>();
}

void BluetoothLEScanFilterInit::namePrefix(const jsbind::String& value) {
    emlite::Val::set("namePrefix", value);
}

jsbind::TypedArray<BluetoothManufacturerDataFilterInit> BluetoothLEScanFilterInit::manufacturerData() const {
    return emlite::Val::get("manufacturerData").as<jsbind::TypedArray<BluetoothManufacturerDataFilterInit>>();
}

void BluetoothLEScanFilterInit::manufacturerData(const jsbind::TypedArray<BluetoothManufacturerDataFilterInit>& value) {
    emlite::Val::set("manufacturerData", value);
}

jsbind::TypedArray<BluetoothServiceDataFilterInit> BluetoothLEScanFilterInit::serviceData() const {
    return emlite::Val::get("serviceData").as<jsbind::TypedArray<BluetoothServiceDataFilterInit>>();
}

void BluetoothLEScanFilterInit::serviceData(const jsbind::TypedArray<BluetoothServiceDataFilterInit>& value) {
    emlite::Val::set("serviceData", value);
}


} // namespace webbind