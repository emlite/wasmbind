#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityProviderWellKnown
/// [`IdentityProviderWellKnown`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProviderWellKnown)
class IdentityProviderWellKnown : public emlite::Val {
  explicit IdentityProviderWellKnown(Handle h) noexcept;
public:
    static IdentityProviderWellKnown take_ownership(Handle h) noexcept;
    explicit IdentityProviderWellKnown(const emlite::Val &val) noexcept;
    IdentityProviderWellKnown() noexcept;
    [[nodiscard]] IdentityProviderWellKnown clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::String> provider_urls() const;
    void provider_urls(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String accounts_endpoint() const;
    void accounts_endpoint(const jsbind::String& value);
    [[nodiscard]] jsbind::String login_url() const;
    void login_url(const jsbind::String& value);
};

} // namespace webbind