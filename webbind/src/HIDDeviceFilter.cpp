#include "webbind/HIDDeviceFilter.hpp"

using emlite::Val;
namespace webbind {

HIDDeviceFilter::HIDDeviceFilter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HIDDeviceFilter HIDDeviceFilter::take_ownership(Handle h) noexcept {
        return HIDDeviceFilter(h);
    }
HIDDeviceFilter::HIDDeviceFilter(const emlite::Val &val) noexcept: emlite::Val(val) {}
HIDDeviceFilter::HIDDeviceFilter() noexcept: emlite::Val(emlite::Val::object()) {}
HIDDeviceFilter HIDDeviceFilter::clone() const noexcept { return *this; }

unsigned long HIDDeviceFilter::vendorId() const {
    return emlite::Val::get("vendorId").as<unsigned long>();
}

void HIDDeviceFilter::vendorId(unsigned long value) {
    emlite::Val::set("vendorId", value);
}

unsigned short HIDDeviceFilter::productId() const {
    return emlite::Val::get("productId").as<unsigned short>();
}

void HIDDeviceFilter::productId(unsigned short value) {
    emlite::Val::set("productId", value);
}

unsigned short HIDDeviceFilter::usagePage() const {
    return emlite::Val::get("usagePage").as<unsigned short>();
}

void HIDDeviceFilter::usagePage(unsigned short value) {
    emlite::Val::set("usagePage", value);
}

unsigned short HIDDeviceFilter::usage() const {
    return emlite::Val::get("usage").as<unsigned short>();
}

void HIDDeviceFilter::usage(unsigned short value) {
    emlite::Val::set("usage", value);
}


} // namespace webbind