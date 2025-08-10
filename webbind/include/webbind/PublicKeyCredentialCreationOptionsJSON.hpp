#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PublicKeyCredentialRpEntity.hpp"
#include "PublicKeyCredentialUserEntityJSON.hpp"
#include "PublicKeyCredentialParameters.hpp"
#include "PublicKeyCredentialDescriptorJSON.hpp"
#include "AuthenticatorSelectionCriteria.hpp"
#include "AuthenticationExtensionsClientInputsJSON.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialCreationOptionsJSON
/// [`PublicKeyCredentialCreationOptionsJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredentialCreationOptionsJSON)
class PublicKeyCredentialCreationOptionsJSON : public emlite::Val {
  explicit PublicKeyCredentialCreationOptionsJSON(Handle h) noexcept;
public:
    static PublicKeyCredentialCreationOptionsJSON take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialCreationOptionsJSON(const emlite::Val &val) noexcept;
    PublicKeyCredentialCreationOptionsJSON() noexcept;
    [[nodiscard]] PublicKeyCredentialCreationOptionsJSON clone() const noexcept;
    [[nodiscard]] PublicKeyCredentialRpEntity rp() const;
    void rp(const PublicKeyCredentialRpEntity& value);
    [[nodiscard]] PublicKeyCredentialUserEntityJSON user() const;
    void user(const PublicKeyCredentialUserEntityJSON& value);
    [[nodiscard]] jsbind::Any challenge() const;
    void challenge(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<PublicKeyCredentialParameters> pubKeyCredParams() const;
    void pubKeyCredParams(const jsbind::TypedArray<PublicKeyCredentialParameters>& value);
    [[nodiscard]] unsigned long timeout() const;
    void timeout(unsigned long value);
    [[nodiscard]] jsbind::TypedArray<PublicKeyCredentialDescriptorJSON> excludeCredentials() const;
    void excludeCredentials(const jsbind::TypedArray<PublicKeyCredentialDescriptorJSON>& value);
    [[nodiscard]] AuthenticatorSelectionCriteria authenticatorSelection() const;
    void authenticatorSelection(const AuthenticatorSelectionCriteria& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> hints() const;
    void hints(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String attestation() const;
    void attestation(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> attestationFormats() const;
    void attestationFormats(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] AuthenticationExtensionsClientInputsJSON extensions() const;
    void extensions(const AuthenticationExtensionsClientInputsJSON& value);
};

} // namespace webbind