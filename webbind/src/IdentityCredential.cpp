#include <webbind/IdentityCredential.hpp>


IdentityCredentialDisconnectOptions::IdentityCredentialDisconnectOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityCredentialDisconnectOptions IdentityCredentialDisconnectOptions::take_ownership(Handle h) noexcept {
        return IdentityCredentialDisconnectOptions(h);
    }
IdentityCredentialDisconnectOptions::IdentityCredentialDisconnectOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdentityCredentialDisconnectOptions::IdentityCredentialDisconnectOptions() noexcept: emlite::Val(emlite::Val::object()) {}
IdentityCredentialDisconnectOptions IdentityCredentialDisconnectOptions::clone() const noexcept { return *this; }

jsbind::USVString IdentityCredentialDisconnectOptions::accountHint() const {
    return emlite::Val::get("accountHint").as<jsbind::USVString>();
}

void IdentityCredentialDisconnectOptions::accountHint(const jsbind::USVString& value) {
    emlite::Val::set("accountHint", value);
}

IdentityCredential IdentityCredential::take_ownership(Handle h) noexcept {
        return IdentityCredential(h);
    }
IdentityCredential IdentityCredential::clone() const noexcept { return *this; }
IdentityCredential::IdentityCredential(Handle h) noexcept : Credential(emlite::Val::take_ownership(h)) {}
IdentityCredential::IdentityCredential(const emlite::Val &val) noexcept: Credential(val) {}


jsbind::Promise<jsbind::Undefined> IdentityCredential::disconnect(const IdentityCredentialDisconnectOptions& options) {
    return emlite::Val::global("identitycredential").call("disconnect", options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::USVString IdentityCredential::token() const {
    return Credential::get("token").as<jsbind::USVString>();
}

bool IdentityCredential::isAutoSelected() const {
    return Credential::get("isAutoSelected").as<bool>();
}

jsbind::USVString IdentityCredential::configURL() const {
    return Credential::get("configURL").as<jsbind::USVString>();
}

