#include <webbind/IdentityProviderRequestOptions.hpp>

namespace webbind {

IdentityProviderRequestOptions::IdentityProviderRequestOptions(Handle h) noexcept : IdentityProviderConfig(emlite::Val::take_ownership(h)) {}
IdentityProviderRequestOptions IdentityProviderRequestOptions::take_ownership(Handle h) noexcept {
    return IdentityProviderRequestOptions(h);
}

IdentityProviderRequestOptions::IdentityProviderRequestOptions(const emlite::Val &val) noexcept: IdentityProviderConfig(val) {}

IdentityProviderRequestOptions::IdentityProviderRequestOptions() noexcept: IdentityProviderConfig(emlite::Val::object()) {}

IdentityProviderRequestOptions IdentityProviderRequestOptions::clone() const noexcept { return *this; }

jsbind::String IdentityProviderRequestOptions::loginHint() const {
    return emlite::Val::get("loginHint").as<jsbind::String>();
}

void IdentityProviderRequestOptions::loginHint(const jsbind::String& value) {
    emlite::Val::set("loginHint", value);
}

jsbind::String IdentityProviderRequestOptions::domainHint() const {
    return emlite::Val::get("domainHint").as<jsbind::String>();
}

void IdentityProviderRequestOptions::domainHint(const jsbind::String& value) {
    emlite::Val::set("domainHint", value);
}

jsbind::TypedArray<jsbind::String> IdentityProviderRequestOptions::fields() const {
    return emlite::Val::get("fields").as<jsbind::TypedArray<jsbind::String>>();
}

void IdentityProviderRequestOptions::fields(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("fields", value);
}

jsbind::Any IdentityProviderRequestOptions::params() const {
    return emlite::Val::get("params").as<jsbind::Any>();
}

void IdentityProviderRequestOptions::params(const jsbind::Any& value) {
    emlite::Val::set("params", value);
}


} // namespace webbind