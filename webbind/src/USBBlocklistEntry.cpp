#include "webbind/USBBlocklistEntry.hpp"

using emlite::Val;
namespace webbind {

USBBlocklistEntry::USBBlocklistEntry(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBBlocklistEntry USBBlocklistEntry::take_ownership(Handle h) noexcept {
        return USBBlocklistEntry(h);
    }
USBBlocklistEntry::USBBlocklistEntry(const emlite::Val &val) noexcept: emlite::Val(val) {}
USBBlocklistEntry::USBBlocklistEntry() noexcept: emlite::Val(emlite::Val::object()) {}
USBBlocklistEntry USBBlocklistEntry::clone() const noexcept { return *this; }

unsigned short USBBlocklistEntry::idVendor() const {
    return emlite::Val::get("idVendor").as<unsigned short>();
}

void USBBlocklistEntry::idVendor(unsigned short value) {
    emlite::Val::set("idVendor", value);
}

unsigned short USBBlocklistEntry::idProduct() const {
    return emlite::Val::get("idProduct").as<unsigned short>();
}

void USBBlocklistEntry::idProduct(unsigned short value) {
    emlite::Val::set("idProduct", value);
}

unsigned short USBBlocklistEntry::bcdDevice() const {
    return emlite::Val::get("bcdDevice").as<unsigned short>();
}

void USBBlocklistEntry::bcdDevice(unsigned short value) {
    emlite::Val::set("bcdDevice", value);
}


} // namespace webbind