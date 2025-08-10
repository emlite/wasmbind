#include <webbind/USBAlternateInterface.hpp>
#include <webbind/USBInterface.hpp>
#include <webbind/USBEndpoint.hpp>

namespace webbind {

USBAlternateInterface USBAlternateInterface::take_ownership(Handle h) noexcept {
    return USBAlternateInterface(h);
}

USBAlternateInterface USBAlternateInterface::clone() const noexcept { return *this; }

emlite::Val USBAlternateInterface::instance() noexcept { return emlite::Val::global("USBAlternateInterface"); }

USBAlternateInterface::USBAlternateInterface(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

USBAlternateInterface::USBAlternateInterface(const emlite::Val &val) noexcept: emlite::Val(val) {}

USBAlternateInterface::USBAlternateInterface(const USBInterface& deviceInterface, unsigned char alternateSetting) : emlite::Val(emlite::Val::global("USBAlternateInterface").new_(deviceInterface, alternateSetting)) {}

unsigned char USBAlternateInterface::alternateSetting() const {
    return emlite::Val::get("alternateSetting").as<unsigned char>();
}

unsigned char USBAlternateInterface::interfaceClass() const {
    return emlite::Val::get("interfaceClass").as<unsigned char>();
}

unsigned char USBAlternateInterface::interfaceSubclass() const {
    return emlite::Val::get("interfaceSubclass").as<unsigned char>();
}

unsigned char USBAlternateInterface::interfaceProtocol() const {
    return emlite::Val::get("interfaceProtocol").as<unsigned char>();
}

jsbind::String USBAlternateInterface::interfaceName() const {
    return emlite::Val::get("interfaceName").as<jsbind::String>();
}

jsbind::TypedArray<USBEndpoint> USBAlternateInterface::endpoints() const {
    return emlite::Val::get("endpoints").as<jsbind::TypedArray<USBEndpoint>>();
}


} // namespace webbind