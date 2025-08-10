#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityProviderWellKnown
class IdentityProviderWellKnown : public emlite::Val {
  explicit IdentityProviderWellKnown(Handle h) noexcept;
public:
    static IdentityProviderWellKnown take_ownership(Handle h) noexcept;
    explicit IdentityProviderWellKnown(const emlite::Val &val) noexcept;
    IdentityProviderWellKnown() noexcept;
    [[nodiscard]] IdentityProviderWellKnown clone() const noexcept;
    /// Getter of the `provider_urls` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> provider_urls() const;
    /// Setter of the `provider_urls` attribute.
    void provider_urls(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `accounts_endpoint` attribute.
    [[nodiscard]] jsbind::String accounts_endpoint() const;
    /// Setter of the `accounts_endpoint` attribute.
    void accounts_endpoint(const jsbind::String& value);
    /// Getter of the `login_url` attribute.
    [[nodiscard]] jsbind::String login_url() const;
    /// Setter of the `login_url` attribute.
    void login_url(const jsbind::String& value);
};

} // namespace webbind