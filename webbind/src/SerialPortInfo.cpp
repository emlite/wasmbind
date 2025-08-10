#include <webbind/SerialPortInfo.hpp>

namespace webbind {

SerialPortInfo::SerialPortInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SerialPortInfo SerialPortInfo::take_ownership(Handle h) noexcept {
    return SerialPortInfo(h);
}

SerialPortInfo::SerialPortInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}

SerialPortInfo::SerialPortInfo() noexcept: emlite::Val(emlite::Val::object()) {}

SerialPortInfo SerialPortInfo::clone() const noexcept { return *this; }

unsigned short SerialPortInfo::usbVendorId() const {
    return emlite::Val::get("usbVendorId").as<unsigned short>();
}

void SerialPortInfo::usbVendorId(unsigned short value) {
    emlite::Val::set("usbVendorId", value);
}

unsigned short SerialPortInfo::usbProductId() const {
    return emlite::Val::get("usbProductId").as<unsigned short>();
}

void SerialPortInfo::usbProductId(unsigned short value) {
    emlite::Val::set("usbProductId", value);
}

jsbind::Any SerialPortInfo::bluetoothServiceClassId() const {
    return emlite::Val::get("bluetoothServiceClassId").as<jsbind::Any>();
}

void SerialPortInfo::bluetoothServiceClassId(const jsbind::Any& value) {
    emlite::Val::set("bluetoothServiceClassId", value);
}


} // namespace webbind