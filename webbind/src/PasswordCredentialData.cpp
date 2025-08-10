#include "webbind/PasswordCredentialData.hpp"

using emlite::Val;
namespace webbind {

PasswordCredentialData::PasswordCredentialData(Handle h) noexcept : CredentialData(emlite::Val::take_ownership(h)) {}
PasswordCredentialData PasswordCredentialData::take_ownership(Handle h) noexcept {
        return PasswordCredentialData(h);
    }
PasswordCredentialData::PasswordCredentialData(const emlite::Val &val) noexcept: CredentialData(val) {}
PasswordCredentialData::PasswordCredentialData() noexcept: CredentialData(emlite::Val::object()) {}
PasswordCredentialData PasswordCredentialData::clone() const noexcept { return *this; }

jsbind::String PasswordCredentialData::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void PasswordCredentialData::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String PasswordCredentialData::iconURL() const {
    return emlite::Val::get("iconURL").as<jsbind::String>();
}

void PasswordCredentialData::iconURL(const jsbind::String& value) {
    emlite::Val::set("iconURL", value);
}

jsbind::String PasswordCredentialData::origin() const {
    return emlite::Val::get("origin").as<jsbind::String>();
}

void PasswordCredentialData::origin(const jsbind::String& value) {
    emlite::Val::set("origin", value);
}

jsbind::String PasswordCredentialData::password() const {
    return emlite::Val::get("password").as<jsbind::String>();
}

void PasswordCredentialData::password(const jsbind::String& value) {
    emlite::Val::set("password", value);
}


} // namespace webbind