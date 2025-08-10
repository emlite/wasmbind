#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DOMException.hpp"

namespace webbind {

class IdentityCredentialErrorInit;

/// Interface IdentityCredentialError
/// [`IdentityCredentialError`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredentialError)
class IdentityCredentialError : public DOMException {
    explicit IdentityCredentialError(Handle h) noexcept;
public:
    explicit IdentityCredentialError(const emlite::Val &val) noexcept;
    static IdentityCredentialError take_ownership(Handle h) noexcept;
    [[nodiscard]] IdentityCredentialError clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new IdentityCredentialError(..)` constructor, creating a new IdentityCredentialError instance
    IdentityCredentialError();
    /// The `new IdentityCredentialError(..)` constructor, creating a new IdentityCredentialError instance
    IdentityCredentialError(const jsbind::String& message);
    /// The `new IdentityCredentialError(..)` constructor, creating a new IdentityCredentialError instance
    IdentityCredentialError(const jsbind::String& message, const IdentityCredentialErrorInit& options);
    /// [`IdentityCredentialError.error`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredentialError/error)
    /// [`IdentityCredentialError.error`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredentialError/error)
    [[nodiscard]] jsbind::String error() const;
    /// [`IdentityCredentialError.url`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredentialError/url)
    /// [`IdentityCredentialError.url`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredentialError/url)
    [[nodiscard]] jsbind::String url() const;
};

} // namespace webbind