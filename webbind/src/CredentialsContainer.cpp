#include "webbind/CredentialsContainer.hpp"
#include "webbind/Credential.hpp"
#include "webbind/CredentialRequestOptions.hpp"
#include "webbind/CredentialCreationOptions.hpp"

namespace webbind {

CredentialsContainer CredentialsContainer::take_ownership(Handle h) noexcept {
        return CredentialsContainer(h);
    }
CredentialsContainer CredentialsContainer::clone() const noexcept { return *this; }
emlite::Val CredentialsContainer::instance() noexcept { return emlite::Val::global("CredentialsContainer"); }
CredentialsContainer::CredentialsContainer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CredentialsContainer::CredentialsContainer(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<Credential> CredentialsContainer::get() {
    return emlite::Val::call("get").as<jsbind::Promise<Credential>>();
}

jsbind::Promise<Credential> CredentialsContainer::get(const CredentialRequestOptions& options) {
    return emlite::Val::call("get", options).as<jsbind::Promise<Credential>>();
}

jsbind::Promise<jsbind::Undefined> CredentialsContainer::store(const Credential& credential) {
    return emlite::Val::call("store", credential).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<Credential> CredentialsContainer::create() {
    return emlite::Val::call("create").as<jsbind::Promise<Credential>>();
}

jsbind::Promise<Credential> CredentialsContainer::create(const CredentialCreationOptions& options) {
    return emlite::Val::call("create", options).as<jsbind::Promise<Credential>>();
}

jsbind::Promise<jsbind::Undefined> CredentialsContainer::preventSilentAccess() {
    return emlite::Val::call("preventSilentAccess").as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind