#include <webbind/OTPCredentialRequestOptions.hpp>

namespace webbind {

OTPCredentialRequestOptions::OTPCredentialRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OTPCredentialRequestOptions OTPCredentialRequestOptions::take_ownership(Handle h) noexcept {
    return OTPCredentialRequestOptions(h);
}

OTPCredentialRequestOptions::OTPCredentialRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

OTPCredentialRequestOptions::OTPCredentialRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}

OTPCredentialRequestOptions OTPCredentialRequestOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<OTPCredentialTransportType> OTPCredentialRequestOptions::transport() const {
    return emlite::Val::get("transport").as<jsbind::TypedArray<OTPCredentialTransportType>>();
}

void OTPCredentialRequestOptions::transport(const jsbind::TypedArray<OTPCredentialTransportType>& value) {
    emlite::Val::set("transport", value);
}


} // namespace webbind