#include <webbind/BluetoothLEScanOptions.hpp>
#include <webbind/BluetoothLEScanFilterInit.hpp>

namespace webbind {

BluetoothLEScanOptions::BluetoothLEScanOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothLEScanOptions BluetoothLEScanOptions::take_ownership(Handle h) noexcept {
    return BluetoothLEScanOptions(h);
}

BluetoothLEScanOptions::BluetoothLEScanOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

BluetoothLEScanOptions::BluetoothLEScanOptions() noexcept: emlite::Val(emlite::Val::object()) {}

BluetoothLEScanOptions BluetoothLEScanOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<BluetoothLEScanFilterInit> BluetoothLEScanOptions::filters() const {
    return emlite::Val::get("filters").as<jsbind::TypedArray<BluetoothLEScanFilterInit>>();
}

void BluetoothLEScanOptions::filters(const jsbind::TypedArray<BluetoothLEScanFilterInit>& value) {
    emlite::Val::set("filters", value);
}

bool BluetoothLEScanOptions::keepRepeatedDevices() const {
    return emlite::Val::get("keepRepeatedDevices").as<bool>();
}

void BluetoothLEScanOptions::keepRepeatedDevices(bool value) {
    emlite::Val::set("keepRepeatedDevices", value);
}

bool BluetoothLEScanOptions::acceptAllAdvertisements() const {
    return emlite::Val::get("acceptAllAdvertisements").as<bool>();
}

void BluetoothLEScanOptions::acceptAllAdvertisements(bool value) {
    emlite::Val::set("acceptAllAdvertisements", value);
}


} // namespace webbind