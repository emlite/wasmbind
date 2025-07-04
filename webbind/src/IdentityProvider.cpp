#include <webbind/IdentityProvider.hpp>


IdentityResolveOptions::IdentityResolveOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityResolveOptions IdentityResolveOptions::take_ownership(Handle h) noexcept {
        return IdentityResolveOptions(h);
    }
IdentityResolveOptions::IdentityResolveOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdentityResolveOptions::IdentityResolveOptions() noexcept: emlite::Val(emlite::Val::object()) {}
IdentityResolveOptions IdentityResolveOptions::clone() const noexcept { return *this; }

jsbind::USVString IdentityResolveOptions::accountId() const {
    return emlite::Val::get("accountId").as<jsbind::USVString>();
}

void IdentityResolveOptions::accountId(const jsbind::USVString& value) {
    emlite::Val::set("accountId", value);
}

IdentityUserInfo::IdentityUserInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityUserInfo IdentityUserInfo::take_ownership(Handle h) noexcept {
        return IdentityUserInfo(h);
    }
IdentityUserInfo::IdentityUserInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdentityUserInfo::IdentityUserInfo() noexcept: emlite::Val(emlite::Val::object()) {}
IdentityUserInfo IdentityUserInfo::clone() const noexcept { return *this; }

jsbind::USVString IdentityUserInfo::email() const {
    return emlite::Val::get("email").as<jsbind::USVString>();
}

void IdentityUserInfo::email(const jsbind::USVString& value) {
    emlite::Val::set("email", value);
}

jsbind::USVString IdentityUserInfo::name() const {
    return emlite::Val::get("name").as<jsbind::USVString>();
}

void IdentityUserInfo::name(const jsbind::USVString& value) {
    emlite::Val::set("name", value);
}

jsbind::USVString IdentityUserInfo::givenName() const {
    return emlite::Val::get("givenName").as<jsbind::USVString>();
}

void IdentityUserInfo::givenName(const jsbind::USVString& value) {
    emlite::Val::set("givenName", value);
}

jsbind::USVString IdentityUserInfo::picture() const {
    return emlite::Val::get("picture").as<jsbind::USVString>();
}

void IdentityUserInfo::picture(const jsbind::USVString& value) {
    emlite::Val::set("picture", value);
}

IdentityProviderConfig::IdentityProviderConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityProviderConfig IdentityProviderConfig::take_ownership(Handle h) noexcept {
        return IdentityProviderConfig(h);
    }
IdentityProviderConfig::IdentityProviderConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdentityProviderConfig::IdentityProviderConfig() noexcept: emlite::Val(emlite::Val::object()) {}
IdentityProviderConfig IdentityProviderConfig::clone() const noexcept { return *this; }

jsbind::USVString IdentityProviderConfig::configURL() const {
    return emlite::Val::get("configURL").as<jsbind::USVString>();
}

void IdentityProviderConfig::configURL(const jsbind::USVString& value) {
    emlite::Val::set("configURL", value);
}

jsbind::USVString IdentityProviderConfig::clientId() const {
    return emlite::Val::get("clientId").as<jsbind::USVString>();
}

void IdentityProviderConfig::clientId(const jsbind::USVString& value) {
    emlite::Val::set("clientId", value);
}

IdentityProvider IdentityProvider::take_ownership(Handle h) noexcept {
        return IdentityProvider(h);
    }
IdentityProvider IdentityProvider::clone() const noexcept { return *this; }
IdentityProvider::IdentityProvider(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityProvider::IdentityProvider(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined IdentityProvider::close() {
    return emlite::Val::global("identityprovider").call("close").as<jsbind::Undefined>();
}

jsbind::Promise IdentityProvider::resolve(const jsbind::DOMString& token, const IdentityResolveOptions& options) {
    return emlite::Val::global("identityprovider").call("resolve", token, options).as<jsbind::Promise>();
}

jsbind::Promise IdentityProvider::getUserInfo(const IdentityProviderConfig& config) {
    return emlite::Val::global("identityprovider").call("getUserInfo", config).as<jsbind::Promise>();
}

