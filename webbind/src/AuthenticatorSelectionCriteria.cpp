#include "webbind/AuthenticatorSelectionCriteria.hpp"

using emlite::Val;
namespace webbind {

AuthenticatorSelectionCriteria::AuthenticatorSelectionCriteria(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticatorSelectionCriteria AuthenticatorSelectionCriteria::take_ownership(Handle h) noexcept {
        return AuthenticatorSelectionCriteria(h);
    }
AuthenticatorSelectionCriteria::AuthenticatorSelectionCriteria(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticatorSelectionCriteria::AuthenticatorSelectionCriteria() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticatorSelectionCriteria AuthenticatorSelectionCriteria::clone() const noexcept { return *this; }

jsbind::String AuthenticatorSelectionCriteria::authenticatorAttachment() const {
    return emlite::Val::get("authenticatorAttachment").as<jsbind::String>();
}

void AuthenticatorSelectionCriteria::authenticatorAttachment(const jsbind::String& value) {
    emlite::Val::set("authenticatorAttachment", value);
}

jsbind::String AuthenticatorSelectionCriteria::residentKey() const {
    return emlite::Val::get("residentKey").as<jsbind::String>();
}

void AuthenticatorSelectionCriteria::residentKey(const jsbind::String& value) {
    emlite::Val::set("residentKey", value);
}

bool AuthenticatorSelectionCriteria::requireResidentKey() const {
    return emlite::Val::get("requireResidentKey").as<bool>();
}

void AuthenticatorSelectionCriteria::requireResidentKey(bool value) {
    emlite::Val::set("requireResidentKey", value);
}

jsbind::String AuthenticatorSelectionCriteria::userVerification() const {
    return emlite::Val::get("userVerification").as<jsbind::String>();
}

void AuthenticatorSelectionCriteria::userVerification(const jsbind::String& value) {
    emlite::Val::set("userVerification", value);
}


} // namespace webbind