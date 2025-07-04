#include <webbind/FederatedCredential.hpp>


FederatedCredential FederatedCredential::take_ownership(Handle h) noexcept {
        return FederatedCredential(h);
    }
FederatedCredential FederatedCredential::clone() const noexcept { return *this; }
FederatedCredential::FederatedCredential(Handle h) noexcept : Credential(emlite::Val::take_ownership(h)) {}
FederatedCredential::FederatedCredential(const emlite::Val &val) noexcept: Credential(val) {}


FederatedCredential::FederatedCredential(const jsbind::Any& data): Credential(emlite::Val::global("FederatedCredential").new_(data)) {}

jsbind::USVString FederatedCredential::provider() const {
    return Credential::get("provider").as<jsbind::USVString>();
}

jsbind::DOMString FederatedCredential::protocol() const {
    return Credential::get("protocol").as<jsbind::DOMString>();
}

jsbind::USVString FederatedCredential::name() const {
    return Credential::get("name").as<jsbind::USVString>();
}

jsbind::USVString FederatedCredential::iconURL() const {
    return Credential::get("iconURL").as<jsbind::USVString>();
}

