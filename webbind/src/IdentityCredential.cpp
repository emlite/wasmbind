#include <webbind/IdentityCredential.hpp>
#include <webbind/IdentityCredentialDisconnectOptions.hpp>

namespace webbind {

IdentityCredential IdentityCredential::take_ownership(Handle h) noexcept {
    return IdentityCredential(h);
}

IdentityCredential IdentityCredential::clone() const noexcept { return *this; }

emlite::Val IdentityCredential::instance() noexcept { return emlite::Val::global("IdentityCredential"); }

IdentityCredential::IdentityCredential(Handle h) noexcept : Credential(emlite::Val::take_ownership(h)) {}

IdentityCredential::IdentityCredential(const emlite::Val &val) noexcept: Credential(val) {}

jsbind::Promise<jsbind::Undefined> IdentityCredential::disconnect(const IdentityCredentialDisconnectOptions& options) {
    return emlite::Val::global("identitycredential").call("disconnect", options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::String IdentityCredential::token() const {
    return Credential::get("token").as<jsbind::String>();
}

bool IdentityCredential::isAutoSelected() const {
    return Credential::get("isAutoSelected").as<bool>();
}

jsbind::String IdentityCredential::configURL() const {
    return Credential::get("configURL").as<jsbind::String>();
}


} // namespace webbind