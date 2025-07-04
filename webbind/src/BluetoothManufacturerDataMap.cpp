#include <webbind/BluetoothManufacturerDataMap.hpp>


BluetoothManufacturerDataMap BluetoothManufacturerDataMap::take_ownership(Handle h) noexcept {
        return BluetoothManufacturerDataMap(h);
    }
BluetoothManufacturerDataMap BluetoothManufacturerDataMap::clone() const noexcept { return *this; }
BluetoothManufacturerDataMap::BluetoothManufacturerDataMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothManufacturerDataMap::BluetoothManufacturerDataMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


