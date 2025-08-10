#include <webbind/IdentityProviderWellKnown.hpp>

namespace webbind {

IdentityProviderWellKnown::IdentityProviderWellKnown(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityProviderWellKnown IdentityProviderWellKnown::take_ownership(Handle h) noexcept {
    return IdentityProviderWellKnown(h);
}

IdentityProviderWellKnown::IdentityProviderWellKnown(const emlite::Val &val) noexcept: emlite::Val(val) {}

IdentityProviderWellKnown::IdentityProviderWellKnown() noexcept: emlite::Val(emlite::Val::object()) {}

IdentityProviderWellKnown IdentityProviderWellKnown::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> IdentityProviderWellKnown::provider_urls() const {
    return emlite::Val::get("provider_urls").as<jsbind::TypedArray<jsbind::String>>();
}

void IdentityProviderWellKnown::provider_urls(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("provider_urls", value);
}

jsbind::String IdentityProviderWellKnown::accounts_endpoint() const {
    return emlite::Val::get("accounts_endpoint").as<jsbind::String>();
}

void IdentityProviderWellKnown::accounts_endpoint(const jsbind::String& value) {
    emlite::Val::set("accounts_endpoint", value);
}

jsbind::String IdentityProviderWellKnown::login_url() const {
    return emlite::Val::get("login_url").as<jsbind::String>();
}

void IdentityProviderWellKnown::login_url(const jsbind::String& value) {
    emlite::Val::set("login_url", value);
}


} // namespace webbind