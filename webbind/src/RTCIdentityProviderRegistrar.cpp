#include <webbind/RTCIdentityProviderRegistrar.hpp>


RTCIdentityProvider::RTCIdentityProvider(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIdentityProvider RTCIdentityProvider::take_ownership(Handle h) noexcept {
        return RTCIdentityProvider(h);
    }
RTCIdentityProvider::RTCIdentityProvider(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCIdentityProvider::RTCIdentityProvider() noexcept: emlite::Val(emlite::Val::object()) {}
RTCIdentityProvider RTCIdentityProvider::clone() const noexcept { return *this; }

jsbind::Function RTCIdentityProvider::generateAssertion() const {
    return emlite::Val::get("generateAssertion").as<jsbind::Function>();
}

void RTCIdentityProvider::generateAssertion(const jsbind::Function& value) {
    emlite::Val::set("generateAssertion", value);
}

jsbind::Function RTCIdentityProvider::validateAssertion() const {
    return emlite::Val::get("validateAssertion").as<jsbind::Function>();
}

void RTCIdentityProvider::validateAssertion(const jsbind::Function& value) {
    emlite::Val::set("validateAssertion", value);
}

RTCIdentityProviderRegistrar RTCIdentityProviderRegistrar::take_ownership(Handle h) noexcept {
        return RTCIdentityProviderRegistrar(h);
    }
RTCIdentityProviderRegistrar RTCIdentityProviderRegistrar::clone() const noexcept { return *this; }
RTCIdentityProviderRegistrar::RTCIdentityProviderRegistrar(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIdentityProviderRegistrar::RTCIdentityProviderRegistrar(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined RTCIdentityProviderRegistrar::register_(const RTCIdentityProvider& idp) {
    return emlite::Val::call("register", idp).as<jsbind::Undefined>();
}

