#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticatorAttestationResponseJSON
class AuthenticatorAttestationResponseJSON : public emlite::Val {
  explicit AuthenticatorAttestationResponseJSON(Handle h) noexcept;
public:
    static AuthenticatorAttestationResponseJSON take_ownership(Handle h) noexcept;
    explicit AuthenticatorAttestationResponseJSON(const emlite::Val &val) noexcept;
    AuthenticatorAttestationResponseJSON() noexcept;
    [[nodiscard]] AuthenticatorAttestationResponseJSON clone() const noexcept;
    /// Getter of the `clientDataJSON` attribute.
    [[nodiscard]] jsbind::Any clientDataJSON() const;
    /// Setter of the `clientDataJSON` attribute.
    void clientDataJSON(const jsbind::Any& value);
    /// Getter of the `authenticatorData` attribute.
    [[nodiscard]] jsbind::Any authenticatorData() const;
    /// Setter of the `authenticatorData` attribute.
    void authenticatorData(const jsbind::Any& value);
    /// Getter of the `transports` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> transports() const;
    /// Setter of the `transports` attribute.
    void transports(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `publicKey` attribute.
    [[nodiscard]] jsbind::Any publicKey() const;
    /// Setter of the `publicKey` attribute.
    void publicKey(const jsbind::Any& value);
    /// Getter of the `publicKeyAlgorithm` attribute.
    [[nodiscard]] jsbind::Any publicKeyAlgorithm() const;
    /// Setter of the `publicKeyAlgorithm` attribute.
    void publicKeyAlgorithm(const jsbind::Any& value);
    /// Getter of the `attestationObject` attribute.
    [[nodiscard]] jsbind::Any attestationObject() const;
    /// Setter of the `attestationObject` attribute.
    void attestationObject(const jsbind::Any& value);
};

} // namespace webbind