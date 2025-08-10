#include <webbind/RTCIceParameters.hpp>

using emlite::Val;
namespace webbind {

RTCIceParameters::RTCIceParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIceParameters RTCIceParameters::take_ownership(Handle h) noexcept {
        return RTCIceParameters(h);
    }
RTCIceParameters::RTCIceParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCIceParameters::RTCIceParameters() noexcept: emlite::Val(emlite::Val::object()) {}
RTCIceParameters RTCIceParameters::clone() const noexcept { return *this; }

jsbind::String RTCIceParameters::usernameFragment() const {
    return emlite::Val::get("usernameFragment").as<jsbind::String>();
}

void RTCIceParameters::usernameFragment(const jsbind::String& value) {
    emlite::Val::set("usernameFragment", value);
}

jsbind::String RTCIceParameters::password() const {
    return emlite::Val::get("password").as<jsbind::String>();
}

void RTCIceParameters::password(const jsbind::String& value) {
    emlite::Val::set("password", value);
}


} // namespace webbind