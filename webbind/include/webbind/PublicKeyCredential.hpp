#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Credential.hpp"
#include "enums.hpp"

class AuthenticatorResponse;
class AuthenticationExtensionsClientOutputs;
class PublicKeyCredentialCreationOptions;
class PublicKeyCredentialCreationOptionsJSON;
class PublicKeyCredentialRequestOptions;
class PublicKeyCredentialRequestOptionsJSON;
class UnknownCredentialOptions;
class AllAcceptedCredentialsOptions;
class CurrentUserDetailsOptions;


class AuthenticationExtensionsClientOutputs : public emlite::Val {
  explicit AuthenticationExtensionsClientOutputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsClientOutputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsClientOutputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsClientOutputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsClientOutputs clone() const noexcept;
    [[nodiscard]] jsbind::Any largeBlob() const;
    void largeBlob(const jsbind::Any& value);
};

class PublicKeyCredentialCreationOptions : public emlite::Val {
  explicit PublicKeyCredentialCreationOptions(Handle h) noexcept;
public:
    static PublicKeyCredentialCreationOptions take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialCreationOptions(const emlite::Val &val) noexcept;
    PublicKeyCredentialCreationOptions() noexcept;
    [[nodiscard]] PublicKeyCredentialCreationOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any rp() const;
    void rp(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any user() const;
    void user(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any challenge() const;
    void challenge(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> pubKeyCredParams() const;
    void pubKeyCredParams(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] unsigned long timeout() const;
    void timeout(unsigned long value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> excludeCredentials() const;
    void excludeCredentials(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::Any authenticatorSelection() const;
    void authenticatorSelection(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> hints() const;
    void hints(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String attestation() const;
    void attestation(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> attestationFormats() const;
    void attestationFormats(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::Any extensions() const;
    void extensions(const jsbind::Any& value);
};

class PublicKeyCredentialCreationOptionsJSON : public emlite::Val {
  explicit PublicKeyCredentialCreationOptionsJSON(Handle h) noexcept;
public:
    static PublicKeyCredentialCreationOptionsJSON take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialCreationOptionsJSON(const emlite::Val &val) noexcept;
    PublicKeyCredentialCreationOptionsJSON() noexcept;
    [[nodiscard]] PublicKeyCredentialCreationOptionsJSON clone() const noexcept;
    [[nodiscard]] jsbind::Any rp() const;
    void rp(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any user() const;
    void user(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any challenge() const;
    void challenge(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> pubKeyCredParams() const;
    void pubKeyCredParams(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] unsigned long timeout() const;
    void timeout(unsigned long value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> excludeCredentials() const;
    void excludeCredentials(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::Any authenticatorSelection() const;
    void authenticatorSelection(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> hints() const;
    void hints(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String attestation() const;
    void attestation(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> attestationFormats() const;
    void attestationFormats(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::Any extensions() const;
    void extensions(const jsbind::Any& value);
};

class PublicKeyCredentialRequestOptions : public emlite::Val {
  explicit PublicKeyCredentialRequestOptions(Handle h) noexcept;
public:
    static PublicKeyCredentialRequestOptions take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialRequestOptions(const emlite::Val &val) noexcept;
    PublicKeyCredentialRequestOptions() noexcept;
    [[nodiscard]] PublicKeyCredentialRequestOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any challenge() const;
    void challenge(const jsbind::Any& value);
    [[nodiscard]] unsigned long timeout() const;
    void timeout(unsigned long value);
    [[nodiscard]] jsbind::String rpId() const;
    void rpId(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> allowCredentials() const;
    void allowCredentials(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::String userVerification() const;
    void userVerification(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> hints() const;
    void hints(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::Any extensions() const;
    void extensions(const jsbind::Any& value);
};

class PublicKeyCredentialRequestOptionsJSON : public emlite::Val {
  explicit PublicKeyCredentialRequestOptionsJSON(Handle h) noexcept;
public:
    static PublicKeyCredentialRequestOptionsJSON take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialRequestOptionsJSON(const emlite::Val &val) noexcept;
    PublicKeyCredentialRequestOptionsJSON() noexcept;
    [[nodiscard]] PublicKeyCredentialRequestOptionsJSON clone() const noexcept;
    [[nodiscard]] jsbind::Any challenge() const;
    void challenge(const jsbind::Any& value);
    [[nodiscard]] unsigned long timeout() const;
    void timeout(unsigned long value);
    [[nodiscard]] jsbind::String rpId() const;
    void rpId(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> allowCredentials() const;
    void allowCredentials(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::String userVerification() const;
    void userVerification(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> hints() const;
    void hints(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::Any extensions() const;
    void extensions(const jsbind::Any& value);
};

class UnknownCredentialOptions : public emlite::Val {
  explicit UnknownCredentialOptions(Handle h) noexcept;
public:
    static UnknownCredentialOptions take_ownership(Handle h) noexcept;
    explicit UnknownCredentialOptions(const emlite::Val &val) noexcept;
    UnknownCredentialOptions() noexcept;
    [[nodiscard]] UnknownCredentialOptions clone() const noexcept;
    [[nodiscard]] jsbind::String rpId() const;
    void rpId(const jsbind::String& value);
    [[nodiscard]] jsbind::Any credentialId() const;
    void credentialId(const jsbind::Any& value);
};

class AllAcceptedCredentialsOptions : public emlite::Val {
  explicit AllAcceptedCredentialsOptions(Handle h) noexcept;
public:
    static AllAcceptedCredentialsOptions take_ownership(Handle h) noexcept;
    explicit AllAcceptedCredentialsOptions(const emlite::Val &val) noexcept;
    AllAcceptedCredentialsOptions() noexcept;
    [[nodiscard]] AllAcceptedCredentialsOptions clone() const noexcept;
    [[nodiscard]] jsbind::String rpId() const;
    void rpId(const jsbind::String& value);
    [[nodiscard]] jsbind::Any userId() const;
    void userId(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> allAcceptedCredentialIds() const;
    void allAcceptedCredentialIds(const jsbind::TypedArray<jsbind::Any>& value);
};

class CurrentUserDetailsOptions : public emlite::Val {
  explicit CurrentUserDetailsOptions(Handle h) noexcept;
public:
    static CurrentUserDetailsOptions take_ownership(Handle h) noexcept;
    explicit CurrentUserDetailsOptions(const emlite::Val &val) noexcept;
    CurrentUserDetailsOptions() noexcept;
    [[nodiscard]] CurrentUserDetailsOptions clone() const noexcept;
    [[nodiscard]] jsbind::String rpId() const;
    void rpId(const jsbind::String& value);
    [[nodiscard]] jsbind::Any userId() const;
    void userId(const jsbind::Any& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String displayName() const;
    void displayName(const jsbind::String& value);
};

/// The PublicKeyCredential class.
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

