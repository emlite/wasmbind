#include <webbind/AuthenticationExtensionsPRFOutputsJSON.hpp>
#include <webbind/AuthenticationExtensionsPRFValuesJSON.hpp>

using emlite::Val;
namespace webbind {

AuthenticationExtensionsPRFOutputsJSON::AuthenticationExtensionsPRFOutputsJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsPRFOutputsJSON AuthenticationExtensionsPRFOutputsJSON::take_ownership(Handle h) noexcept {
        return AuthenticationExtensionsPRFOutputsJSON(h);
    }
AuthenticationExtensionsPRFOutputsJSON::AuthenticationExtensionsPRFOutputsJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticationExtensionsPRFOutputsJSON::AuthenticationExtensionsPRFOutputsJSON() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticationExtensionsPRFOutputsJSON AuthenticationExtensionsPRFOutputsJSON::clone() const noexcept { return *this; }

bool AuthenticationExtensionsPRFOutputsJSON::enabled() const {
    return emlite::Val::get("enabled").as<bool>();
}

void AuthenticationExtensionsPRFOutputsJSON::enabled(bool value) {
    emlite::Val::set("enabled", value);
}

AuthenticationExtensionsPRFValuesJSON AuthenticationExtensionsPRFOutputsJSON::results() const {
    return emlite::Val::get("results").as<AuthenticationExtensionsPRFValuesJSON>();
}

void AuthenticationExtensionsPRFOutputsJSON::results(const AuthenticationExtensionsPRFValuesJSON& value) {
    emlite::Val::set("results", value);
}


} // namespace webbind