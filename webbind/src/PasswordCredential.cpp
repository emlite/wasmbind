#include <webbind/PasswordCredential.hpp>


PasswordCredential PasswordCredential::take_ownership(Handle h) noexcept {
        return PasswordCredential(h);
    }
PasswordCredential PasswordCredential::clone() const noexcept { return *this; }
PasswordCredential::PasswordCredential(Handle h) noexcept : Credential(emlite::Val::take_ownership(h)) {}
PasswordCredential::PasswordCredential(const emlite::Val &val) noexcept: Credential(val) {}


PasswordCredential::PasswordCredential(const jsbind::Any& data) : Credential(emlite::Val::global("PasswordCredential").new_(data)) {}

jsbind::String PasswordCredential::password() const {
    return Credential::get("password").as<jsbind::String>();
}

jsbind::String PasswordCredential::name() const {
    return Credential::get("name").as<jsbind::String>();
}

jsbind::String PasswordCredential::iconURL() const {
    return Credential::get("iconURL").as<jsbind::String>();
}

