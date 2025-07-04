#include <webbind/BluetoothLEScan.hpp>
#include <webbind/BluetoothLEScanFilter.hpp>


BluetoothLEScan BluetoothLEScan::take_ownership(Handle h) noexcept {
        return BluetoothLEScan(h);
    }
BluetoothLEScan BluetoothLEScan::clone() const noexcept { return *this; }
BluetoothLEScan::BluetoothLEScan(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothLEScan::BluetoothLEScan(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::FrozenArray<BluetoothLEScanFilter> BluetoothLEScan::filters() const {
    return emlite::Val::get("filters").as<jsbind::FrozenArray<BluetoothLEScanFilter>>();
}

bool BluetoothLEScan::keepRepeatedDevices() const {
    return emlite::Val::get("keepRepeatedDevices").as<bool>();
}

bool BluetoothLEScan::acceptAllAdvertisements() const {
    return emlite::Val::get("acceptAllAdvertisements").as<bool>();
}

bool BluetoothLEScan::active() const {
    return emlite::Val::get("active").as<bool>();
}

jsbind::Undefined BluetoothLEScan::stop() {
    return emlite::Val::call("stop").as<jsbind::Undefined>();
}

