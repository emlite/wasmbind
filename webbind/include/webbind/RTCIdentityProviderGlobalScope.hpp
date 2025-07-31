#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkerGlobalScope.hpp"
#include "enums.hpp"

class RTCIdentityProviderRegistrar;


/// The RTCIdentityProviderGlobalScope class.
/// [`RTCIdentityProviderGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityProviderGlobalScope)
class RTCIdentityProviderGlobalScope : public WorkerGlobalScope {
    explicit RTCIdentityProviderGlobalScope(Handle h) noexcept;

public:
    explicit RTCIdentityProviderGlobalScope(const emlite::Val &val) noexcept;
    static RTCIdentityProviderGlobalScope take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCIdentityProviderGlobalScope clone() const noexcept;
    /// Getter of the `rtcIdentityProvider` attribute.
    /// [`RTCIdentityProviderGlobalScope.rtcIdentityProvider`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityProviderGlobalScope/rtcIdentityProvider)
    [[nodiscard]] RTCIdentityProviderRegistrar rtcIdentityProvider() const;
};

