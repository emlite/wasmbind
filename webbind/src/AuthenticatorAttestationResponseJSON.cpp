#include <webbind/AuthenticatorAttestationResponseJSON.hpp>

namespace webbind {

AuthenticatorAttestationResponseJSON::AuthenticatorAttestationResponseJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticatorAttestationResponseJSON AuthenticatorAttestationResponseJSON::take_ownership(Handle h) noexcept {
    return AuthenticatorAttestationResponseJSON(h);
}

AuthenticatorAttestationResponseJSON::AuthenticatorAttestationResponseJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}

AuthenticatorAttestationResponseJSON::AuthenticatorAttestationResponseJSON() noexcept: emlite::Val(emlite::Val::object()) {}

AuthenticatorAttestationResponseJSON AuthenticatorAttestationResponseJSON::clone() const noexcept { return *this; }

jsbind::Any AuthenticatorAttestationResponseJSON::clientDataJSON() const {
    return emlite::Val::get("clientDataJSON").as<jsbind::Any>();
}

void AuthenticatorAttestationResponseJSON::clientDataJSON(const jsbind::Any& value) {
    emlite::Val::set("clientDataJSON", value);
}

jsbind::Any AuthenticatorAttestationResponseJSON::authenticatorData() const {
    return emlite::Val::get("authenticatorData").as<jsbind::Any>();
}

void AuthenticatorAttestationResponseJSON::authenticatorData(const jsbind::Any& value) {
    emlite::Val::set("authenticatorData", value);
}

jsbind::TypedArray<jsbind::String> AuthenticatorAttestationResponseJSON::transports() const {
    return emlite::Val::get("transports").as<jsbind::TypedArray<jsbind::String>>();
}

void AuthenticatorAttestationResponseJSON::transports(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("transports", value);
}

jsbind::Any AuthenticatorAttestationResponseJSON::publicKey() const {
    return emlite::Val::get("publicKey").as<jsbind::Any>();
}

void AuthenticatorAttestationResponseJSON::publicKey(const jsbind::Any& value) {
    emlite::Val::set("publicKey", value);
}

jsbind::Any AuthenticatorAttestationResponseJSON::publicKeyAlgorithm() const {
    return emlite::Val::get("publicKeyAlgorithm").as<jsbind::Any>();
}

void AuthenticatorAttestationResponseJSON::publicKeyAlgorithm(const jsbind::Any& value) {
    emlite::Val::set("publicKeyAlgorithm", value);
}

jsbind::Any AuthenticatorAttestationResponseJSON::attestationObject() const {
    return emlite::Val::get("attestationObject").as<jsbind::Any>();
}

void AuthenticatorAttestationResponseJSON::attestationObject(const jsbind::Any& value) {
    emlite::Val::set("attestationObject", value);
}


} // namespace webbind