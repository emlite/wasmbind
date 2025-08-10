#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "IdentityProviderRequestOptions.hpp"

namespace webbind {

/// Dictionary type IdentityCredentialRequestOptions
class IdentityCredentialRequestOptions : public emlite::Val {
  explicit IdentityCredentialRequestOptions(Handle h) noexcept;
public:
    static IdentityCredentialRequestOptions take_ownership(Handle h) noexcept;
    explicit IdentityCredentialRequestOptions(const emlite::Val &val) noexcept;
    IdentityCredentialRequestOptions() noexcept;
    [[nodiscard]] IdentityCredentialRequestOptions clone() const noexcept;
    /// Getter of the `providers` attribute.
    [[nodiscard]] jsbind::TypedArray<IdentityProviderRequestOptions> providers() const;
    /// Setter of the `providers` attribute.
    void providers(const jsbind::TypedArray<IdentityProviderRequestOptions>& value);
    /// Getter of the `context` attribute.
    [[nodiscard]] IdentityCredentialRequestOptionsContext context() const;
    /// Setter of the `context` attribute.
    void context(const IdentityCredentialRequestOptionsContext& value);
    /// Getter of the `mode` attribute.
    [[nodiscard]] IdentityCredentialRequestOptionsMode mode() const;
    /// Setter of the `mode` attribute.
    void mode(const IdentityCredentialRequestOptionsMode& value);
};

} // namespace webbind