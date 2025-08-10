#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Credential.hpp"
#include "AuthenticationExtensionsClientOutputs.hpp"
#include "PublicKeyCredentialCreationOptions.hpp"
#include "PublicKeyCredentialCreationOptionsJSON.hpp"
#include "PublicKeyCredentialRequestOptions.hpp"
#include "PublicKeyCredentialRequestOptionsJSON.hpp"
#include "UnknownCredentialOptions.hpp"
#include "AllAcceptedCredentialsOptions.hpp"
#include "CurrentUserDetailsOptions.hpp"

namespace webbind {

class AuthenticatorResponse;

/// Interface PublicKeyCredential
/// [`PublicKeyCredential`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential)
class PublicKeyCredential : public Credential {
    explicit PublicKeyCredential(Handle h) noexcept;
public:
    explicit PublicKeyCredential(const emlite::Val &val) noexcept;
    static PublicKeyCredential take_ownership(Handle h) noexcept;
    [[nodiscard]] PublicKeyCredential clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `rawId` attribute.
    /// [`PublicKeyCredential.rawId`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential/rawId)
    [[nodiscard]] jsbind::ArrayBuffer rawId() const;
    /// Getter of the `response` attribute.
    /// [`PublicKeyCredential.response`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential/response)
    [[nodiscard]] AuthenticatorResponse response() const;
    /// Getter of the `authenticatorAttachment` attribute.
    /// [`PublicKeyCredential.authenticatorAttachment`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential/authenticatorAttachment)
    [[nodiscard]] jsbind::String authenticatorAttachment() const;
    /// The getClientExtensionResults method.
    /// [`PublicKeyCredential.getClientExtensionResults`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential/getClientExtensionResults)
    AuthenticationExtensionsClientOutputs getClientExtensionResults();
    /// The isConditionalMediationAvailable method.
    /// [`PublicKeyCredential.isConditionalMediationAvailable`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential/isConditionalMediationAvailable)
    static jsbind::Promise<bool> isConditionalMediationAvailable();
    /// The toJSON method.
    /// [`PublicKeyCredential.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential/toJSON)
    jsbind::Any toJSON();
    /// The isUserVerifyingPlatformAuthenticatorAvailable method.
    /// [`PublicKeyCredential.isUserVerifyingPlatformAuthenticatorAvailable`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential/isUserVerifyingPlatformAuthenticatorAvailable)
    static jsbind::Promise<bool> isUserVerifyingPlatformAuthenticatorAvailable();
    /// The getClientCapabilities method.
    /// [`PublicKeyCredential.getClientCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential/getClientCapabilities)
    static jsbind::Promise<jsbind::Any> getClientCapabilities();
    /// The parseCreationOptionsFromJSON method.
    /// [`PublicKeyCredential.parseCreationOptionsFromJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential/parseCreationOptionsFromJSON)
    static PublicKeyCredentialCreationOptions parseCreationOptionsFromJSON(const PublicKeyCredentialCreationOptionsJSON& options);
    /// The parseRequestOptionsFromJSON method.
    /// [`PublicKeyCredential.parseRequestOptionsFromJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential/parseRequestOptionsFromJSON)
    static PublicKeyCredentialRequestOptions parseRequestOptionsFromJSON(const PublicKeyCredentialRequestOptionsJSON& options);
    /// The signalUnknownCredential method.
    /// [`PublicKeyCredential.signalUnknownCredential`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential/signalUnknownCredential)
    static jsbind::Promise<jsbind::Undefined> signalUnknownCredential(const UnknownCredentialOptions& options);
    /// The signalAllAcceptedCredentials method.
    /// [`PublicKeyCredential.signalAllAcceptedCredentials`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential/signalAllAcceptedCredentials)
    static jsbind::Promise<jsbind::Undefined> signalAllAcceptedCredentials(const AllAcceptedCredentialsOptions& options);
    /// The signalCurrentUserDetails method.
    /// [`PublicKeyCredential.signalCurrentUserDetails`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential/signalCurrentUserDetails)
    static jsbind::Promise<jsbind::Undefined> signalCurrentUserDetails(const CurrentUserDetailsOptions& options);
};

} // namespace webbind