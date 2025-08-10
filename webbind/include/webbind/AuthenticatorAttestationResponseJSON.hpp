#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticatorAttestationResponseJSON
/// [`AuthenticatorAttestationResponseJSON`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAttestationResponseJSON)
class AuthenticatorAttestationResponseJSON : public emlite::Val {
  explicit AuthenticatorAttestationResponseJSON(Handle h) noexcept;
public:
    static AuthenticatorAttestationResponseJSON take_ownership(Handle h) noexcept;
    explicit AuthenticatorAttestationResponseJSON(const emlite::Val &val) noexcept;
    AuthenticatorAttestationResponseJSON() noexcept;
    [[nodiscard]] AuthenticatorAttestationResponseJSON clone() const noexcept;
    [[nodiscard]] jsbind::Any clientDataJSON() const;
    void clientDataJSON(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any authenticatorData() const;
    void authenticatorData(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> transports() const;
    void transports(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::Any publicKey() const;
    void publicKey(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any publicKeyAlgorithm() const;
    void publicKeyAlgorithm(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any attestationObject() const;
    void attestationObject(const jsbind::Any& value);
};

} // namespace webbind