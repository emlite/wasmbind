#include <webbind/BluetoothDataFilter.hpp>


BluetoothDataFilter BluetoothDataFilter::take_ownership(Handle h) noexcept {
        return BluetoothDataFilter(h);
    }
BluetoothDataFilter BluetoothDataFilter::clone() const noexcept { return *this; }
BluetoothDataFilter::BluetoothDataFilter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothDataFilter::BluetoothDataFilter(const emlite::Val &val) noexcept: emlite::Val(val) {}


BluetoothDataFilter::BluetoothDataFilter(const jsbind::Any& init): emlite::Val(emlite::Val::global("BluetoothDataFilter").new_(init)) {}

jsbind::ArrayBuffer BluetoothDataFilter::dataPrefix() const {
    return emlite::Val::get("dataPrefix").as<jsbind::ArrayBuffer>();
}

jsbind::ArrayBuffer BluetoothDataFilter::mask() const {
    return emlite::Val::get("mask").as<jsbind::ArrayBuffer>();
}

