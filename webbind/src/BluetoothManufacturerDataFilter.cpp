#include <webbind/BluetoothManufacturerDataFilter.hpp>

namespace webbind {

BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter::take_ownership(Handle h) noexcept {
        return BluetoothManufacturerDataFilter(h);
    }
BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter::clone() const noexcept { return *this; }
emlite::Val BluetoothManufacturerDataFilter::instance() noexcept { return emlite::Val::global("BluetoothManufacturerDataFilter"); }
BluetoothManufacturerDataFilter::BluetoothManufacturerDataFilter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothManufacturerDataFilter::BluetoothManufacturerDataFilter(const emlite::Val &val) noexcept: emlite::Val(val) {}

BluetoothManufacturerDataFilter::BluetoothManufacturerDataFilter() : emlite::Val(emlite::Val::global("BluetoothManufacturerDataFilter").new_()) {}

BluetoothManufacturerDataFilter::BluetoothManufacturerDataFilter(const jsbind::Object& init) : emlite::Val(emlite::Val::global("BluetoothManufacturerDataFilter").new_(init)) {}


} // namespace webbind