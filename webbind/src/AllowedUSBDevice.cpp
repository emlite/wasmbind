#include <webbind/AllowedUSBDevice.hpp>

namespace webbind {

AllowedUSBDevice::AllowedUSBDevice(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AllowedUSBDevice AllowedUSBDevice::take_ownership(Handle h) noexcept {
    return AllowedUSBDevice(h);
}

AllowedUSBDevice::AllowedUSBDevice(const emlite::Val &val) noexcept: emlite::Val(val) {}

AllowedUSBDevice::AllowedUSBDevice() noexcept: emlite::Val(emlite::Val::object()) {}

AllowedUSBDevice AllowedUSBDevice::clone() const noexcept { return *this; }

unsigned char AllowedUSBDevice::vendorId() const {
    return emlite::Val::get("vendorId").as<unsigned char>();
}

void AllowedUSBDevice::vendorId(unsigned char value) {
    emlite::Val::set("vendorId", value);
}

unsigned char AllowedUSBDevice::productId() const {
    return emlite::Val::get("productId").as<unsigned char>();
}

void AllowedUSBDevice::productId(unsigned char value) {
    emlite::Val::set("productId", value);
}

jsbind::String AllowedUSBDevice::serialNumber() const {
    return emlite::Val::get("serialNumber").as<jsbind::String>();
}

void AllowedUSBDevice::serialNumber(const jsbind::String& value) {
    emlite::Val::set("serialNumber", value);
}


} // namespace webbind