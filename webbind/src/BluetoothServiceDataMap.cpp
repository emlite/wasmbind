#include "webbind/BluetoothServiceDataMap.hpp"

namespace webbind {

BluetoothServiceDataMap BluetoothServiceDataMap::take_ownership(Handle h) noexcept {
        return BluetoothServiceDataMap(h);
    }
BluetoothServiceDataMap BluetoothServiceDataMap::clone() const noexcept { return *this; }
emlite::Val BluetoothServiceDataMap::instance() noexcept { return emlite::Val::global("BluetoothServiceDataMap"); }
BluetoothServiceDataMap::BluetoothServiceDataMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothServiceDataMap::BluetoothServiceDataMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind