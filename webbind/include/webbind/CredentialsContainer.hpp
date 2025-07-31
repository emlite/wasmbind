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
    [[nodiscard]] CredentialRequestOptions clone() const noexcept;
    [[nodiscard]] PublicKeyCredentialRequestOptions publicKey() const;
    void publicKey(const PublicKeyCredentialRequestOptions& value);
};

class CredentialCreationOptions : public emlite::Val {
  explicit CredentialCreationOptions(Handle h) noexcept;
public:
    static CredentialCreationOptions take_ownership(Handle h) noexcept;
    explicit CredentialCreationOptions(const emlite::Val &val) noexcept;
    CredentialCreationOptions() noexcept;
    [[nodiscard]] CredentialCreationOptions clone() const noexcept;
    [[nodiscard]] PublicKeyCredentialCreationOptions publicKey() const;
    void publicKey(const PublicKeyCredentialCreationOptions& value);
};

/// The CredentialsContainer class.
/// [`CredentialsContainer`](https://developer.mozilla.org/en-US/docs/Web/API/CredentialsContainer)
class CredentialsContainer : public emlite::Val {
    explicit CredentialsContainer(Handle h) noexcept;

public:
    explicit CredentialsContainer(const emlite::Val &val) noexcept;
    static CredentialsContainer take_ownership(Handle h) noexcept;

    [[nodiscard]] CredentialsContainer clone() const noexcept;
    /// The get method.
    /// [`CredentialsContainer.get`](https://developer.mozilla.org/en-US/docs/Web/API/CredentialsContainer/get)
    jsbind::Promise<Credential> get();
    /// The get method.
    /// [`CredentialsContainer.get`](https://developer.mozilla.org/en-US/docs/Web/API/CredentialsContainer/get)
    jsbind::Promise<Credential> get(const CredentialRequestOptions& options);
    /// The store method.
    /// [`CredentialsContainer.store`](https://developer.mozilla.org/en-US/docs/Web/API/CredentialsContainer/store)
    jsbind::Promise<jsbind::Undefined> store(const Credential& credential);
    /// The create method.
    /// [`CredentialsContainer.create`](https://developer.mozilla.org/en-US/docs/Web/API/CredentialsContainer/create)
    jsbind::Promise<Credential> create();
    /// The create method.
    /// [`CredentialsContainer.create`](https://developer.mozilla.org/en-US/docs/Web/API/CredentialsContainer/create)
    jsbind::Promise<Credential> create(const CredentialCreationOptions& options);
    /// The preventSilentAccess method.
    /// [`CredentialsContainer.preventSilentAccess`](https://developer.mozilla.org/en-US/docs/Web/API/CredentialsContainer/preventSilentAccess)
    jsbind::Promise<jsbind::Undefined> preventSilentAccess();
};

