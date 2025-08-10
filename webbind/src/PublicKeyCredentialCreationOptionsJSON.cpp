#include "webbind/PublicKeyCredentialCreationOptionsJSON.hpp"
#include "webbind/PublicKeyCredentialRpEntity.hpp"
#include "webbind/PublicKeyCredentialUserEntityJSON.hpp"
#include "webbind/PublicKeyCredentialParameters.hpp"
#include "webbind/PublicKeyCredentialDescriptorJSON.hpp"
#include "webbind/AuthenticatorSelectionCriteria.hpp"
#include "webbind/AuthenticationExtensionsClientInputsJSON.hpp"

using emlite::Val;
namespace webbind {

PublicKeyCredentialCreationOptionsJSON::PublicKeyCredentialCreationOptionsJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PublicKeyCredentialCreationOptionsJSON PublicKeyCredentialCreationOptionsJSON::take_ownership(Handle h) noexcept {
        return PublicKeyCredentialCreationOptionsJSON(h);
    }
PublicKeyCredentialCreationOptionsJSON::PublicKeyCredentialCreationOptionsJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
PublicKeyCredentialCreationOptionsJSON::PublicKeyCredentialCreationOptionsJSON() noexcept: emlite::Val(emlite::Val::object()) {}
PublicKeyCredentialCreationOptionsJSON PublicKeyCredentialCreationOptionsJSON::clone() const noexcept { return *this; }

PublicKeyCredentialRpEntity PublicKeyCredentialCreationOptionsJSON::rp() const {
    return emlite::Val::get("rp").as<PublicKeyCredentialRpEntity>();
}

void PublicKeyCredentialCreationOptionsJSON::rp(const PublicKeyCredentialRpEntity& value) {
    emlite::Val::set("rp", value);
}

PublicKeyCredentialUserEntityJSON PublicKeyCredentialCreationOptionsJSON::user() const {
    return emlite::Val::get("user").as<PublicKeyCredentialUserEntityJSON>();
}

void PublicKeyCredentialCreationOptionsJSON::user(const PublicKeyCredentialUserEntityJSON& value) {
    emlite::Val::set("user", value);
}

jsbind::Any PublicKeyCredentialCreationOptionsJSON::challenge() const {
    return emlite::Val::get("challenge").as<jsbind::Any>();
}

void PublicKeyCredentialCreationOptionsJSON::challenge(const jsbind::Any& value) {
    emlite::Val::set("challenge", value);
}

jsbind::TypedArray<PublicKeyCredentialParameters> PublicKeyCredentialCreationOptionsJSON::pubKeyCredParams() const {
    return emlite::Val::get("pubKeyCredParams").as<jsbind::TypedArray<PublicKeyCredentialParameters>>();
}

void PublicKeyCredentialCreationOptionsJSON::pubKeyCredParams(const jsbind::TypedArray<PublicKeyCredentialParameters>& value) {
    emlite::Val::set("pubKeyCredParams", value);
}

unsigned long PublicKeyCredentialCreationOptionsJSON::timeout() const {
    return emlite::Val::get("timeout").as<unsigned long>();
}

void PublicKeyCredentialCreationOptionsJSON::timeout(unsigned long value) {
    emlite::Val::set("timeout", value);
}

jsbind::TypedArray<PublicKeyCredentialDescriptorJSON> PublicKeyCredentialCreationOptionsJSON::excludeCredentials() const {
    return emlite::Val::get("excludeCredentials").as<jsbind::TypedArray<PublicKeyCredentialDescriptorJSON>>();
}

void PublicKeyCredentialCreationOptionsJSON::excludeCredentials(const jsbind::TypedArray<PublicKeyCredentialDescriptorJSON>& value) {
    emlite::Val::set("excludeCredentials", value);
}

AuthenticatorSelectionCriteria PublicKeyCredentialCreationOptionsJSON::authenticatorSelection() const {
    return emlite::Val::get("authenticatorSelection").as<AuthenticatorSelectionCriteria>();
}

void PublicKeyCredentialCreationOptionsJSON::authenticatorSelection(const AuthenticatorSelectionCriteria& value) {
    emlite::Val::set("authenticatorSelection", value);
}

jsbind::TypedArray<jsbind::String> PublicKeyCredentialCreationOptionsJSON::hints() const {
    return emlite::Val::get("hints").as<jsbind::TypedArray<jsbind::String>>();
}

void PublicKeyCredentialCreationOptionsJSON::hints(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("hints", value);
}

jsbind::String PublicKeyCredentialCreationOptionsJSON::attestation() const {
    return emlite::Val::get("attestation").as<jsbind::String>();
}

void PublicKeyCredentialCreationOptionsJSON::attestation(const jsbind::String& value) {
    emlite::Val::set("attestation", value);
}

jsbind::TypedArray<jsbind::String> PublicKeyCredentialCreationOptionsJSON::attestationFormats() const {
    return emlite::Val::get("attestationFormats").as<jsbind::TypedArray<jsbind::String>>();
}

void PublicKeyCredentialCreationOptionsJSON::attestationFormats(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("attestationFormats", value);
}

AuthenticationExtensionsClientInputsJSON PublicKeyCredentialCreationOptionsJSON::extensions() const {
    return emlite::Val::get("extensions").as<AuthenticationExtensionsClientInputsJSON>();
}

void PublicKeyCredentialCreationOptionsJSON::extensions(const AuthenticationExtensionsClientInputsJSON& value) {
    emlite::Val::set("extensions", value);
}


} // namespace webbind