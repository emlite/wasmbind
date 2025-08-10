#include <webbind/RTCIdentityProviderRegistrar.hpp>
#include <webbind/RTCIdentityProvider.hpp>

namespace webbind {

RTCIdentityProviderRegistrar RTCIdentityProviderRegistrar::take_ownership(Handle h) noexcept {
    return RTCIdentityProviderRegistrar(h);
}

RTCIdentityProviderRegistrar RTCIdentityProviderRegistrar::clone() const noexcept { return *this; }

emlite::Val RTCIdentityProviderRegistrar::instance() noexcept { return emlite::Val::global("RTCIdentityProviderRegistrar"); }

RTCIdentityProviderRegistrar::RTCIdentityProviderRegistrar(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

RTCIdentityProviderRegistrar::RTCIdentityProviderRegistrar(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined RTCIdentityProviderRegistrar::register_(const RTCIdentityProvider& idp) {
    return emlite::Val::call("register", idp).as<jsbind::Undefined>();
}


} // namespace webbind