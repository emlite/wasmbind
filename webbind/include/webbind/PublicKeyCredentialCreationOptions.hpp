#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PublicKeyCredentialRpEntity.hpp"
#include "PublicKeyCredentialUserEntity.hpp"
#include "PublicKeyCredentialParameters.hpp"
#include "PublicKeyCredentialDescriptor.hpp"
#include "AuthenticatorSelectionCriteria.hpp"
#include "AuthenticationExtensionsClientInputs.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialCreationOptions
/// [`PublicKeyCredentialCreationOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredentialCreationOptions)
class PublicKeyCredentialCreationOptions : public emlite::Val {
  explicit PublicKeyCredentialCreationOptions(Handle h) noexcept;
public:
    static PublicKeyCredentialCreationOptions take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialCreationOptions(const emlite::Val &val) noexcept;
    PublicKeyCredentialCreationOptions() noexcept;
    [[nodiscard]] PublicKeyCredentialCreationOptions clone() const noexcept;
    [[nodiscard]] PublicKeyCredentialRpEntity rp() const;
    void rp(const PublicKeyCredentialRpEntity& value);
    [[nodiscard]] PublicKeyCredentialUserEntity user() const;
    void user(const PublicKeyCredentialUserEntity& value);
    [[nodiscard]] jsbind::Any challenge() const;
    void challenge(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<PublicKeyCredentialParameters> pubKeyCredParams() const;
    void pubKeyCredParams(const jsbind::TypedArray<PublicKeyCredentialParameters>& value);
    [[nodiscard]] unsigned long timeout() const;
    void timeout(unsigned long value);
    [[nodiscard]] jsbind::TypedArray<PublicKeyCredentialDescriptor> excludeCredentials() const;
    void excludeCredentials(const jsbind::TypedArray<PublicKeyCredentialDescriptor>& value);
    [[nodiscard]] AuthenticatorSelectionCriteria authenticatorSelection() const;
    void authenticatorSelection(const AuthenticatorSelectionCriteria& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> hints() const;
    void hints(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String attestation() const;
    void attestation(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> attestationFormats() const;
    void attestationFormats(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] AuthenticationExtensionsClientInputs extensions() const;
    void extensions(const AuthenticationExtensionsClientInputs& value);
};

} // namespace webbind