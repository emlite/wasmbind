#include <webbind/Credential.hpp>


Credential Credential::take_ownership(Handle h) noexcept {
        return Credential(h);
    }
Credential Credential::clone() const noexcept { return *this; }
Credential::Credential(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Credential::Credential(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString Credential::id() const {
    return emlite::Val::get("id").as<jsbind::USVString>();
}

jsbind::DOMString Credential::type() const {
    return emlite::Val::get("type").as<jsbind::DOMString>();
}

jsbind::Promise Credential::isConditionalMediationAvailable() {
    return emlite::Val::global("credential").call("isConditionalMediationAvailable").as<jsbind::Promise>();
}

jsbind::Promise Credential::willRequestConditionalCreation() {
    return emlite::Val::global("credential").call("willRequestConditionalCreation").as<jsbind::Promise>();
}

