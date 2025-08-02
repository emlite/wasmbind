#include <webbind/USBEndpoint.hpp>
#include <webbind/USBAlternateInterface.hpp>


USBEndpoint USBEndpoint::take_ownership(Handle h) noexcept {
        return USBEndpoint(h);
    }
USBEndpoint USBEndpoint::clone() const noexcept { return *this; }
emlite::Val USBEndpoint::instance() noexcept { return emlite::Val::global("USBEndpoint"); }
USBEndpoint::USBEndpoint(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBEndpoint::USBEndpoint(const emlite::Val &val) noexcept: emlite::Val(val) {}


USBEndpoint::USBEndpoint(const USBAlternateInterface& alternate, unsigned char endpointNumber, const USBDirection& direction) : emlite::Val(emlite::Val::global("USBEndpoint").new_(alternate, endpointNumber, direction)) {}

unsigned char USBEndpoint::endpointNumber() const {
    return emlite::Val::get("endpointNumber").as<unsigned char>();
}

USBDirection USBEndpoint::direction() const {
    return emlite::Val::get("direction").as<USBDirection>();
}

USBEndpointType USBEndpoint::type() const {
    return emlite::Val::get("type").as<USBEndpointType>();
}

unsigned long USBEndpoint::packetSize() const {
    return emlite::Val::get("packetSize").as<unsigned long>();
}

