#include <webbind/IdentityProviderConfig.hpp>

using emlite::Val;
namespace webbind {

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


} // namespace webbind