#include <webbind/FederatedCredentialInit.hpp>

namespace webbind {

FederatedCredentialInit::FederatedCredentialInit(Handle h) noexcept : CredentialData(emlite::Val::take_ownership(h)) {}
FederatedCredentialInit FederatedCredentialInit::take_ownership(Handle h) noexcept {
    return FederatedCredentialInit(h);
}

FederatedCredentialInit::FederatedCredentialInit(const emlite::Val &val) noexcept: CredentialData(val) {}

FederatedCredentialInit::FederatedCredentialInit() noexcept: CredentialData(emlite::Val::object()) {}

FederatedCredentialInit FederatedCredentialInit::clone() const noexcept { return *this; }

jsbind::String FederatedCredentialInit::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void FederatedCredentialInit::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String FederatedCredentialInit::iconURL() const {
    return emlite::Val::get("iconURL").as<jsbind::String>();
}

void FederatedCredentialInit::iconURL(const jsbind::String& value) {
    emlite::Val::set("iconURL", value);
}

jsbind::String FederatedCredentialInit::origin() const {
    return emlite::Val::get("origin").as<jsbind::String>();
}

void FederatedCredentialInit::origin(const jsbind::String& value) {
    emlite::Val::set("origin", value);
}

jsbind::String FederatedCredentialInit::provider() const {
    return emlite::Val::get("provider").as<jsbind::String>();
}

void FederatedCredentialInit::provider(const jsbind::String& value) {
    emlite::Val::set("provider", value);
}

jsbind::String FederatedCredentialInit::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

void FederatedCredentialInit::protocol(const jsbind::String& value) {
    emlite::Val::set("protocol", value);
}


} // namespace webbind