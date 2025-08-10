#include <webbind/SerialPortRequestOptions.hpp>
#include <webbind/SerialPortFilter.hpp>

namespace webbind {

SerialPortRequestOptions::SerialPortRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SerialPortRequestOptions SerialPortRequestOptions::take_ownership(Handle h) noexcept {
    return SerialPortRequestOptions(h);
}

SerialPortRequestOptions::SerialPortRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

SerialPortRequestOptions::SerialPortRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}

SerialPortRequestOptions SerialPortRequestOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<SerialPortFilter> SerialPortRequestOptions::filters() const {
    return emlite::Val::get("filters").as<jsbind::TypedArray<SerialPortFilter>>();
}

void SerialPortRequestOptions::filters(const jsbind::TypedArray<SerialPortFilter>& value) {
    emlite::Val::set("filters", value);
}

jsbind::TypedArray<jsbind::Any> SerialPortRequestOptions::allowedBluetoothServiceClassIds() const {
    return emlite::Val::get("allowedBluetoothServiceClassIds").as<jsbind::TypedArray<jsbind::Any>>();
}

void SerialPortRequestOptions::allowedBluetoothServiceClassIds(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("allowedBluetoothServiceClassIds", value);
}


} // namespace webbind