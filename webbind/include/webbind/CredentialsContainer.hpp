#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Credential;
class CredentialRequestOptions;
class CredentialCreationOptions;
class PublicKeyCredentialCreationOptions;
class PublicKeyCredential;
class PublicKeyCredentialRequestOptions;


class CredentialRequestOptions : public emlite::Val {
  explicit CredentialRequestOptions(Handle h) noexcept;
public:
    static CredentialRequestOptions take_ownership(Handle h) noexcept;
    explicit CredentialRequestOptions(const emlite::Val &val) noexcept;
    CredentialRequestOptions() noexcept;
    CredentialRequestOptions clone() const noexcept;
    PublicKeyCredentialRequestOptions publicKey() const;
    void publicKey(const PublicKeyCredentialRequestOptions& value);
};

class CredentialCreationOptions : public emlite::Val {
  explicit CredentialCreationOptions(Handle h) noexcept;
public:
    static CredentialCreationOptions take_ownership(Handle h) noexcept;
    explicit CredentialCreationOptions(const emlite::Val &val) noexcept;
    CredentialCreationOptions() noexcept;
    CredentialCreationOptions clone() const noexcept;
    PublicKeyCredentialCreationOptions publicKey() const;
    void publicKey(const PublicKeyCredentialCreationOptions& value);
};

class CredentialsContainer : public emlite::Val {
    explicit CredentialsContainer(Handle h) noexcept;

public:
    explicit CredentialsContainer(const emlite::Val &val) noexcept;
    static CredentialsContainer take_ownership(Handle h) noexcept;

    CredentialsContainer clone() const noexcept;
    jsbind::Promise get(const CredentialRequestOptions& options);
    jsbind::Promise store(const Credential& credential);
    jsbind::Promise create(const CredentialCreationOptions& options);
    jsbind::Promise preventSilentAccess();
};

