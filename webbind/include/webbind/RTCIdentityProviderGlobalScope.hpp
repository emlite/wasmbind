#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkerGlobalScope.hpp"
#include "enums.hpp"

class RTCIdentityProviderRegistrar;


class RTCIdentityProviderGlobalScope : public WorkerGlobalScope {
    explicit RTCIdentityProviderGlobalScope(Handle h) noexcept;

public:
    explicit RTCIdentityProviderGlobalScope(const emlite::Val &val) noexcept;
    static RTCIdentityProviderGlobalScope take_ownership(Handle h) noexcept;

    RTCIdentityProviderGlobalScope clone() const noexcept;
    RTCIdentityProviderRegistrar rtcIdentityProvider() const;
};

