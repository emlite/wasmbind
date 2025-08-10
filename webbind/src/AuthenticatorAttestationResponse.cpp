#include "webbind/AuthenticatorAttestationResponse.hpp"

namespace webbind {

AuthenticatorAttestationResponse AuthenticatorAttestationResponse::take_ownership(Handle h) noexcept {
        return AuthenticatorAttestationResponse(h);
    }
AuthenticatorAttestationResponse AuthenticatorAttestationResponse::clone() const noexcept { return *this; }
emlite::Val AuthenticatorAttestationResponse::instance() noexcept { return emlite::Val::global("AuthenticatorAttestationResponse"); }
AuthenticatorAttestationResponse::AuthenticatorAttestationResponse(Handle h) noexcept : AuthenticatorResponse(emlite::Val::take_ownership(h)) {}
AuthenticatorAttestationResponse::AuthenticatorAttestationResponse(const emlite::Val &val) noexcept: AuthenticatorResponse(val) {}

jsbind::ArrayBuffer AuthenticatorAttestationResponse::attestationObject() const {
    return AuthenticatorResponse::get("attestationObject").as<jsbind::ArrayBuffer>();
}

jsbind::TypedArray<jsbind::String> AuthenticatorAttestationResponse::getTransports() {
    return AuthenticatorResponse::call("getTransports").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::ArrayBuffer AuthenticatorAttestationResponse::getAuthenticatorData() {
    return AuthenticatorResponse::call("getAuthenticatorData").as<jsbind::ArrayBuffer>();
}

jsbind::ArrayBuffer AuthenticatorAttestationResponse::getPublicKey() {
    return AuthenticatorResponse::call("getPublicKey").as<jsbind::ArrayBuffer>();
}

jsbind::Any AuthenticatorAttestationResponse::getPublicKeyAlgorithm() {
    return AuthenticatorResponse::call("getPublicKeyAlgorithm").as<jsbind::Any>();
}


} // namespace webbind