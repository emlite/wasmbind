#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CredentialRequestOptions.hpp"
#include "CredentialCreationOptions.hpp"

namespace webbind {

class Credential;

/// Interface CredentialsContainer
/// [`CredentialsContainer`](https://developer.mozilla.org/en-US/docs/Web/API/CredentialsContainer)
class CredentialsContainer : public emlite::Val {
    explicit CredentialsContainer(Handle h) noexcept;
public:
    explicit CredentialsContainer(const emlite::Val &val) noexcept;
    static CredentialsContainer take_ownership(Handle h) noexcept;
    [[nodiscard]] CredentialsContainer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
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

} // namespace webbind