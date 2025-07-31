#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class RTCIdentityProvider;


class RTCIdentityProvider : public emlite::Val {
  explicit RTCIdentityProvider(Handle h) noexcept;
public:
    static RTCIdentityProvider take_ownership(Handle h) noexcept;
    explicit RTCIdentityProvider(const emlite::Val &val) noexcept;
    RTCIdentityProvider() noexcept;
    [[nodiscard]] RTCIdentityProvider clone() const noexcept;
    [[nodiscard]] jsbind::Function generateAssertion() const;
    void generateAssertion(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function validateAssertion() const;
    void validateAssertion(const jsbind::Function& value);
};

/// The RTCIdentityProviderRegistrar class.
/// [`RTCIdentityProviderRegistrar`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityProviderRegistrar)
class RTCIdentityProviderRegistrar : public emlite::Val {
    explicit RTCIdentityProviderRegistrar(Handle h) noexcept;

public:
    explicit RTCIdentityProviderRegistrar(const emlite::Val &val) noexcept;
    static RTCIdentityProviderRegistrar take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCIdentityProviderRegistrar clone() const noexcept;
    /// The register method.
    /// [`RTCIdentityProviderRegistrar.register`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityProviderRegistrar/register)
    jsbind::Undefined register_(const RTCIdentityProvider& idp);
};

