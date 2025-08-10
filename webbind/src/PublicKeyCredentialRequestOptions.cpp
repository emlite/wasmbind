#include "webbind/PublicKeyCredentialRequestOptions.hpp"
#include "webbind/PublicKeyCredentialDescriptor.hpp"
#include "webbind/AuthenticationExtensionsClientInputs.hpp"

using emlite::Val;
namespace webbind {

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

jsbind::String PublicKeyCredentialRequestOptions::rpId() const {
    return emlite::Val::get("rpId").as<jsbind::String>();
}

void PublicKeyCredentialRequestOptions::rpId(const jsbind::String& value) {
    emlite::Val::set("rpId", value);
}

jsbind::TypedArray<PublicKeyCredentialDescriptor> PublicKeyCredentialRequestOptions::allowCredentials() const {
    return emlite::Val::get("allowCredentials").as<jsbind::TypedArray<PublicKeyCredentialDescriptor>>();
}

void PublicKeyCredentialRequestOptions::allowCredentials(const jsbind::TypedArray<PublicKeyCredentialDescriptor>& value) {
    emlite::Val::set("allowCredentials", value);
}

jsbind::String PublicKeyCredentialRequestOptions::userVerification() const {
    return emlite::Val::get("userVerification").as<jsbind::String>();
}

void PublicKeyCredentialRequestOptions::userVerification(const jsbind::String& value) {
    emlite::Val::set("userVerification", value);
}

jsbind::TypedArray<jsbind::String> PublicKeyCredentialRequestOptions::hints() const {
    return emlite::Val::get("hints").as<jsbind::TypedArray<jsbind::String>>();
}

void PublicKeyCredentialRequestOptions::hints(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("hints", value);
}

AuthenticationExtensionsClientInputs PublicKeyCredentialRequestOptions::extensions() const {
    return emlite::Val::get("extensions").as<AuthenticationExtensionsClientInputs>();
}

void PublicKeyCredentialRequestOptions::extensions(const AuthenticationExtensionsClientInputs& value) {
    emlite::Val::set("extensions", value);
}


} // namespace webbind