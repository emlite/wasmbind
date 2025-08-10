#include "webbind/AuthenticationExtensionsPRFValues.hpp"

using emlite::Val;
namespace webbind {

AuthenticationExtensionsPRFValues::AuthenticationExtensionsPRFValues(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsPRFValues AuthenticationExtensionsPRFValues::take_ownership(Handle h) noexcept {
        return AuthenticationExtensionsPRFValues(h);
    }
AuthenticationExtensionsPRFValues::AuthenticationExtensionsPRFValues(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticationExtensionsPRFValues::AuthenticationExtensionsPRFValues() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticationExtensionsPRFValues AuthenticationExtensionsPRFValues::clone() const noexcept { return *this; }

jsbind::Any AuthenticationExtensionsPRFValues::first() const {
    return emlite::Val::get("first").as<jsbind::Any>();
}

void AuthenticationExtensionsPRFValues::first(const jsbind::Any& value) {
    emlite::Val::set("first", value);
}

jsbind::Any AuthenticationExtensionsPRFValues::second() const {
    return emlite::Val::get("second").as<jsbind::Any>();
}

void AuthenticationExtensionsPRFValues::second(const jsbind::Any& value) {
    emlite::Val::set("second", value);
}


} // namespace webbind