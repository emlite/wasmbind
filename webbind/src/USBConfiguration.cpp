#include <webbind/USBConfiguration.hpp>
#include <webbind/USBInterface.hpp>
#include <webbind/USBDevice.hpp>


USBConfiguration USBConfiguration::take_ownership(Handle h) noexcept {
        return USBConfiguration(h);
    }
USBConfiguration USBConfiguration::clone() const noexcept { return *this; }
USBConfiguration::USBConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBConfiguration::USBConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}


USBConfiguration::USBConfiguration(const USBDevice& device, unsigned char configurationValue) : emlite::Val(emlite::Val::global("USBConfiguration").new_(device, configurationValue)) {}

unsigned char USBConfiguration::configurationValue() const {
    return emlite::Val::get("configurationValue").as<unsigned char>();
}

jsbind::String USBConfiguration::configurationName() const {
    return emlite::Val::get("configurationName").as<jsbind::String>();
}

jsbind::TypedArray<USBInterface> USBConfiguration::interfaces() const {
    return emlite::Val::get("interfaces").as<jsbind::TypedArray<USBInterface>>();
}

