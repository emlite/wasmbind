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
    AuthenticationExtensionsClientOutputs clone() const noexcept;
    jsbind::Any largeBlob() const;
    void largeBlob(const jsbind::Any& value);
};

class PublicKeyCredentialCreationOptions : public emlite::Val {
  explicit PublicKeyCredentialCreationOptions(Handle h) noexcept;
public:
    static PublicKeyCredentialCreationOptions take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialCreationOptions(const emlite::Val &val) noexcept;
    PublicKeyCredentialCreationOptions() noexcept;
    PublicKeyCredentialCreationOptions clone() const noexcept;
    jsbind::Any rp() const;
    void rp(const jsbind::Any& value);
    jsbind::Any user() const;
    void user(const jsbind::Any& value);
    jsbind::Any challenge() const;
    void challenge(const jsbind::Any& value);
    jsbind::Sequence<jsbind::Any> pubKeyCredParams() const;
    void pubKeyCredParams(const jsbind::Sequence<jsbind::Any>& value);
    unsigned long timeout() const;
    void timeout(unsigned long value);
    jsbind::Sequence<jsbind::Any> excludeCredentials() const;
    void excludeCredentials(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Any authenticatorSelection() const;
    void authenticatorSelection(const jsbind::Any& value);
    jsbind::Sequence<jsbind::DOMString> hints() const;
    void hints(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::DOMString attestation() const;
    void attestation(const jsbind::DOMString& value);
    jsbind::Sequence<jsbind::DOMString> attestationFormats() const;
    void attestationFormats(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::Any extensions() const;
    void extensions(const jsbind::Any& value);
};

class PublicKeyCredentialCreationOptionsJSON : public emlite::Val {
  explicit PublicKeyCredentialCreationOptionsJSON(Handle h) noexcept;
public:
    static PublicKeyCredentialCreationOptionsJSON take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialCreationOptionsJSON(const emlite::Val &val) noexcept;
    PublicKeyCredentialCreationOptionsJSON() noexcept;
    PublicKeyCredentialCreationOptionsJSON clone() const noexcept;
    jsbind::Any rp() const;
    void rp(const jsbind::Any& value);
    jsbind::Any user() const;
    void user(const jsbind::Any& value);
    jsbind::Any challenge() const;
    void challenge(const jsbind::Any& value);
    jsbind::Sequence<jsbind::Any> pubKeyCredParams() const;
    void pubKeyCredParams(const jsbind::Sequence<jsbind::Any>& value);
    unsigned long timeout() const;
    void timeout(unsigned long value);
    jsbind::Sequence<jsbind::Any> excludeCredentials() const;
    void excludeCredentials(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Any authenticatorSelection() const;
    void authenticatorSelection(const jsbind::Any& value);
    jsbind::Sequence<jsbind::DOMString> hints() const;
    void hints(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::DOMString attestation() const;
    void attestation(const jsbind::DOMString& value);
    jsbind::Sequence<jsbind::DOMString> attestationFormats() const;
    void attestationFormats(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::Any extensions() const;
    void extensions(const jsbind::Any& value);
};

class PublicKeyCredentialRequestOptions : public emlite::Val {
  explicit PublicKeyCredentialRequestOptions(Handle h) noexcept;
public:
    static PublicKeyCredentialRequestOptions take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialRequestOptions(const emlite::Val &val) noexcept;
    PublicKeyCredentialRequestOptions() noexcept;
    PublicKeyCredentialRequestOptions clone() const noexcept;
    jsbind::Any challenge() const;
    void challenge(const jsbind::Any& value);
    unsigned long timeout() const;
    void timeout(unsigned long value);
    jsbind::DOMString rpId() const;
    void rpId(const jsbind::DOMString& value);
    jsbind::Sequence<jsbind::Any> allowCredentials() const;
    void allowCredentials(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::DOMString userVerification() const;
    void userVerification(const jsbind::DOMString& value);
    jsbind::Sequence<jsbind::DOMString> hints() const;
    void hints(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::Any extensions() const;
    void extensions(const jsbind::Any& value);
};

class PublicKeyCredentialRequestOptionsJSON : public emlite::Val {
  explicit PublicKeyCredentialRequestOptionsJSON(Handle h) noexcept;
public:
    static PublicKeyCredentialRequestOptionsJSON take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialRequestOptionsJSON(const emlite::Val &val) noexcept;
    PublicKeyCredentialRequestOptionsJSON() noexcept;
    PublicKeyCredentialRequestOptionsJSON clone() const noexcept;
    jsbind::Any challenge() const;
    void challenge(const jsbind::Any& value);
    unsigned long timeout() const;
    void timeout(unsigned long value);
    jsbind::DOMString rpId() const;
    void rpId(const jsbind::DOMString& value);
    jsbind::Sequence<jsbind::Any> allowCredentials() const;
    void allowCredentials(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::DOMString userVerification() const;
    void userVerification(const jsbind::DOMString& value);
    jsbind::Sequence<jsbind::DOMString> hints() const;
    void hints(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::Any extensions() const;
    void extensions(const jsbind::Any& value);
};

class UnknownCredentialOptions : public emlite::Val {
  explicit UnknownCredentialOptions(Handle h) noexcept;
public:
    static UnknownCredentialOptions take_ownership(Handle h) noexcept;
    explicit UnknownCredentialOptions(const emlite::Val &val) noexcept;
    UnknownCredentialOptions() noexcept;
    UnknownCredentialOptions clone() const noexcept;
    jsbind::DOMString rpId() const;
    void rpId(const jsbind::DOMString& value);
    jsbind::Any credentialId() const;
    void credentialId(const jsbind::Any& value);
};

class AllAcceptedCredentialsOptions : public emlite::Val {
  explicit AllAcceptedCredentialsOptions(Handle h) noexcept;
public:
    static AllAcceptedCredentialsOptions take_ownership(Handle h) noexcept;
    explicit AllAcceptedCredentialsOptions(const emlite::Val &val) noexcept;
    AllAcceptedCredentialsOptions() noexcept;
    AllAcceptedCredentialsOptions clone() const noexcept;
    jsbind::DOMString rpId() const;
    void rpId(const jsbind::DOMString& value);
    jsbind::Any userId() const;
    void userId(const jsbind::Any& value);
    jsbind::Sequence<jsbind::Any> allAcceptedCredentialIds() const;
    void allAcceptedCredentialIds(const jsbind::Sequence<jsbind::Any>& value);
};

class CurrentUserDetailsOptions : public emlite::Val {
  explicit CurrentUserDetailsOptions(Handle h) noexcept;
public:
    static CurrentUserDetailsOptions take_ownership(Handle h) noexcept;
    explicit CurrentUserDetailsOptions(const emlite::Val &val) noexcept;
    CurrentUserDetailsOptions() noexcept;
    CurrentUserDetailsOptions clone() const noexcept;
    jsbind::DOMString rpId() const;
    void rpId(const jsbind::DOMString& value);
    jsbind::Any userId() const;
    void userId(const jsbind::Any& value);
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    jsbind::DOMString displayName() const;
    void displayName(const jsbind::DOMString& value);
};

class PublicKeyCredential : public Credential {
    explicit PublicKeyCredential(Handle h) noexcept;

public:
    explicit PublicKeyCredential(const emlite::Val &val) noexcept;
    static PublicKeyCredential take_ownership(Handle h) noexcept;

    PublicKeyCredential clone() const noexcept;
    jsbind::ArrayBuffer rawId() const;
    AuthenticatorResponse response() const;
    jsbind::DOMString authenticatorAttachment() const;
    AuthenticationExtensionsClientOutputs getClientExtensionResults();
    static jsbind::Promise<bool> isConditionalMediationAvailable();
    jsbind::Any toJSON();
    static jsbind::Promise<bool> isUserVerifyingPlatformAuthenticatorAvailable();
    static jsbind::Promise<jsbind::Any> getClientCapabilities();
    static PublicKeyCredentialCreationOptions parseCreationOptionsFromJSON(const PublicKeyCredentialCreationOptionsJSON& options);
    static PublicKeyCredentialRequestOptions parseRequestOptionsFromJSON(const PublicKeyCredentialRequestOptionsJSON& options);
    static jsbind::Promise<jsbind::Undefined> signalUnknownCredential(const UnknownCredentialOptions& options);
    static jsbind::Promise<jsbind::Undefined> signalAllAcceptedCredentials(const AllAcceptedCredentialsOptions& options);
    static jsbind::Promise<jsbind::Undefined> signalCurrentUserDetails(const CurrentUserDetailsOptions& options);
};

