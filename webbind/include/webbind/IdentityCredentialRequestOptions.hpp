#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "IdentityProviderRequestOptions.hpp"

namespace webbind {

/// Dictionary type IdentityCredentialRequestOptions
/// [`IdentityCredentialRequestOptions`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredentialRequestOptions)
class IdentityCredentialRequestOptions : public emlite::Val {
  explicit IdentityCredentialRequestOptions(Handle h) noexcept;
public:
    static IdentityCredentialRequestOptions take_ownership(Handle h) noexcept;
    explicit IdentityCredentialRequestOptions(const emlite::Val &val) noexcept;
    IdentityCredentialRequestOptions() noexcept;
    [[nodiscard]] IdentityCredentialRequestOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<IdentityProviderRequestOptions> providers() const;
    void providers(const jsbind::TypedArray<IdentityProviderRequestOptions>& value);
    [[nodiscard]] IdentityCredentialRequestOptionsContext context() const;
    void context(const IdentityCredentialRequestOptionsContext& value);
    [[nodiscard]] IdentityCredentialRequestOptionsMode mode() const;
    void mode(const IdentityCredentialRequestOptionsMode& value);
};

} // namespace webbind