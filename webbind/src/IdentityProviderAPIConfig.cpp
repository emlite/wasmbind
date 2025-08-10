#include <webbind/IdentityProviderAPIConfig.hpp>
#include <webbind/IdentityProviderBranding.hpp>

namespace webbind {

IdentityProviderAPIConfig::IdentityProviderAPIConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityProviderAPIConfig IdentityProviderAPIConfig::take_ownership(Handle h) noexcept {
    return IdentityProviderAPIConfig(h);
}

IdentityProviderAPIConfig::IdentityProviderAPIConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}

IdentityProviderAPIConfig::IdentityProviderAPIConfig() noexcept: emlite::Val(emlite::Val::object()) {}

IdentityProviderAPIConfig IdentityProviderAPIConfig::clone() const noexcept { return *this; }

jsbind::String IdentityProviderAPIConfig::accounts_endpoint() const {
    return emlite::Val::get("accounts_endpoint").as<jsbind::String>();
}

void IdentityProviderAPIConfig::accounts_endpoint(const jsbind::String& value) {
    emlite::Val::set("accounts_endpoint", value);
}

jsbind::String IdentityProviderAPIConfig::client_metadata_endpoint() const {
    return emlite::Val::get("client_metadata_endpoint").as<jsbind::String>();
}

void IdentityProviderAPIConfig::client_metadata_endpoint(const jsbind::String& value) {
    emlite::Val::set("client_metadata_endpoint", value);
}

jsbind::String IdentityProviderAPIConfig::id_assertion_endpoint() const {
    return emlite::Val::get("id_assertion_endpoint").as<jsbind::String>();
}

void IdentityProviderAPIConfig::id_assertion_endpoint(const jsbind::String& value) {
    emlite::Val::set("id_assertion_endpoint", value);
}

jsbind::String IdentityProviderAPIConfig::login_url() const {
    return emlite::Val::get("login_url").as<jsbind::String>();
}

void IdentityProviderAPIConfig::login_url(const jsbind::String& value) {
    emlite::Val::set("login_url", value);
}

jsbind::String IdentityProviderAPIConfig::disconnect_endpoint() const {
    return emlite::Val::get("disconnect_endpoint").as<jsbind::String>();
}

void IdentityProviderAPIConfig::disconnect_endpoint(const jsbind::String& value) {
    emlite::Val::set("disconnect_endpoint", value);
}

IdentityProviderBranding IdentityProviderAPIConfig::branding() const {
    return emlite::Val::get("branding").as<IdentityProviderBranding>();
}

void IdentityProviderAPIConfig::branding(const IdentityProviderBranding& value) {
    emlite::Val::set("branding", value);
}

bool IdentityProviderAPIConfig::supports_use_other_account() const {
    return emlite::Val::get("supports_use_other_account").as<bool>();
}

void IdentityProviderAPIConfig::supports_use_other_account(bool value) {
    emlite::Val::set("supports_use_other_account", value);
}

jsbind::String IdentityProviderAPIConfig::account_label() const {
    return emlite::Val::get("account_label").as<jsbind::String>();
}

void IdentityProviderAPIConfig::account_label(const jsbind::String& value) {
    emlite::Val::set("account_label", value);
}


} // namespace webbind