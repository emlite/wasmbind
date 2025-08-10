#include <webbind/AuthenticationResponseJSON.hpp>
#include <webbind/AuthenticatorAssertionResponseJSON.hpp>
#include <webbind/AuthenticationExtensionsClientOutputsJSON.hpp>

using emlite::Val;
namespace webbind {

AuthenticationResponseJSON::AuthenticationResponseJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationResponseJSON AuthenticationResponseJSON::take_ownership(Handle h) noexcept {
        return AuthenticationResponseJSON(h);
    }
AuthenticationResponseJSON::AuthenticationResponseJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticationResponseJSON::AuthenticationResponseJSON() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticationResponseJSON AuthenticationResponseJSON::clone() const noexcept { return *this; }

jsbind::String AuthenticationResponseJSON::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void AuthenticationResponseJSON::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::Any AuthenticationResponseJSON::rawId() const {
    return emlite::Val::get("rawId").as<jsbind::Any>();
}

void AuthenticationResponseJSON::rawId(const jsbind::Any& value) {
    emlite::Val::set("rawId", value);
}

AuthenticatorAssertionResponseJSON AuthenticationResponseJSON::response() const {
    return emlite::Val::get("response").as<AuthenticatorAssertionResponseJSON>();
}

void AuthenticationResponseJSON::response(const AuthenticatorAssertionResponseJSON& value) {
    emlite::Val::set("response", value);
}

jsbind::String AuthenticationResponseJSON::authenticatorAttachment() const {
    return emlite::Val::get("authenticatorAttachment").as<jsbind::String>();
}

void AuthenticationResponseJSON::authenticatorAttachment(const jsbind::String& value) {
    emlite::Val::set("authenticatorAttachment", value);
}

AuthenticationExtensionsClientOutputsJSON AuthenticationResponseJSON::clientExtensionResults() const {
    return emlite::Val::get("clientExtensionResults").as<AuthenticationExtensionsClientOutputsJSON>();
}

void AuthenticationResponseJSON::clientExtensionResults(const AuthenticationExtensionsClientOutputsJSON& value) {
    emlite::Val::set("clientExtensionResults", value);
}

jsbind::String AuthenticationResponseJSON::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void AuthenticationResponseJSON::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}


} // namespace webbind