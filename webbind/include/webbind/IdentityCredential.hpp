#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Credential.hpp"

namespace webbind {

class IdentityCredentialDisconnectOptions;

/// Interface IdentityCredential
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
    /// [`IdentityCredential.token`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredential/token)
    /// [`IdentityCredential.token`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredential/token)
    [[nodiscard]] jsbind::String token() const;
    /// [`IdentityCredential.isAutoSelected`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredential/isAutoSelected)
    /// [`IdentityCredential.isAutoSelected`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredential/isAutoSelected)
    [[nodiscard]] bool isAutoSelected() const;
    /// [`IdentityCredential.configURL`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredential/configURL)
    /// [`IdentityCredential.configURL`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredential/configURL)
    [[nodiscard]] jsbind::String configURL() const;
};

} // namespace webbind