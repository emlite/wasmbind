#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AuthenticatorResponse.hpp"
#include "enums.hpp"


/// The AuthenticatorAttestationResponse class.
/// [`AuthenticatorAttestationResponse`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAttestationResponse)
class AuthenticatorAttestationResponse : public AuthenticatorResponse {
    explicit AuthenticatorAttestationResponse(Handle h) noexcept;

public:
    explicit AuthenticatorAttestationResponse(const emlite::Val &val) noexcept;
    static AuthenticatorAttestationResponse take_ownership(Handle h) noexcept;

    [[nodiscard]] AuthenticatorAttestationResponse clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `attestationObject` attribute.
    /// [`AuthenticatorAttestationResponse.attestationObject`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAttestationResponse/attestationObject)
    [[nodiscard]] jsbind::ArrayBuffer attestationObject() const;
    /// The getTransports method.
    /// [`AuthenticatorAttestationResponse.getTransports`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAttestationResponse/getTransports)
    jsbind::TypedArray<jsbind::String> getTransports();
    /// The getAuthenticatorData method.
    /// [`AuthenticatorAttestationResponse.getAuthenticatorData`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAttestationResponse/getAuthenticatorData)
    jsbind::ArrayBuffer getAuthenticatorData();
    /// The getPublicKey method.
    /// [`AuthenticatorAttestationResponse.getPublicKey`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAttestationResponse/getPublicKey)
    jsbind::ArrayBuffer getPublicKey();
    /// The getPublicKeyAlgorithm method.
    /// [`AuthenticatorAttestationResponse.getPublicKeyAlgorithm`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAttestationResponse/getPublicKeyAlgorithm)
    jsbind::Any getPublicKeyAlgorithm();
};

