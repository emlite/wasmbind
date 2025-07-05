#include <webbind/CredentialsContainer.hpp>
#include <webbind/Credential.hpp>
#include <webbind/PublicKeyCredential.hpp>


CredentialRequestOptions::CredentialRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CredentialRequestOptions CredentialRequestOptions::take_ownership(Handle h) noexcept {
        return CredentialRequestOptions(h);
    }
CredentialRequestOptions::CredentialRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
CredentialRequestOptions::CredentialRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}
CredentialRequestOptions CredentialRequestOptions::clone() const noexcept { return *this; }

PublicKeyCredentialRequestOptions CredentialRequestOptions::publicKey() const {
    return emlite::Val::get("publicKey").as<PublicKeyCredentialRequestOptions>();
}

void CredentialRequestOptions::publicKey(const PublicKeyCredentialRequestOptions& value) {
    emlite::Val::set("publicKey", value);
}

CredentialCreationOptions::CredentialCreationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CredentialCreationOptions CredentialCreationOptions::take_ownership(Handle h) noexcept {
        return CredentialCreationOptions(h);
    }
CredentialCreationOptions::CredentialCreationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
CredentialCreationOptions::CredentialCreationOptions() noexcept: emlite::Val(emlite::Val::object()) {}
CredentialCreationOptions CredentialCreationOptions::clone() const noexcept { return *this; }

PublicKeyCredentialCreationOptions CredentialCreationOptions::publicKey() const {
    return emlite::Val::get("publicKey").as<PublicKeyCredentialCreationOptions>();
}

void CredentialCreationOptions::publicKey(const PublicKeyCredentialCreationOptions& value) {
    emlite::Val::set("publicKey", value);
}

CredentialsContainer CredentialsContainer::take_ownership(Handle h) noexcept {
        return CredentialsContainer(h);
    }
CredentialsContainer CredentialsContainer::clone() const noexcept { return *this; }
CredentialsContainer::CredentialsContainer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CredentialsContainer::CredentialsContainer(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise CredentialsContainer::get() {
    return emlite::Val::call("get").as<jsbind::Promise>();
}

jsbind::Promise CredentialsContainer::get(const CredentialRequestOptions& options) {
    return emlite::Val::call("get", options).as<jsbind::Promise>();
}

jsbind::Promise CredentialsContainer::store(const Credential& credential) {
    return emlite::Val::call("store", credential).as<jsbind::Promise>();
}

jsbind::Promise CredentialsContainer::create() {
    return emlite::Val::call("create").as<jsbind::Promise>();
}

jsbind::Promise CredentialsContainer::create(const CredentialCreationOptions& options) {
    return emlite::Val::call("create", options).as<jsbind::Promise>();
}

jsbind::Promise CredentialsContainer::preventSilentAccess() {
    return emlite::Val::call("preventSilentAccess").as<jsbind::Promise>();
}

