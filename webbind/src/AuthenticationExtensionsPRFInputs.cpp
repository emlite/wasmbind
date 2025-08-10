#include "webbind/AuthenticationExtensionsPRFInputs.hpp"
#include "webbind/AuthenticationExtensionsPRFValues.hpp"

using emlite::Val;
namespace webbind {

AuthenticationExtensionsPRFInputs::AuthenticationExtensionsPRFInputs(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsPRFInputs AuthenticationExtensionsPRFInputs::take_ownership(Handle h) noexcept {
        return AuthenticationExtensionsPRFInputs(h);
    }
AuthenticationExtensionsPRFInputs::AuthenticationExtensionsPRFInputs(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticationExtensionsPRFInputs::AuthenticationExtensionsPRFInputs() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticationExtensionsPRFInputs AuthenticationExtensionsPRFInputs::clone() const noexcept { return *this; }

AuthenticationExtensionsPRFValues AuthenticationExtensionsPRFInputs::eval() const {
    return emlite::Val::get("eval").as<AuthenticationExtensionsPRFValues>();
}

void AuthenticationExtensionsPRFInputs::eval(const AuthenticationExtensionsPRFValues& value) {
    emlite::Val::set("eval", value);
}

jsbind::Record<jsbind::String, AuthenticationExtensionsPRFValues> AuthenticationExtensionsPRFInputs::evalByCredential() const {
    return emlite::Val::get("evalByCredential").as<jsbind::Record<jsbind::String, AuthenticationExtensionsPRFValues>>();
}

void AuthenticationExtensionsPRFInputs::evalByCredential(const jsbind::Record<jsbind::String, AuthenticationExtensionsPRFValues>& value) {
    emlite::Val::set("evalByCredential", value);
}


} // namespace webbind