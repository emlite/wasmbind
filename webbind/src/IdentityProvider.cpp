#include <webbind/IdentityProvider.hpp>
#include <webbind/IdentityResolveOptions.hpp>
#include <webbind/IdentityUserInfo.hpp>
#include <webbind/IdentityProviderConfig.hpp>

namespace webbind {

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

jsbind::Promise<jsbind::Undefined> IdentityProvider::resolve(const jsbind::Any& token) {
    return emlite::Val::global("identityprovider").call("resolve", token).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> IdentityProvider::resolve(const jsbind::Any& token, const IdentityResolveOptions& options) {
    return emlite::Val::global("identityprovider").call("resolve", token, options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::TypedArray<IdentityUserInfo>> IdentityProvider::getUserInfo(const IdentityProviderConfig& config) {
    return emlite::Val::global("identityprovider").call("getUserInfo", config).as<jsbind::Promise<jsbind::TypedArray<IdentityUserInfo>>>();
}


} // namespace webbind