#include <webbind/BluetoothManufacturerDataMap.hpp>

namespace webbind {

BluetoothManufacturerDataMap BluetoothManufacturerDataMap::take_ownership(Handle h) noexcept {
        return BluetoothManufacturerDataMap(h);
    }
BluetoothManufacturerDataMap BluetoothManufacturerDataMap::clone() const noexcept { return *this; }
emlite::Val BluetoothManufacturerDataMap::instance() noexcept { return emlite::Val::global("BluetoothManufacturerDataMap"); }
BluetoothManufacturerDataMap::BluetoothManufacturerDataMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothManufacturerDataMap::BluetoothManufacturerDataMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind