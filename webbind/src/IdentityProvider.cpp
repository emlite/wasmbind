#include <webbind/IdentityProvider.hpp>


IdentityResolveOptions::IdentityResolveOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityResolveOptions IdentityResolveOptions::take_ownership(Handle h) noexcept {
        return IdentityResolveOptions(h);
    }
IdentityResolveOptions::IdentityResolveOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdentityResolveOptions::IdentityResolveOptions() noexcept: emlite::Val(emlite::Val::object()) {}
IdentityResolveOptions IdentityResolveOptions::clone() const noexcept { return *this; }

jsbind::String IdentityResolveOptions::accountId() const {
    return emlite::Val::get("accountId").as<jsbind::String>();
}

void IdentityResolveOptions::accountId(const jsbind::String& value) {
    emlite::Val::set("accountId", value);
}

IdentityUserInfo::IdentityUserInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityUserInfo IdentityUserInfo::take_ownership(Handle h) noexcept {
        return IdentityUserInfo(h);
    }
IdentityUserInfo::IdentityUserInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdentityUserInfo::IdentityUserInfo() noexcept: emlite::Val(emlite::Val::object()) {}
IdentityUserInfo IdentityUserInfo::clone() const noexcept { return *this; }

jsbind::String IdentityUserInfo::email() const {
    return emlite::Val::get("email").as<jsbind::String>();
}

void IdentityUserInfo::email(const jsbind::String& value) {
    emlite::Val::set("email", value);
}

jsbind::String IdentityUserInfo::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void IdentityUserInfo::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String IdentityUserInfo::givenName() const {
    return emlite::Val::get("givenName").as<jsbind::String>();
}

void IdentityUserInfo::givenName(const jsbind::String& value) {
    emlite::Val::set("givenName", value);
}

jsbind::String IdentityUserInfo::picture() const {
    return emlite::Val::get("picture").as<jsbind::String>();
}

void IdentityUserInfo::picture(const jsbind::String& value) {
    emlite::Val::set("picture", value);
}

IdentityProviderConfig::IdentityProviderConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityProviderConfig IdentityProviderConfig::take_ownership(Handle h) noexcept {
        return IdentityProviderConfig(h);
    }
IdentityProviderConfig::IdentityProviderConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdentityProviderConfig::IdentityProviderConfig() noexcept: emlite::Val(emlite::Val::object()) {}
IdentityProviderConfig IdentityProviderConfig::clone() const noexcept { return *this; }

jsbind::String IdentityProviderConfig::configURL() const {
    return emlite::Val::get("configURL").as<jsbind::String>();
}

void IdentityProviderConfig::configURL(const jsbind::String& value) {
    emlite::Val::set("configURL", value);
}

jsbind::String IdentityProviderConfig::clientId() const {
    return emlite::Val::get("clientId").as<jsbind::String>();
}

void IdentityProviderConfig::clientId(const jsbind::String& value) {
    emlite::Val::set("clientId", value);
}

IdentityProvider IdentityProvider::take_ownership(Handle h) noexcept {
        return IdentityProvider(h);
    }
IdentityProvider IdentityProvider::clone() const noexcept { return *this; }
emlite::Val IdentityProvider::instance() noexcept { return emlite::Val::global("IdentityProvider"); }
IdentityProvider::IdentityProvider(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityProvider::IdentityProvider(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined IdentityProvider::close() {
    return emlite::Val::global("identityprovider").call("close").as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> IdentityProvider::resolve(const jsbind::String& token) {
    return emlite::Val::global("identityprovider").call("resolve", token).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> IdentityProvider::resolve(const jsbind::String& token, const IdentityResolveOptions& options) {
    return emlite::Val::global("identityprovider").call("resolve", token, options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::TypedArray<IdentityUserInfo>> IdentityProvider::getUserInfo(const IdentityProviderConfig& config) {
    return emlite::Val::global("identityprovider").call("getUserInfo", config).as<jsbind::Promise<jsbind::TypedArray<IdentityUserInfo>>>();
}

