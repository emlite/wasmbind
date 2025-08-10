#include <webbind/IdentityProviderClientMetadata.hpp>

using emlite::Val;
namespace webbind {

IdentityProviderClientMetadata::IdentityProviderClientMetadata(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityProviderClientMetadata IdentityProviderClientMetadata::take_ownership(Handle h) noexcept {
        return IdentityProviderClientMetadata(h);
    }
IdentityProviderClientMetadata::IdentityProviderClientMetadata(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdentityProviderClientMetadata::IdentityProviderClientMetadata() noexcept: emlite::Val(emlite::Val::object()) {}
IdentityProviderClientMetadata IdentityProviderClientMetadata::clone() const noexcept { return *this; }

jsbind::String IdentityProviderClientMetadata::privacy_policy_url() const {
    return emlite::Val::get("privacy_policy_url").as<jsbind::String>();
}

void IdentityProviderClientMetadata::privacy_policy_url(const jsbind::String& value) {
    emlite::Val::set("privacy_policy_url", value);
}

jsbind::String IdentityProviderClientMetadata::terms_of_service_url() const {
    return emlite::Val::get("terms_of_service_url").as<jsbind::String>();
}

void IdentityProviderClientMetadata::terms_of_service_url(const jsbind::String& value) {
    emlite::Val::set("terms_of_service_url", value);
}


} // namespace webbind