#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AuthenticatorResponse.hpp"
#include "enums.hpp"


class AuthenticatorAttestationResponse : public AuthenticatorResponse {
    explicit AuthenticatorAttestationResponse(Handle h) noexcept;

public:
    explicit AuthenticatorAttestationResponse(const emlite::Val &val) noexcept;
    static AuthenticatorAttestationResponse take_ownership(Handle h) noexcept;

    AuthenticatorAttestationResponse clone() const noexcept;
    jsbind::ArrayBuffer attestationObject() const;
    jsbind::Sequence<jsbind::DOMString> getTransports();
    jsbind::ArrayBuffer getAuthenticatorData();
    jsbind::ArrayBuffer getPublicKey();
    jsbind::Any getPublicKeyAlgorithm();
};

