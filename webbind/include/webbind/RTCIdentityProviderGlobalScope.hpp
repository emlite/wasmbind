#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WorkerGlobalScope.hpp"

namespace webbind {

class RTCIdentityProviderRegistrar;

/// Interface RTCIdentityProviderGlobalScope
/// [`RTCIdentityProviderGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityProviderGlobalScope)
class RTCIdentityProviderGlobalScope : public WorkerGlobalScope {
    explicit RTCIdentityProviderGlobalScope(Handle h) noexcept;
public:
    explicit RTCIdentityProviderGlobalScope(const emlite::Val &val) noexcept;
    static RTCIdentityProviderGlobalScope take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIdentityProviderGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`RTCIdentityProviderGlobalScope.rtcIdentityProvider`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityProviderGlobalScope/rtcIdentityProvider)
    /// [`RTCIdentityProviderGlobalScope.rtcIdentityProvider`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityProviderGlobalScope/rtcIdentityProvider)
    [[nodiscard]] RTCIdentityProviderRegistrar rtcIdentityProvider() const;
};

} // namespace webbind