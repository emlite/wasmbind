#include <webbind/PublicKeyCredentialCreationOptions.hpp>
#include <webbind/PublicKeyCredentialRpEntity.hpp>
#include <webbind/PublicKeyCredentialUserEntity.hpp>
#include <webbind/PublicKeyCredentialParameters.hpp>
#include <webbind/PublicKeyCredentialDescriptor.hpp>
#include <webbind/AuthenticatorSelectionCriteria.hpp>
#include <webbind/AuthenticationExtensionsClientInputs.hpp>

using emlite::Val;
namespace webbind {

PublicKeyCredentialCreationOptions::PublicKeyCredentialCreationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PublicKeyCredentialCreationOptions PublicKeyCredentialCreationOptions::take_ownership(Handle h) noexcept {
        return PublicKeyCredentialCreationOptions(h);
    }
PublicKeyCredentialCreationOptions::PublicKeyCredentialCreationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PublicKeyCredentialCreationOptions::PublicKeyCredentialCreationOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PublicKeyCredentialCreationOptions PublicKeyCredentialCreationOptions::clone() const noexcept { return *this; }

PublicKeyCredentialRpEntity PublicKeyCredentialCreationOptions::rp() const {
    return emlite::Val::get("rp").as<PublicKeyCredentialRpEntity>();
}

void PublicKeyCredentialCreationOptions::rp(const PublicKeyCredentialRpEntity& value) {
    emlite::Val::set("rp", value);
}

PublicKeyCredentialUserEntity PublicKeyCredentialCreationOptions::user() const {
    return emlite::Val::get("user").as<PublicKeyCredentialUserEntity>();
}

void PublicKeyCredentialCreationOptions::user(const PublicKeyCredentialUserEntity& value) {
    emlite::Val::set("user", value);
}

jsbind::Any PublicKeyCredentialCreationOptions::challenge() const {
    return emlite::Val::get("challenge").as<jsbind::Any>();
}

void PublicKeyCredentialCreationOptions::challenge(const jsbind::Any& value) {
    emlite::Val::set("challenge", value);
}

jsbind::TypedArray<PublicKeyCredentialParameters> PublicKeyCredentialCreationOptions::pubKeyCredParams() const {
    return emlite::Val::get("pubKeyCredParams").as<jsbind::TypedArray<PublicKeyCredentialParameters>>();
}

void PublicKeyCredentialCreationOptions::pubKeyCredParams(const jsbind::TypedArray<PublicKeyCredentialParameters>& value) {
    emlite::Val::set("pubKeyCredParams", value);
}

unsigned long PublicKeyCredentialCreationOptions::timeout() const {
    return emlite::Val::get("timeout").as<unsigned long>();
}

void PublicKeyCredentialCreationOptions::timeout(unsigned long value) {
    emlite::Val::set("timeout", value);
}

jsbind::TypedArray<PublicKeyCredentialDescriptor> PublicKeyCredentialCreationOptions::excludeCredentials() const {
    return emlite::Val::get("excludeCredentials").as<jsbind::TypedArray<PublicKeyCredentialDescriptor>>();
}

void PublicKeyCredentialCreationOptions::excludeCredentials(const jsbind::TypedArray<PublicKeyCredentialDescriptor>& value) {
    emlite::Val::set("excludeCredentials", value);
}

AuthenticatorSelectionCriteria PublicKeyCredentialCreationOptions::authenticatorSelection() const {
    return emlite::Val::get("authenticatorSelection").as<AuthenticatorSelectionCriteria>();
}

void PublicKeyCredentialCreationOptions::authenticatorSelection(const AuthenticatorSelectionCriteria& value) {
    emlite::Val::set("authenticatorSelection", value);
}

jsbind::TypedArray<jsbind::String> PublicKeyCredentialCreationOptions::hints() const {
    return emlite::Val::get("hints").as<jsbind::TypedArray<jsbind::String>>();
}

void PublicKeyCredentialCreationOptions::hints(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("hints", value);
}

jsbind::String PublicKeyCredentialCreationOptions::attestation() const {
    return emlite::Val::get("attestation").as<jsbind::String>();
}

void PublicKeyCredentialCreationOptions::attestation(const jsbind::String& value) {
    emlite::Val::set("attestation", value);
}

jsbind::TypedArray<jsbind::String> PublicKeyCredentialCreationOptions::attestationFormats() const {
    return emlite::Val::get("attestationFormats").as<jsbind::TypedArray<jsbind::String>>();
}

void PublicKeyCredentialCreationOptions::attestationFormats(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("attestationFormats", value);
}

AuthenticationExtensionsClientInputs PublicKeyCredentialCreationOptions::extensions() const {
    return emlite::Val::get("extensions").as<AuthenticationExtensionsClientInputs>();
}

void PublicKeyCredentialCreationOptions::extensions(const AuthenticationExtensionsClientInputs& value) {
    emlite::Val::set("extensions", value);
}


} // namespace webbind