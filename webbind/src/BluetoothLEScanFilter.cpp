#include <webbind/BluetoothLEScanFilter.hpp>
#include <webbind/BluetoothManufacturerDataFilter.hpp>
#include <webbind/BluetoothServiceDataFilter.hpp>


BluetoothLEScanFilter BluetoothLEScanFilter::take_ownership(Handle h) noexcept {
        return BluetoothLEScanFilter(h);
    }
BluetoothLEScanFilter BluetoothLEScanFilter::clone() const noexcept { return *this; }
BluetoothLEScanFilter::BluetoothLEScanFilter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothLEScanFilter::BluetoothLEScanFilter(const emlite::Val &val) noexcept: emlite::Val(val) {}


BluetoothLEScanFilter::BluetoothLEScanFilter() : emlite::Val(emlite::Val::global("BluetoothLEScanFilter").new_()) {}

BluetoothLEScanFilter::BluetoothLEScanFilter(const jsbind::Any& init) : emlite::Val(emlite::Val::global("BluetoothLEScanFilter").new_(init)) {}

jsbind::DOMString BluetoothLEScanFilter::name() const {
    return emlite::Val::get("name").as<jsbind::DOMString>();
}

jsbind::DOMString BluetoothLEScanFilter::namePrefix() const {
    return emlite::Val::get("namePrefix").as<jsbind::DOMString>();
}

jsbind::FrozenArray<jsbind::Any> BluetoothLEScanFilter::services() const {
    return emlite::Val::get("services").as<jsbind::FrozenArray<jsbind::Any>>();
}

BluetoothManufacturerDataFilter BluetoothLEScanFilter::manufacturerData() const {
    return emlite::Val::get("manufacturerData").as<BluetoothManufacturerDataFilter>();
}

BluetoothServiceDataFilter BluetoothLEScanFilter::serviceData() const {
    return emlite::Val::get("serviceData").as<BluetoothServiceDataFilter>();
}

