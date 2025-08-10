#include <webbind/AuthenticatorAssertionResponseJSON.hpp>

using emlite::Val;
namespace webbind {

AuthenticatorAssertionResponseJSON::AuthenticatorAssertionResponseJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticatorAssertionResponseJSON AuthenticatorAssertionResponseJSON::take_ownership(Handle h) noexcept {
        return AuthenticatorAssertionResponseJSON(h);
    }
AuthenticatorAssertionResponseJSON::AuthenticatorAssertionResponseJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticatorAssertionResponseJSON::AuthenticatorAssertionResponseJSON() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticatorAssertionResponseJSON AuthenticatorAssertionResponseJSON::clone() const noexcept { return *this; }

jsbind::Any AuthenticatorAssertionResponseJSON::clientDataJSON() const {
    return emlite::Val::get("clientDataJSON").as<jsbind::Any>();
}

void AuthenticatorAssertionResponseJSON::clientDataJSON(const jsbind::Any& value) {
    emlite::Val::set("clientDataJSON", value);
}

jsbind::Any AuthenticatorAssertionResponseJSON::authenticatorData() const {
    return emlite::Val::get("authenticatorData").as<jsbind::Any>();
}

void AuthenticatorAssertionResponseJSON::authenticatorData(const jsbind::Any& value) {
    emlite::Val::set("authenticatorData", value);
}

jsbind::Any AuthenticatorAssertionResponseJSON::signature() const {
    return emlite::Val::get("signature").as<jsbind::Any>();
}

void AuthenticatorAssertionResponseJSON::signature(const jsbind::Any& value) {
    emlite::Val::set("signature", value);
}

jsbind::Any AuthenticatorAssertionResponseJSON::userHandle() const {
    return emlite::Val::get("userHandle").as<jsbind::Any>();
}

void AuthenticatorAssertionResponseJSON::userHandle(const jsbind::Any& value) {
    emlite::Val::set("userHandle", value);
}


} // namespace webbind