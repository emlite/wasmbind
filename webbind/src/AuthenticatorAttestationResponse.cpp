#include <webbind/AuthenticatorAttestationResponse.hpp>


AuthenticatorAttestationResponse AuthenticatorAttestationResponse::take_ownership(Handle h) noexcept {
        return AuthenticatorAttestationResponse(h);
    }
AuthenticatorAttestationResponse AuthenticatorAttestationResponse::clone() const noexcept { return *this; }
AuthenticatorAttestationResponse::AuthenticatorAttestationResponse(Handle h) noexcept : AuthenticatorResponse(emlite::Val::take_ownership(h)) {}
AuthenticatorAttestationResponse::AuthenticatorAttestationResponse(const emlite::Val &val) noexcept: AuthenticatorResponse(val) {}


jsbind::ArrayBuffer AuthenticatorAttestationResponse::attestationObject() const {
    return AuthenticatorResponse::get("attestationObject").as<jsbind::ArrayBuffer>();
}

jsbind::Sequence<jsbind::DOMString> AuthenticatorAttestationResponse::getTransports() {
    return AuthenticatorResponse::call("getTransports").as<jsbind::Sequence<jsbind::DOMString>>();
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

