#include <webbind/AuthenticationExtensionsPRFInputsJSON.hpp>
#include <webbind/AuthenticationExtensionsPRFValuesJSON.hpp>

namespace webbind {

AuthenticationExtensionsPRFInputsJSON::AuthenticationExtensionsPRFInputsJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsPRFInputsJSON AuthenticationExtensionsPRFInputsJSON::take_ownership(Handle h) noexcept {
    return AuthenticationExtensionsPRFInputsJSON(h);
}

AuthenticationExtensionsPRFInputsJSON::AuthenticationExtensionsPRFInputsJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}

AuthenticationExtensionsPRFInputsJSON::AuthenticationExtensionsPRFInputsJSON() noexcept: emlite::Val(emlite::Val::object()) {}

AuthenticationExtensionsPRFInputsJSON AuthenticationExtensionsPRFInputsJSON::clone() const noexcept { return *this; }

AuthenticationExtensionsPRFValuesJSON AuthenticationExtensionsPRFInputsJSON::eval() const {
    return emlite::Val::get("eval").as<AuthenticationExtensionsPRFValuesJSON>();
}

void AuthenticationExtensionsPRFInputsJSON::eval(const AuthenticationExtensionsPRFValuesJSON& value) {
    emlite::Val::set("eval", value);
}

jsbind::Record<jsbind::String, AuthenticationExtensionsPRFValuesJSON> AuthenticationExtensionsPRFInputsJSON::evalByCredential() const {
    return emlite::Val::get("evalByCredential").as<jsbind::Record<jsbind::String, AuthenticationExtensionsPRFValuesJSON>>();
}

void AuthenticationExtensionsPRFInputsJSON::evalByCredential(const jsbind::Record<jsbind::String, AuthenticationExtensionsPRFValuesJSON>& value) {
    emlite::Val::set("evalByCredential", value);
}


} // namespace webbind