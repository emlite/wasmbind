#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class PublicKeyCredentialRpEntity;
class PublicKeyCredentialUserEntity;
class PublicKeyCredentialParameters;
class PublicKeyCredentialDescriptor;
class AuthenticatorSelectionCriteria;
class AuthenticationExtensionsClientInputs;

/// Dictionary type PublicKeyCredentialCreationOptions
class PublicKeyCredentialCreationOptions : public emlite::Val {
  explicit PublicKeyCredentialCreationOptions(Handle h) noexcept;
public:
    static PublicKeyCredentialCreationOptions take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialCreationOptions(const emlite::Val &val) noexcept;
    PublicKeyCredentialCreationOptions() noexcept;
    [[nodiscard]] PublicKeyCredentialCreationOptions clone() const noexcept;
    /// Getter of the `rp` attribute.
    [[nodiscard]] PublicKeyCredentialRpEntity rp() const;
    /// Setter of the `rp` attribute.
    void rp(const PublicKeyCredentialRpEntity& value);
    /// Getter of the `user` attribute.
    [[nodiscard]] PublicKeyCredentialUserEntity user() const;
    /// Setter of the `user` attribute.
    void user(const PublicKeyCredentialUserEntity& value);
    /// Getter of the `challenge` attribute.
    [[nodiscard]] jsbind::Any challenge() const;
    /// Setter of the `challenge` attribute.
    void challenge(const jsbind::Any& value);
    /// Getter of the `pubKeyCredParams` attribute.
    [[nodiscard]] jsbind::TypedArray<PublicKeyCredentialParameters> pubKeyCredParams() const;
    /// Setter of the `pubKeyCredParams` attribute.
    void pubKeyCredParams(const jsbind::TypedArray<PublicKeyCredentialParameters>& value);
    /// Getter of the `timeout` attribute.
    [[nodiscard]] unsigned long timeout() const;
    /// Setter of the `timeout` attribute.
    void timeout(unsigned long value);
    /// Getter of the `excludeCredentials` attribute.
    [[nodiscard]] jsbind::TypedArray<PublicKeyCredentialDescriptor> excludeCredentials() const;
    /// Setter of the `excludeCredentials` attribute.
    void excludeCredentials(const jsbind::TypedArray<PublicKeyCredentialDescriptor>& value);
    /// Getter of the `authenticatorSelection` attribute.
    [[nodiscard]] AuthenticatorSelectionCriteria authenticatorSelection() const;
    /// Setter of the `authenticatorSelection` attribute.
    void authenticatorSelection(const AuthenticatorSelectionCriteria& value);
    /// Getter of the `hints` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> hints() const;
    /// Setter of the `hints` attribute.
    void hints(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `attestation` attribute.
    [[nodiscard]] jsbind::String attestation() const;
    /// Setter of the `attestation` attribute.
    void attestation(const jsbind::String& value);
    /// Getter of the `attestationFormats` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> attestationFormats() const;
    /// Setter of the `attestationFormats` attribute.
    void attestationFormats(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `extensions` attribute.
    [[nodiscard]] AuthenticationExtensionsClientInputs extensions() const;
    /// Setter of the `extensions` attribute.
    void extensions(const AuthenticationExtensionsClientInputs& value);
};

} // namespace webbind