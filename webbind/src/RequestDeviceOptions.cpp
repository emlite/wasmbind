#include "webbind/RequestDeviceOptions.hpp"
#include "webbind/BluetoothLEScanFilterInit.hpp"

using emlite::Val;
namespace webbind {

RequestDeviceOptions::RequestDeviceOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RequestDeviceOptions RequestDeviceOptions::take_ownership(Handle h) noexcept {
        return RequestDeviceOptions(h);
    }
RequestDeviceOptions::RequestDeviceOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RequestDeviceOptions::RequestDeviceOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RequestDeviceOptions RequestDeviceOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<BluetoothLEScanFilterInit> RequestDeviceOptions::filters() const {
    return emlite::Val::get("filters").as<jsbind::TypedArray<BluetoothLEScanFilterInit>>();
}

void RequestDeviceOptions::filters(const jsbind::TypedArray<BluetoothLEScanFilterInit>& value) {
    emlite::Val::set("filters", value);
}

jsbind::TypedArray<BluetoothLEScanFilterInit> RequestDeviceOptions::exclusionFilters() const {
    return emlite::Val::get("exclusionFilters").as<jsbind::TypedArray<BluetoothLEScanFilterInit>>();
}

void RequestDeviceOptions::exclusionFilters(const jsbind::TypedArray<BluetoothLEScanFilterInit>& value) {
    emlite::Val::set("exclusionFilters", value);
}

jsbind::TypedArray<jsbind::Any> RequestDeviceOptions::optionalServices() const {
    return emlite::Val::get("optionalServices").as<jsbind::TypedArray<jsbind::Any>>();
}

void RequestDeviceOptions::optionalServices(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("optionalServices", value);
}

jsbind::TypedArray<unsigned short> RequestDeviceOptions::optionalManufacturerData() const {
    return emlite::Val::get("optionalManufacturerData").as<jsbind::TypedArray<unsigned short>>();
}

void RequestDeviceOptions::optionalManufacturerData(jsbind::TypedArray<unsigned short> value) {
    emlite::Val::set("optionalManufacturerData", value);
}

bool RequestDeviceOptions::acceptAllDevices() const {
    return emlite::Val::get("acceptAllDevices").as<bool>();
}

void RequestDeviceOptions::acceptAllDevices(bool value) {
    emlite::Val::set("acceptAllDevices", value);
}


} // namespace webbind