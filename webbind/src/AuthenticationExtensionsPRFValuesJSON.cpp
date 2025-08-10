#include "webbind/AuthenticationExtensionsPRFValuesJSON.hpp"

using emlite::Val;
namespace webbind {

AuthenticationExtensionsPRFValuesJSON::AuthenticationExtensionsPRFValuesJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsPRFValuesJSON AuthenticationExtensionsPRFValuesJSON::take_ownership(Handle h) noexcept {
        return AuthenticationExtensionsPRFValuesJSON(h);
    }
AuthenticationExtensionsPRFValuesJSON::AuthenticationExtensionsPRFValuesJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticationExtensionsPRFValuesJSON::AuthenticationExtensionsPRFValuesJSON() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticationExtensionsPRFValuesJSON AuthenticationExtensionsPRFValuesJSON::clone() const noexcept { return *this; }

jsbind::Any AuthenticationExtensionsPRFValuesJSON::first() const {
    return emlite::Val::get("first").as<jsbind::Any>();
}

void AuthenticationExtensionsPRFValuesJSON::first(const jsbind::Any& value) {
    emlite::Val::set("first", value);
}

jsbind::Any AuthenticationExtensionsPRFValuesJSON::second() const {
    return emlite::Val::get("second").as<jsbind::Any>();
}

void AuthenticationExtensionsPRFValuesJSON::second(const jsbind::Any& value) {
    emlite::Val::set("second", value);
}


} // namespace webbind