#include <webbind/Credential.hpp>

namespace webbind {

Credential Credential::take_ownership(Handle h) noexcept {
    return Credential(h);
}

Credential Credential::clone() const noexcept { return *this; }

emlite::Val Credential::instance() noexcept { return emlite::Val::global("Credential"); }

Credential::Credential(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Credential::Credential(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String Credential::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

jsbind::String Credential::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

jsbind::Promise<bool> Credential::isConditionalMediationAvailable() {
    return emlite::Val::global("credential").call("isConditionalMediationAvailable").as<jsbind::Promise<bool>>();
}

jsbind::Promise<jsbind::Undefined> Credential::willRequestConditionalCreation() {
    return emlite::Val::global("credential").call("willRequestConditionalCreation").as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind