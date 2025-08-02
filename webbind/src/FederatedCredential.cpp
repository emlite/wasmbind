#include <webbind/FederatedCredential.hpp>


FederatedCredential FederatedCredential::take_ownership(Handle h) noexcept {
        return FederatedCredential(h);
    }
FederatedCredential FederatedCredential::clone() const noexcept { return *this; }
emlite::Val FederatedCredential::instance() noexcept { return emlite::Val::global("FederatedCredential"); }
FederatedCredential::FederatedCredential(Handle h) noexcept : Credential(emlite::Val::take_ownership(h)) {}
FederatedCredential::FederatedCredential(const emlite::Val &val) noexcept: Credential(val) {}


FederatedCredential::FederatedCredential(const jsbind::Any& data) : Credential(emlite::Val::global("FederatedCredential").new_(data)) {}

jsbind::String FederatedCredential::provider() const {
    return Credential::get("provider").as<jsbind::String>();
}

jsbind::String FederatedCredential::protocol() const {
    return Credential::get("protocol").as<jsbind::String>();
}

jsbind::String FederatedCredential::name() const {
    return Credential::get("name").as<jsbind::String>();
}

jsbind::String FederatedCredential::iconURL() const {
    return Credential::get("iconURL").as<jsbind::String>();
}

