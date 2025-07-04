#include <webbind/RTCIdentityProviderGlobalScope.hpp>
#include <webbind/RTCIdentityProviderRegistrar.hpp>


RTCIdentityProviderGlobalScope RTCIdentityProviderGlobalScope::take_ownership(Handle h) noexcept {
        return RTCIdentityProviderGlobalScope(h);
    }
RTCIdentityProviderGlobalScope RTCIdentityProviderGlobalScope::clone() const noexcept { return *this; }
RTCIdentityProviderGlobalScope::RTCIdentityProviderGlobalScope(Handle h) noexcept : WorkerGlobalScope(emlite::Val::take_ownership(h)) {}
RTCIdentityProviderGlobalScope::RTCIdentityProviderGlobalScope(const emlite::Val &val) noexcept: WorkerGlobalScope(val) {}


RTCIdentityProviderRegistrar RTCIdentityProviderGlobalScope::rtcIdentityProvider() const {
    return WorkerGlobalScope::get("rtcIdentityProvider").as<RTCIdentityProviderRegistrar>();
}

