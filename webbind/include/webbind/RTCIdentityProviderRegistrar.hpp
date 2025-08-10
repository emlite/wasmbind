#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class RTCIdentityProvider;

/// Interface RTCIdentityProviderRegistrar
/// [`RTCIdentityProviderRegistrar`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityProviderRegistrar)
class RTCIdentityProviderRegistrar : public emlite::Val {
    explicit RTCIdentityProviderRegistrar(Handle h) noexcept;
public:
    explicit RTCIdentityProviderRegistrar(const emlite::Val &val) noexcept;
    static RTCIdentityProviderRegistrar take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIdentityProviderRegistrar clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The register method.
    /// [`RTCIdentityProviderRegistrar.register`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityProviderRegistrar/register)
    jsbind::Undefined register_(const RTCIdentityProvider& idp);
};

} // namespace webbind