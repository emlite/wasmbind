#include <webbind/RTCIdentityProviderDetails.hpp>

namespace webbind {

RTCIdentityProviderDetails::RTCIdentityProviderDetails(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIdentityProviderDetails RTCIdentityProviderDetails::take_ownership(Handle h) noexcept {
    return RTCIdentityProviderDetails(h);
}

RTCIdentityProviderDetails::RTCIdentityProviderDetails(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCIdentityProviderDetails::RTCIdentityProviderDetails() noexcept: emlite::Val(emlite::Val::object()) {}

RTCIdentityProviderDetails RTCIdentityProviderDetails::clone() const noexcept { return *this; }

jsbind::String RTCIdentityProviderDetails::domain() const {
    return emlite::Val::get("domain").as<jsbind::String>();
}

void RTCIdentityProviderDetails::domain(const jsbind::String& value) {
    emlite::Val::set("domain", value);
}

jsbind::String RTCIdentityProviderDetails::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

void RTCIdentityProviderDetails::protocol(const jsbind::String& value) {
    emlite::Val::set("protocol", value);
}


} // namespace webbind