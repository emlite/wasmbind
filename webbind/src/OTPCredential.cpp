#include <webbind/OTPCredential.hpp>

namespace webbind {

OTPCredential OTPCredential::take_ownership(Handle h) noexcept {
    return OTPCredential(h);
}

OTPCredential OTPCredential::clone() const noexcept { return *this; }

emlite::Val OTPCredential::instance() noexcept { return emlite::Val::global("OTPCredential"); }

OTPCredential::OTPCredential(Handle h) noexcept : Credential(emlite::Val::take_ownership(h)) {}

OTPCredential::OTPCredential(const emlite::Val &val) noexcept: Credential(val) {}

jsbind::String OTPCredential::code() const {
    return Credential::get("code").as<jsbind::String>();
}


} // namespace webbind