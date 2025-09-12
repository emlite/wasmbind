#include <webbind/PasswordCredential.hpp>
#include <webbind/HTMLFormElement.hpp>
#include <webbind/PasswordCredentialData.hpp>

namespace webbind {

PasswordCredential PasswordCredential::take_ownership(Handle h) noexcept {
    return PasswordCredential(h);
}

PasswordCredential PasswordCredential::clone() const noexcept { return *this; }

emlite::Val PasswordCredential::instance() noexcept { return emlite::Val::global("PasswordCredential"); }

PasswordCredential::PasswordCredential(Handle h) noexcept : Credential(emlite::Val::take_ownership(h)) {}

PasswordCredential::PasswordCredential(const emlite::Val &val) noexcept: Credential(val) {}

PasswordCredential::PasswordCredential(const HTMLFormElement& form) : Credential(emlite::Val::global("PasswordCredential").new_(form)) {}

PasswordCredential::PasswordCredential(const PasswordCredentialData& data) : Credential(emlite::Val::global("PasswordCredential").new_(data)) {}

jsbind::String PasswordCredential::password() const {
    return Credential::get("password").as<jsbind::String>();
}

jsbind::String PasswordCredential::name() const {
    return Credential::get("name").as<jsbind::String>();
}

jsbind::String PasswordCredential::iconURL() const {
    return Credential::get("iconURL").as<jsbind::String>();
}


} // namespace webbind