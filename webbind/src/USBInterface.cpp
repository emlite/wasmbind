#include "webbind/USBInterface.hpp"
#include "webbind/USBConfiguration.hpp"
#include "webbind/USBAlternateInterface.hpp"

namespace webbind {

USBInterface USBInterface::take_ownership(Handle h) noexcept {
        return USBInterface(h);
    }
USBInterface USBInterface::clone() const noexcept { return *this; }
emlite::Val USBInterface::instance() noexcept { return emlite::Val::global("USBInterface"); }
USBInterface::USBInterface(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBInterface::USBInterface(const emlite::Val &val) noexcept: emlite::Val(val) {}

USBInterface::USBInterface(const USBConfiguration& configuration, unsigned char interfaceNumber) : emlite::Val(emlite::Val::global("USBInterface").new_(configuration, interfaceNumber)) {}

unsigned char USBInterface::interfaceNumber() const {
    return emlite::Val::get("interfaceNumber").as<unsigned char>();
}

USBAlternateInterface USBInterface::alternate() const {
    return emlite::Val::get("alternate").as<USBAlternateInterface>();
}

jsbind::TypedArray<USBAlternateInterface> USBInterface::alternates() const {
    return emlite::Val::get("alternates").as<jsbind::TypedArray<USBAlternateInterface>>();
}

bool USBInterface::claimed() const {
    return emlite::Val::get("claimed").as<bool>();
}


} // namespace webbind