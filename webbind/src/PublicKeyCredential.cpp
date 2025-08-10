#include "webbind/PublicKeyCredential.hpp"
#include "webbind/AuthenticatorResponse.hpp"
#include "webbind/AuthenticationExtensionsClientOutputs.hpp"
#include "webbind/PublicKeyCredentialCreationOptions.hpp"
#include "webbind/PublicKeyCredentialCreationOptionsJSON.hpp"
#include "webbind/PublicKeyCredentialRequestOptions.hpp"
#include "webbind/PublicKeyCredentialRequestOptionsJSON.hpp"
#include "webbind/UnknownCredentialOptions.hpp"
#include "webbind/AllAcceptedCredentialsOptions.hpp"
#include "webbind/CurrentUserDetailsOptions.hpp"

namespace webbind {

PublicKeyCredential PublicKeyCredential::take_ownership(Handle h) noexcept {
        return PublicKeyCredential(h);
    }
PublicKeyCredential PublicKeyCredential::clone() const noexcept { return *this; }
emlite::Val PublicKeyCredential::instance() noexcept { return emlite::Val::global("PublicKeyCredential"); }
PublicKeyCredential::PublicKeyCredential(Handle h) noexcept : Credential(emlite::Val::take_ownership(h)) {}
PublicKeyCredential::PublicKeyCredential(const emlite::Val &val) noexcept: Credential(val) {}

jsbind::ArrayBuffer PublicKeyCredential::rawId() const {
    return Credential::get("rawId").as<jsbind::ArrayBuffer>();
}

AuthenticatorResponse PublicKeyCredential::response() const {
    return Credential::get("response").as<AuthenticatorResponse>();
}

jsbind::String PublicKeyCredential::authenticatorAttachment() const {
    return Credential::get("authenticatorAttachment").as<jsbind::String>();
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


} // namespace webbind