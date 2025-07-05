#include <webbind/BluetoothServiceDataFilter.hpp>


BluetoothServiceDataFilter BluetoothServiceDataFilter::take_ownership(Handle h) noexcept {
        return BluetoothServiceDataFilter(h);
    }
BluetoothServiceDataFilter BluetoothServiceDataFilter::clone() const noexcept { return *this; }
BluetoothServiceDataFilter::BluetoothServiceDataFilter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothServiceDataFilter::BluetoothServiceDataFilter(const emlite::Val &val) noexcept: emlite::Val(val) {}


BluetoothServiceDataFilter::BluetoothServiceDataFilter() : emlite::Val(emlite::Val::global("BluetoothServiceDataFilter").new_()) {}

BluetoothServiceDataFilter::BluetoothServiceDataFilter(const jsbind::Object& init) : emlite::Val(emlite::Val::global("BluetoothServiceDataFilter").new_(init)) {}

