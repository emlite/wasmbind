#include <webbind/IdentityCredentialRequestOptions.hpp>
#include <webbind/IdentityProviderRequestOptions.hpp>

namespace webbind {

IdentityCredentialRequestOptions::IdentityCredentialRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityCredentialRequestOptions IdentityCredentialRequestOptions::take_ownership(Handle h) noexcept {
    return IdentityCredentialRequestOptions(h);
}

IdentityCredentialRequestOptions::IdentityCredentialRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

IdentityCredentialRequestOptions::IdentityCredentialRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}

IdentityCredentialRequestOptions IdentityCredentialRequestOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<IdentityProviderRequestOptions> IdentityCredentialRequestOptions::providers() const {
    return emlite::Val::get("providers").as<jsbind::TypedArray<IdentityProviderRequestOptions>>();
}

void IdentityCredentialRequestOptions::providers(const jsbind::TypedArray<IdentityProviderRequestOptions>& value) {
    emlite::Val::set("providers", value);
}

IdentityCredentialRequestOptionsContext IdentityCredentialRequestOptions::context() const {
    return emlite::Val::get("context").as<IdentityCredentialRequestOptionsContext>();
}

void IdentityCredentialRequestOptions::context(const IdentityCredentialRequestOptionsContext& value) {
    emlite::Val::set("context", value);
}

IdentityCredentialRequestOptionsMode IdentityCredentialRequestOptions::mode() const {
    return emlite::Val::get("mode").as<IdentityCredentialRequestOptionsMode>();
}

void IdentityCredentialRequestOptions::mode(const IdentityCredentialRequestOptionsMode& value) {
    emlite::Val::set("mode", value);
}


} // namespace webbind