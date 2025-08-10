#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class PublicKeyCredentialDescriptor;
class AuthenticationExtensionsClientInputs;

/// Dictionary type PublicKeyCredentialRequestOptions
class PublicKeyCredentialRequestOptions : public emlite::Val {
  explicit PublicKeyCredentialRequestOptions(Handle h) noexcept;
public:
    static PublicKeyCredentialRequestOptions take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialRequestOptions(const emlite::Val &val) noexcept;
    PublicKeyCredentialRequestOptions() noexcept;
    [[nodiscard]] PublicKeyCredentialRequestOptions clone() const noexcept;
    /// Getter of the `challenge` attribute.
    [[nodiscard]] jsbind::Any challenge() const;
    /// Setter of the `challenge` attribute.
    void challenge(const jsbind::Any& value);
    /// Getter of the `timeout` attribute.
    [[nodiscard]] unsigned long timeout() const;
    /// Setter of the `timeout` attribute.
    void timeout(unsigned long value);
    /// Getter of the `rpId` attribute.
    [[nodiscard]] jsbind::String rpId() const;
    /// Setter of the `rpId` attribute.
    void rpId(const jsbind::String& value);
    /// Getter of the `allowCredentials` attribute.
    [[nodiscard]] jsbind::TypedArray<PublicKeyCredentialDescriptor> allowCredentials() const;
    /// Setter of the `allowCredentials` attribute.
    void allowCredentials(const jsbind::TypedArray<PublicKeyCredentialDescriptor>& value);
    /// Getter of the `userVerification` attribute.
    [[nodiscard]] jsbind::String userVerification() const;
    /// Setter of the `userVerification` attribute.
    void userVerification(const jsbind::String& value);
    /// Getter of the `hints` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> hints() const;
    /// Setter of the `hints` attribute.
    void hints(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `extensions` attribute.
    [[nodiscard]] AuthenticationExtensionsClientInputs extensions() const;
    /// Setter of the `extensions` attribute.
    void extensions(const AuthenticationExtensionsClientInputs& value);
};

} // namespace webbind