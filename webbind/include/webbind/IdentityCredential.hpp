#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Credential.hpp"
#include "enums.hpp"

class IdentityCredentialDisconnectOptions;


class IdentityCredentialDisconnectOptions : public emlite::Val {
  explicit IdentityCredentialDisconnectOptions(Handle h) noexcept;
public:
    static IdentityCredentialDisconnectOptions take_ownership(Handle h) noexcept;
    explicit IdentityCredentialDisconnectOptions(const emlite::Val &val) noexcept;
    IdentityCredentialDisconnectOptions() noexcept;
    [[nodiscard]] IdentityCredentialDisconnectOptions clone() const noexcept;
    [[nodiscard]] jsbind::String accountHint() const;
    void accountHint(const jsbind::String& value);
};

/// The IdentityCredential class.
/// [`IdentityCredential`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredential)
class IdentityCredential : public Credential {
    explicit IdentityCredential(Handle h) noexcept;

public:
    explicit IdentityCredential(const emlite::Val &val) noexcept;
    static IdentityCredential take_ownership(Handle h) noexcept;

    [[nodiscard]] IdentityCredential clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The disconnect method.
    /// [`IdentityCredential.disconnect`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredential/disconnect)
    static jsbind::Promise<jsbind::Undefined> disconnect(const IdentityCredentialDisconnectOptions& options);
    /// Getter of the `token` attribute.
    /// [`IdentityCredential.token`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredential/token)
    [[nodiscard]] jsbind::String token() const;
    /// Getter of the `isAutoSelected` attribute.
    /// [`IdentityCredential.isAutoSelected`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredential/isAutoSelected)
    [[nodiscard]] bool isAutoSelected() const;
    /// Getter of the `configURL` attribute.
    /// [`IdentityCredential.configURL`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredential/configURL)
    [[nodiscard]] jsbind::String configURL() const;
};

