#include "webbind/RTCIdentityProviderGlobalScope.hpp"
#include "webbind/RTCIdentityProviderRegistrar.hpp"

namespace webbind {

RTCIdentityProviderGlobalScope RTCIdentityProviderGlobalScope::take_ownership(Handle h) noexcept {
        return RTCIdentityProviderGlobalScope(h);
    }
RTCIdentityProviderGlobalScope RTCIdentityProviderGlobalScope::clone() const noexcept { return *this; }
emlite::Val RTCIdentityProviderGlobalScope::instance() noexcept { return emlite::Val::global("RTCIdentityProviderGlobalScope"); }
RTCIdentityProviderGlobalScope::RTCIdentityProviderGlobalScope(Handle h) noexcept : WorkerGlobalScope(emlite::Val::take_ownership(h)) {}
RTCIdentityProviderGlobalScope::RTCIdentityProviderGlobalScope(const emlite::Val &val) noexcept: WorkerGlobalScope(val) {}

RTCIdentityProviderRegistrar RTCIdentityProviderGlobalScope::rtcIdentityProvider() const {
    return WorkerGlobalScope::get("rtcIdentityProvider").as<RTCIdentityProviderRegistrar>();
}


} // namespace webbind