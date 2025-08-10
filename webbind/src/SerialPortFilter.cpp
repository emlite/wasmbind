#include <webbind/SerialPortFilter.hpp>

namespace webbind {

SerialPortFilter::SerialPortFilter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SerialPortFilter SerialPortFilter::take_ownership(Handle h) noexcept {
    return SerialPortFilter(h);
}

SerialPortFilter::SerialPortFilter(const emlite::Val &val) noexcept: emlite::Val(val) {}

SerialPortFilter::SerialPortFilter() noexcept: emlite::Val(emlite::Val::object()) {}

SerialPortFilter SerialPortFilter::clone() const noexcept { return *this; }

unsigned short SerialPortFilter::usbVendorId() const {
    return emlite::Val::get("usbVendorId").as<unsigned short>();
}

void SerialPortFilter::usbVendorId(unsigned short value) {
    emlite::Val::set("usbVendorId", value);
}

unsigned short SerialPortFilter::usbProductId() const {
    return emlite::Val::get("usbProductId").as<unsigned short>();
}

void SerialPortFilter::usbProductId(unsigned short value) {
    emlite::Val::set("usbProductId", value);
}

jsbind::Any SerialPortFilter::bluetoothServiceClassId() const {
    return emlite::Val::get("bluetoothServiceClassId").as<jsbind::Any>();
}

void SerialPortFilter::bluetoothServiceClassId(const jsbind::Any& value) {
    emlite::Val::set("bluetoothServiceClassId", value);
}


} // namespace webbind