#include <webbind/USBDeviceFilter.hpp>

namespace webbind {

USBDeviceFilter::USBDeviceFilter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBDeviceFilter USBDeviceFilter::take_ownership(Handle h) noexcept {
    return USBDeviceFilter(h);
}

USBDeviceFilter::USBDeviceFilter(const emlite::Val &val) noexcept: emlite::Val(val) {}

USBDeviceFilter::USBDeviceFilter() noexcept: emlite::Val(emlite::Val::object()) {}

USBDeviceFilter USBDeviceFilter::clone() const noexcept { return *this; }

unsigned short USBDeviceFilter::vendorId() const {
    return emlite::Val::get("vendorId").as<unsigned short>();
}

void USBDeviceFilter::vendorId(unsigned short value) {
    emlite::Val::set("vendorId", value);
}

unsigned short USBDeviceFilter::productId() const {
    return emlite::Val::get("productId").as<unsigned short>();
}

void USBDeviceFilter::productId(unsigned short value) {
    emlite::Val::set("productId", value);
}

unsigned char USBDeviceFilter::classCode() const {
    return emlite::Val::get("classCode").as<unsigned char>();
}

void USBDeviceFilter::classCode(unsigned char value) {
    emlite::Val::set("classCode", value);
}

unsigned char USBDeviceFilter::subclassCode() const {
    return emlite::Val::get("subclassCode").as<unsigned char>();
}

void USBDeviceFilter::subclassCode(unsigned char value) {
    emlite::Val::set("subclassCode", value);
}

unsigned char USBDeviceFilter::protocolCode() const {
    return emlite::Val::get("protocolCode").as<unsigned char>();
}

void USBDeviceFilter::protocolCode(unsigned char value) {
    emlite::Val::set("protocolCode", value);
}

jsbind::String USBDeviceFilter::serialNumber() const {
    return emlite::Val::get("serialNumber").as<jsbind::String>();
}

void USBDeviceFilter::serialNumber(const jsbind::String& value) {
    emlite::Val::set("serialNumber", value);
}


} // namespace webbind