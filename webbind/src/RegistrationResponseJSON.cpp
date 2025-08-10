#include <webbind/RegistrationResponseJSON.hpp>
#include <webbind/AuthenticatorAttestationResponseJSON.hpp>
#include <webbind/AuthenticationExtensionsClientOutputsJSON.hpp>

using emlite::Val;
namespace webbind {

RegistrationResponseJSON::RegistrationResponseJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RegistrationResponseJSON RegistrationResponseJSON::take_ownership(Handle h) noexcept {
        return RegistrationResponseJSON(h);
    }
RegistrationResponseJSON::RegistrationResponseJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
RegistrationResponseJSON::RegistrationResponseJSON() noexcept: emlite::Val(emlite::Val::object()) {}
RegistrationResponseJSON RegistrationResponseJSON::clone() const noexcept { return *this; }

jsbind::String RegistrationResponseJSON::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void RegistrationResponseJSON::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::Any RegistrationResponseJSON::rawId() const {
    return emlite::Val::get("rawId").as<jsbind::Any>();
}

void RegistrationResponseJSON::rawId(const jsbind::Any& value) {
    emlite::Val::set("rawId", value);
}

AuthenticatorAttestationResponseJSON RegistrationResponseJSON::response() const {
    return emlite::Val::get("response").as<AuthenticatorAttestationResponseJSON>();
}

void RegistrationResponseJSON::response(const AuthenticatorAttestationResponseJSON& value) {
    emlite::Val::set("response", value);
}

jsbind::String RegistrationResponseJSON::authenticatorAttachment() const {
    return emlite::Val::get("authenticatorAttachment").as<jsbind::String>();
}

void RegistrationResponseJSON::authenticatorAttachment(const jsbind::String& value) {
    emlite::Val::set("authenticatorAttachment", value);
}

AuthenticationExtensionsClientOutputsJSON RegistrationResponseJSON::clientExtensionResults() const {
    return emlite::Val::get("clientExtensionResults").as<AuthenticationExtensionsClientOutputsJSON>();
}

void RegistrationResponseJSON::clientExtensionResults(const AuthenticationExtensionsClientOutputsJSON& value) {
    emlite::Val::set("clientExtensionResults", value);
}

jsbind::String RegistrationResponseJSON::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void RegistrationResponseJSON::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}


} // namespace webbind