#include <webbind/PublicKeyCredentialRequestOptionsJSON.hpp>
#include <webbind/PublicKeyCredentialDescriptorJSON.hpp>
#include <webbind/AuthenticationExtensionsClientInputsJSON.hpp>

using emlite::Val;
namespace webbind {

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

jsbind::String PublicKeyCredentialRequestOptionsJSON::rpId() const {
    return emlite::Val::get("rpId").as<jsbind::String>();
}

void PublicKeyCredentialRequestOptionsJSON::rpId(const jsbind::String& value) {
    emlite::Val::set("rpId", value);
}

jsbind::TypedArray<PublicKeyCredentialDescriptorJSON> PublicKeyCredentialRequestOptionsJSON::allowCredentials() const {
    return emlite::Val::get("allowCredentials").as<jsbind::TypedArray<PublicKeyCredentialDescriptorJSON>>();
}

void PublicKeyCredentialRequestOptionsJSON::allowCredentials(const jsbind::TypedArray<PublicKeyCredentialDescriptorJSON>& value) {
    emlite::Val::set("allowCredentials", value);
}

jsbind::String PublicKeyCredentialRequestOptionsJSON::userVerification() const {
    return emlite::Val::get("userVerification").as<jsbind::String>();
}

void PublicKeyCredentialRequestOptionsJSON::userVerification(const jsbind::String& value) {
    emlite::Val::set("userVerification", value);
}

jsbind::TypedArray<jsbind::String> PublicKeyCredentialRequestOptionsJSON::hints() const {
    return emlite::Val::get("hints").as<jsbind::TypedArray<jsbind::String>>();
}

void PublicKeyCredentialRequestOptionsJSON::hints(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("hints", value);
}

AuthenticationExtensionsClientInputsJSON PublicKeyCredentialRequestOptionsJSON::extensions() const {
    return emlite::Val::get("extensions").as<AuthenticationExtensionsClientInputsJSON>();
}

void PublicKeyCredentialRequestOptionsJSON::extensions(const AuthenticationExtensionsClientInputsJSON& value) {
    emlite::Val::set("extensions", value);
}


} // namespace webbind