#include <webbind/AuthenticationExtensionsPRFOutputs.hpp>
#include <webbind/AuthenticationExtensionsPRFValues.hpp>

using emlite::Val;
namespace webbind {

AuthenticationExtensionsPRFOutputs::AuthenticationExtensionsPRFOutputs(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsPRFOutputs AuthenticationExtensionsPRFOutputs::take_ownership(Handle h) noexcept {
        return AuthenticationExtensionsPRFOutputs(h);
    }
AuthenticationExtensionsPRFOutputs::AuthenticationExtensionsPRFOutputs(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticationExtensionsPRFOutputs::AuthenticationExtensionsPRFOutputs() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticationExtensionsPRFOutputs AuthenticationExtensionsPRFOutputs::clone() const noexcept { return *this; }

bool AuthenticationExtensionsPRFOutputs::enabled() const {
    return emlite::Val::get("enabled").as<bool>();
}

void AuthenticationExtensionsPRFOutputs::enabled(bool value) {
    emlite::Val::set("enabled", value);
}

AuthenticationExtensionsPRFValues AuthenticationExtensionsPRFOutputs::results() const {
    return emlite::Val::get("results").as<AuthenticationExtensionsPRFValues>();
}

void AuthenticationExtensionsPRFOutputs::results(const AuthenticationExtensionsPRFValues& value) {
    emlite::Val::set("results", value);
}


} // namespace webbind