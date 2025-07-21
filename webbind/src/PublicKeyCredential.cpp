#include <webbind/PublicKeyCredential.hpp>
#include <webbind/AuthenticatorResponse.hpp>


AuthenticationExtensionsClientOutputs::AuthenticationExtensionsClientOutputs(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsClientOutputs AuthenticationExtensionsClientOutputs::take_ownership(Handle h) noexcept {
        return AuthenticationExtensionsClientOutputs(h);
    }
AuthenticationExtensionsClientOutputs::AuthenticationExtensionsClientOutputs(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticationExtensionsClientOutputs::AuthenticationExtensionsClientOutputs() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticationExtensionsClientOutputs AuthenticationExtensionsClientOutputs::clone() const noexcept { return *this; }

jsbind::Any AuthenticationExtensionsClientOutputs::largeBlob() const {
    return emlite::Val::get("largeBlob").as<jsbind::Any>();
}

void AuthenticationExtensionsClientOutputs::largeBlob(const jsbind::Any& value) {
    emlite::Val::set("largeBlob", value);
}

PublicKeyCredentialCreationOptions::PublicKeyCredentialCreationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PublicKeyCredentialCreationOptions PublicKeyCredentialCreationOptions::take_ownership(Handle h) noexcept {
        return PublicKeyCredentialCreationOptions(h);
    }
PublicKeyCredentialCreationOptions::PublicKeyCredentialCreationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PublicKeyCredentialCreationOptions::PublicKeyCredentialCreationOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PublicKeyCredentialCreationOptions PublicKeyCredentialCreationOptions::clone() const noexcept { return *this; }

jsbind::Any PublicKeyCredentialCreationOptions::rp() const {
    return emlite::Val::get("rp").as<jsbind::Any>();
}

void PublicKeyCredentialCreationOptions::rp(const jsbind::Any& value) {
    emlite::Val::set("rp", value);
}

jsbind::Any PublicKeyCredentialCreationOptions::user() const {
    return emlite::Val::get("user").as<jsbind::Any>();
}

void PublicKeyCredentialCreationOptions::user(const jsbind::Any& value) {
    emlite::Val::set("user", value);
}

jsbind::Any PublicKeyCredentialCreationOptions::challenge() const {
    return emlite::Val::get("challenge").as<jsbind::Any>();
}

void PublicKeyCredentialCreationOptions::challenge(const jsbind::Any& value) {
    emlite::Val::set("challenge", value);
}

jsbind::Sequence<jsbind::Any> PublicKeyCredentialCreationOptions::pubKeyCredParams() const {
    return emlite::Val::get("pubKeyCredParams").as<jsbind::Sequence<jsbind::Any>>();
}

void PublicKeyCredentialCreationOptions::pubKeyCredParams(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("pubKeyCredParams", value);
}

unsigned long PublicKeyCredentialCreationOptions::timeout() const {
    return emlite::Val::get("timeout").as<unsigned long>();
}

void PublicKeyCredentialCreationOptions::timeout(unsigned long value) {
    emlite::Val::set("timeout", value);
}

jsbind::Sequence<jsbind::Any> PublicKeyCredentialCreationOptions::excludeCredentials() const {
    return emlite::Val::get("excludeCredentials").as<jsbind::Sequence<jsbind::Any>>();
}

void PublicKeyCredentialCreationOptions::excludeCredentials(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("excludeCredentials", value);
}

jsbind::Any PublicKeyCredentialCreationOptions::authenticatorSelection() const {
    return emlite::Val::get("authenticatorSelection").as<jsbind::Any>();
}

void PublicKeyCredentialCreationOptions::authenticatorSelection(const jsbind::Any& value) {
    emlite::Val::set("authenticatorSelection", value);
}

jsbind::Sequence<jsbind::DOMString> PublicKeyCredentialCreationOptions::hints() const {
    return emlite::Val::get("hints").as<jsbind::Sequence<jsbind::DOMString>>();
}

void PublicKeyCredentialCreationOptions::hints(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("hints", value);
}

jsbind::DOMString PublicKeyCredentialCreationOptions::attestation() const {
    return emlite::Val::get("attestation").as<jsbind::DOMString>();
}

void PublicKeyCredentialCreationOptions::attestation(const jsbind::DOMString& value) {
    emlite::Val::set("attestation", value);
}

jsbind::Sequence<jsbind::DOMString> PublicKeyCredentialCreationOptions::attestationFormats() const {
    return emlite::Val::get("attestationFormats").as<jsbind::Sequence<jsbind::DOMString>>();
}

void PublicKeyCredentialCreationOptions::attestationFormats(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("attestationFormats", value);
}

jsbind::Any PublicKeyCredentialCreationOptions::extensions() const {
    return emlite::Val::get("extensions").as<jsbind::Any>();
}

void PublicKeyCredentialCreationOptions::extensions(const jsbind::Any& value) {
    emlite::Val::set("extensions", value);
}

PublicKeyCredentialCreationOptionsJSON::PublicKeyCredentialCreationOptionsJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PublicKeyCredentialCreationOptionsJSON PublicKeyCredentialCreationOptionsJSON::take_ownership(Handle h) noexcept {
        return PublicKeyCredentialCreationOptionsJSON(h);
    }
PublicKeyCredentialCreationOptionsJSON::PublicKeyCredentialCreationOptionsJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
PublicKeyCredentialCreationOptionsJSON::PublicKeyCredentialCreationOptionsJSON() noexcept: emlite::Val(emlite::Val::object()) {}
PublicKeyCredentialCreationOptionsJSON PublicKeyCredentialCreationOptionsJSON::clone() const noexcept { return *this; }

jsbind::Any PublicKeyCredentialCreationOptionsJSON::rp() const {
    return emlite::Val::get("rp").as<jsbind::Any>();
}

void PublicKeyCredentialCreationOptionsJSON::rp(const jsbind::Any& value) {
    emlite::Val::set("rp", value);
}

jsbind::Any PublicKeyCredentialCreationOptionsJSON::user() const {
    return emlite::Val::get("user").as<jsbind::Any>();
}

void PublicKeyCredentialCreationOptionsJSON::user(const jsbind::Any& value) {
    emlite::Val::set("user", value);
}

jsbind::Any PublicKeyCredentialCreationOptionsJSON::challenge() const {
    return emlite::Val::get("challenge").as<jsbind::Any>();
}

void PublicKeyCredentialCreationOptionsJSON::challenge(const jsbind::Any& value) {
    emlite::Val::set("challenge", value);
}

jsbind::Sequence<jsbind::Any> PublicKeyCredentialCreationOptionsJSON::pubKeyCredParams() const {
    return emlite::Val::get("pubKeyCredParams").as<jsbind::Sequence<jsbind::Any>>();
}

void PublicKeyCredentialCreationOptionsJSON::pubKeyCredParams(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("pubKeyCredParams", value);
}

unsigned long PublicKeyCredentialCreationOptionsJSON::timeout() const {
    return emlite::Val::get("timeout").as<unsigned long>();
}

void PublicKeyCredentialCreationOptionsJSON::timeout(unsigned long value) {
    emlite::Val::set("timeout", value);
}

jsbind::Sequence<jsbind::Any> PublicKeyCredentialCreationOptionsJSON::excludeCredentials() const {
    return emlite::Val::get("excludeCredentials").as<jsbind::Sequence<jsbind::Any>>();
}

void PublicKeyCredentialCreationOptionsJSON::excludeCredentials(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("excludeCredentials", value);
}

jsbind::Any PublicKeyCredentialCreationOptionsJSON::authenticatorSelection() const {
    return emlite::Val::get("authenticatorSelection").as<jsbind::Any>();
}

void PublicKeyCredentialCreationOptionsJSON::authenticatorSelection(const jsbind::Any& value) {
    emlite::Val::set("authenticatorSelection", value);
}

jsbind::Sequence<jsbind::DOMString> PublicKeyCredentialCreationOptionsJSON::hints() const {
    return emlite::Val::get("hints").as<jsbind::Sequence<jsbind::DOMString>>();
}

void PublicKeyCredentialCreationOptionsJSON::hints(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("hints", value);
}

jsbind::DOMString PublicKeyCredentialCreationOptionsJSON::attestation() const {
    return emlite::Val::get("attestation").as<jsbind::DOMString>();
}

void PublicKeyCredentialCreationOptionsJSON::attestation(const jsbind::DOMString& value) {
    emlite::Val::set("attestation", value);
}

jsbind::Sequence<jsbind::DOMString> PublicKeyCredentialCreationOptionsJSON::attestationFormats() const {
    return emlite::Val::get("attestationFormats").as<jsbind::Sequence<jsbind::DOMString>>();
}

void PublicKeyCredentialCreationOptionsJSON::attestationFormats(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("attestationFormats", value);
}

jsbind::Any PublicKeyCredentialCreationOptionsJSON::extensions() const {
    return emlite::Val::get("extensions").as<jsbind::Any>();
}

void PublicKeyCredentialCreationOptionsJSON::extensions(const jsbind::Any& value) {
    emlite::Val::set("extensions", value);
}

PublicKeyCredentialRequestOptions::PublicKeyCredentialRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PublicKeyCredentialRequestOptions PublicKeyCredentialRequestOptions::take_ownership(Handle h) noexcept {
        return PublicKeyCredentialRequestOptions(h);
    }
PublicKeyCredentialRequestOptions::PublicKeyCredentialRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PublicKeyCredentialRequestOptions::PublicKeyCredentialRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PublicKeyCredentialRequestOptions PublicKeyCredentialRequestOptions::clone() const noexcept { return *this; }

jsbind::Any PublicKeyCredentialRequestOptions::challenge() const {
    return emlite::Val::get("challenge").as<jsbind::Any>();
}

void PublicKeyCredentialRequestOptions::challenge(const jsbind::Any& value) {
    emlite::Val::set("challenge", value);
}

unsigned long PublicKeyCredentialRequestOptions::timeout() const {
    return emlite::Val::get("timeout").as<unsigned long>();
}

void PublicKeyCredentialRequestOptions::timeout(unsigned long value) {
    emlite::Val::set("timeout", value);
}

jsbind::DOMString PublicKeyCredentialRequestOptions::rpId() const {
    return emlite::Val::get("rpId").as<jsbind::DOMString>();
}

void PublicKeyCredentialRequestOptions::rpId(const jsbind::DOMString& value) {
    emlite::Val::set("rpId", value);
}

jsbind::Sequence<jsbind::Any> PublicKeyCredentialRequestOptions::allowCredentials() const {
    return emlite::Val::get("allowCredentials").as<jsbind::Sequence<jsbind::Any>>();
}

void PublicKeyCredentialRequestOptions::allowCredentials(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("allowCredentials", value);
}

jsbind::DOMString PublicKeyCredentialRequestOptions::userVerification() const {
    return emlite::Val::get("userVerification").as<jsbind::DOMString>();
}

void PublicKeyCredentialRequestOptions::userVerification(const jsbind::DOMString& value) {
    emlite::Val::set("userVerification", value);
}

jsbind::Sequence<jsbind::DOMString> PublicKeyCredentialRequestOptions::hints() const {
    return emlite::Val::get("hints").as<jsbind::Sequence<jsbind::DOMString>>();
}

void PublicKeyCredentialRequestOptions::hints(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("hints", value);
}

jsbind::Any PublicKeyCredentialRequestOptions::extensions() const {
    return emlite::Val::get("extensions").as<jsbind::Any>();
}

void PublicKeyCredentialRequestOptions::extensions(const jsbind::Any& value) {
    emlite::Val::set("extensions", value);
}

PublicKeyCredentialRequestOptionsJSON::PublicKeyCredentialRequestOptionsJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PublicKeyCredentialRequestOptionsJSON PublicKeyCredentialRequestOptionsJSON::take_ownership(Handle h) noexcept {
        return PublicKeyCredentialRequestOptionsJSON(h);
    }
PublicKeyCredentialRequestOptionsJSON::PublicKeyCredentialRequestOptionsJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
PublicKeyCredentialRequestOptionsJSON::PublicKeyCredentialRequestOptionsJSON() noexcept: emlite::Val(emlite::Val::object()) {}
PublicKeyCredentialRequestOptionsJSON PublicKeyCredentialRequestOptionsJSON::clone() const noexcept { return *this; }

jsbind::Any PublicKeyCredentialRequestOptionsJSON::challenge() const {
    return emlite::Val::get("challenge").as<jsbind::Any>();
}

void PublicKeyCredentialRequestOptionsJSON::challenge(const jsbind::Any& value) {
    emlite::Val::set("challenge", value);
}

unsigned long PublicKeyCredentialRequestOptionsJSON::timeout() const {
    return emlite::Val::get("timeout").as<unsigned long>();
}

void PublicKeyCredentialRequestOptionsJSON::timeout(unsigned long value) {
    emlite::Val::set("timeout", value);
}

jsbind::DOMString PublicKeyCredentialRequestOptionsJSON::rpId() const {
    return emlite::Val::get("rpId").as<jsbind::DOMString>();
}

void PublicKeyCredentialRequestOptionsJSON::rpId(const jsbind::DOMString& value) {
    emlite::Val::set("rpId", value);
}

jsbind::Sequence<jsbind::Any> PublicKeyCredentialRequestOptionsJSON::allowCredentials() const {
    return emlite::Val::get("allowCredentials").as<jsbind::Sequence<jsbind::Any>>();
}

void PublicKeyCredentialRequestOptionsJSON::allowCredentials(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("allowCredentials", value);
}

jsbind::DOMString PublicKeyCredentialRequestOptionsJSON::userVerification() const {
    return emlite::Val::get("userVerification").as<jsbind::DOMString>();
}

void PublicKeyCredentialRequestOptionsJSON::userVerification(const jsbind::DOMString& value) {
    emlite::Val::set("userVerification", value);
}

jsbind::Sequence<jsbind::DOMString> PublicKeyCredentialRequestOptionsJSON::hints() const {
    return emlite::Val::get("hints").as<jsbind::Sequence<jsbind::DOMString>>();
}

void PublicKeyCredentialRequestOptionsJSON::hints(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("hints", value);
}

jsbind::Any PublicKeyCredentialRequestOptionsJSON::extensions() const {
    return emlite::Val::get("extensions").as<jsbind::Any>();
}

void PublicKeyCredentialRequestOptionsJSON::extensions(const jsbind::Any& value) {
    emlite::Val::set("extensions", value);
}

UnknownCredentialOptions::UnknownCredentialOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
UnknownCredentialOptions UnknownCredentialOptions::take_ownership(Handle h) noexcept {
        return UnknownCredentialOptions(h);
    }
UnknownCredentialOptions::UnknownCredentialOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
UnknownCredentialOptions::UnknownCredentialOptions() noexcept: emlite::Val(emlite::Val::object()) {}
UnknownCredentialOptions UnknownCredentialOptions::clone() const noexcept { return *this; }

jsbind::DOMString UnknownCredentialOptions::rpId() const {
    return emlite::Val::get("rpId").as<jsbind::DOMString>();
}

void UnknownCredentialOptions::rpId(const jsbind::DOMString& value) {
    emlite::Val::set("rpId", value);
}

jsbind::Any UnknownCredentialOptions::credentialId() const {
    return emlite::Val::get("credentialId").as<jsbind::Any>();
}

void UnknownCredentialOptions::credentialId(const jsbind::Any& value) {
    emlite::Val::set("credentialId", value);
}

AllAcceptedCredentialsOptions::AllAcceptedCredentialsOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AllAcceptedCredentialsOptions AllAcceptedCredentialsOptions::take_ownership(Handle h) noexcept {
        return AllAcceptedCredentialsOptions(h);
    }
AllAcceptedCredentialsOptions::AllAcceptedCredentialsOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
AllAcceptedCredentialsOptions::AllAcceptedCredentialsOptions() noexcept: emlite::Val(emlite::Val::object()) {}
AllAcceptedCredentialsOptions AllAcceptedCredentialsOptions::clone() const noexcept { return *this; }

jsbind::DOMString AllAcceptedCredentialsOptions::rpId() const {
    return emlite::Val::get("rpId").as<jsbind::DOMString>();
}

void AllAcceptedCredentialsOptions::rpId(const jsbind::DOMString& value) {
    emlite::Val::set("rpId", value);
}

jsbind::Any AllAcceptedCredentialsOptions::userId() const {
    return emlite::Val::get("userId").as<jsbind::Any>();
}

void AllAcceptedCredentialsOptions::userId(const jsbind::Any& value) {
    emlite::Val::set("userId", value);
}

jsbind::Sequence<jsbind::Any> AllAcceptedCredentialsOptions::allAcceptedCredentialIds() const {
    return emlite::Val::get("allAcceptedCredentialIds").as<jsbind::Sequence<jsbind::Any>>();
}

void AllAcceptedCredentialsOptions::allAcceptedCredentialIds(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("allAcceptedCredentialIds", value);
}

CurrentUserDetailsOptions::CurrentUserDetailsOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CurrentUserDetailsOptions CurrentUserDetailsOptions::take_ownership(Handle h) noexcept {
        return CurrentUserDetailsOptions(h);
    }
CurrentUserDetailsOptions::CurrentUserDetailsOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
CurrentUserDetailsOptions::CurrentUserDetailsOptions() noexcept: emlite::Val(emlite::Val::object()) {}
CurrentUserDetailsOptions CurrentUserDetailsOptions::clone() const noexcept { return *this; }

jsbind::DOMString CurrentUserDetailsOptions::rpId() const {
    return emlite::Val::get("rpId").as<jsbind::DOMString>();
}

void CurrentUserDetailsOptions::rpId(const jsbind::DOMString& value) {
    emlite::Val::set("rpId", value);
}

jsbind::Any CurrentUserDetailsOptions::userId() const {
    return emlite::Val::get("userId").as<jsbind::Any>();
}

void CurrentUserDetailsOptions::userId(const jsbind::Any& value) {
    emlite::Val::set("userId", value);
}

jsbind::DOMString CurrentUserDetailsOptions::name() const {
    return emlite::Val::get("name").as<jsbind::DOMString>();
}

void CurrentUserDetailsOptions::name(const jsbind::DOMString& value) {
    emlite::Val::set("name", value);
}

jsbind::DOMString CurrentUserDetailsOptions::displayName() const {
    return emlite::Val::get("displayName").as<jsbind::DOMString>();
}

void CurrentUserDetailsOptions::displayName(const jsbind::DOMString& value) {
    emlite::Val::set("displayName", value);
}

PublicKeyCredential PublicKeyCredential::take_ownership(Handle h) noexcept {
        return PublicKeyCredential(h);
    }
PublicKeyCredential PublicKeyCredential::clone() const noexcept { return *this; }
PublicKeyCredential::PublicKeyCredential(Handle h) noexcept : Credential(emlite::Val::take_ownership(h)) {}
PublicKeyCredential::PublicKeyCredential(const emlite::Val &val) noexcept: Credential(val) {}


jsbind::ArrayBuffer PublicKeyCredential::rawId() const {
    return Credential::get("rawId").as<jsbind::ArrayBuffer>();
}

AuthenticatorResponse PublicKeyCredential::response() const {
    return Credential::get("response").as<AuthenticatorResponse>();
}

jsbind::DOMString PublicKeyCredential::authenticatorAttachment() const {
    return Credential::get("authenticatorAttachment").as<jsbind::DOMString>();
}

AuthenticationExtensionsClientOutputs PublicKeyCredential::getClientExtensionResults() {
    return Credential::call("getClientExtensionResults").as<AuthenticationExtensionsClientOutputs>();
}

jsbind::Promise<bool> PublicKeyCredential::isConditionalMediationAvailable() {
    return emlite::Val::global("publickeycredential").call("isConditionalMediationAvailable").as<jsbind::Promise<bool>>();
}

jsbind::Any PublicKeyCredential::toJSON() {
    return Credential::call("toJSON").as<jsbind::Any>();
}

jsbind::Promise<bool> PublicKeyCredential::isUserVerifyingPlatformAuthenticatorAvailable() {
    return emlite::Val::global("publickeycredential").call("isUserVerifyingPlatformAuthenticatorAvailable").as<jsbind::Promise<bool>>();
}

jsbind::Promise<jsbind::Any> PublicKeyCredential::getClientCapabilities() {
    return emlite::Val::global("publickeycredential").call("getClientCapabilities").as<jsbind::Promise<jsbind::Any>>();
}

PublicKeyCredentialCreationOptions PublicKeyCredential::parseCreationOptionsFromJSON(const PublicKeyCredentialCreationOptionsJSON& options) {
    return emlite::Val::global("publickeycredential").call("parseCreationOptionsFromJSON", options).as<PublicKeyCredentialCreationOptions>();
}

PublicKeyCredentialRequestOptions PublicKeyCredential::parseRequestOptionsFromJSON(const PublicKeyCredentialRequestOptionsJSON& options) {
    return emlite::Val::global("publickeycredential").call("parseRequestOptionsFromJSON", options).as<PublicKeyCredentialRequestOptions>();
}

jsbind::Promise<jsbind::Undefined> PublicKeyCredential::signalUnknownCredential(const UnknownCredentialOptions& options) {
    return emlite::Val::global("publickeycredential").call("signalUnknownCredential", options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> PublicKeyCredential::signalAllAcceptedCredentials(const AllAcceptedCredentialsOptions& options) {
    return emlite::Val::global("publickeycredential").call("signalAllAcceptedCredentials", options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> PublicKeyCredential::signalCurrentUserDetails(const CurrentUserDetailsOptions& options) {
    return emlite::Val::global("publickeycredential").call("signalCurrentUserDetails", options).as<jsbind::Promise<jsbind::Undefined>>();
}

