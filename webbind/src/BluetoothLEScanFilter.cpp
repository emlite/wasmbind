#include <webbind/BluetoothLEScanFilter.hpp>
#include <webbind/BluetoothLEScanFilterInit.hpp>
#include <webbind/BluetoothManufacturerDataFilter.hpp>
#include <webbind/BluetoothServiceDataFilter.hpp>

namespace webbind {

BluetoothLEScanFilter BluetoothLEScanFilter::take_ownership(Handle h) noexcept {
    return BluetoothLEScanFilter(h);
}

BluetoothLEScanFilter BluetoothLEScanFilter::clone() const noexcept { return *this; }

emlite::Val BluetoothLEScanFilter::instance() noexcept { return emlite::Val::global("BluetoothLEScanFilter"); }

BluetoothLEScanFilter::BluetoothLEScanFilter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

BluetoothLEScanFilter::BluetoothLEScanFilter(const emlite::Val &val) noexcept: emlite::Val(val) {}

BluetoothLEScanFilter::BluetoothLEScanFilter() : emlite::Val(emlite::Val::global("BluetoothLEScanFilter").new_()) {}

BluetoothLEScanFilter::BluetoothLEScanFilter(const BluetoothLEScanFilterInit& init) : emlite::Val(emlite::Val::global("BluetoothLEScanFilter").new_(init)) {}

jsbind::String BluetoothLEScanFilter::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

jsbind::String BluetoothLEScanFilter::namePrefix() const {
    return emlite::Val::get("namePrefix").as<jsbind::String>();
}

jsbind::TypedArray<jsbind::Any> BluetoothLEScanFilter::services() const {
    return emlite::Val::get("services").as<jsbind::TypedArray<jsbind::Any>>();
}

BluetoothManufacturerDataFilter BluetoothLEScanFilter::manufacturerData() const {
    return emlite::Val::get("manufacturerData").as<BluetoothManufacturerDataFilter>();
}

BluetoothServiceDataFilter BluetoothLEScanFilter::serviceData() const {
    return emlite::Val::get("serviceData").as<BluetoothServiceDataFilter>();
}


} // namespace webbind