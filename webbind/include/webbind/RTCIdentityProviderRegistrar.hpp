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
    RTCIdentityProvider clone() const noexcept;
    jsbind::Function generateAssertion() const;
    void generateAssertion(const jsbind::Function& value);
    jsbind::Function validateAssertion() const;
    void validateAssertion(const jsbind::Function& value);
};

class RTCIdentityProviderRegistrar : public emlite::Val {
    explicit RTCIdentityProviderRegistrar(Handle h) noexcept;

public:
    explicit RTCIdentityProviderRegistrar(const emlite::Val &val) noexcept;
    static RTCIdentityProviderRegistrar take_ownership(Handle h) noexcept;

    RTCIdentityProviderRegistrar clone() const noexcept;
    jsbind::Undefined register_(const RTCIdentityProvider& idp);
};

