#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "IdentityProviderConfig.hpp"

namespace webbind {

/// Dictionary type IdentityProviderRequestOptions
/// [`IdentityProviderRequestOptions`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProviderRequestOptions)
class IdentityProviderRequestOptions : public IdentityProviderConfig {
  explicit IdentityProviderRequestOptions(Handle h) noexcept;
public:
    static IdentityProviderRequestOptions take_ownership(Handle h) noexcept;
    explicit IdentityProviderRequestOptions(const emlite::Val &val) noexcept;
    IdentityProviderRequestOptions() noexcept;
    [[nodiscard]] IdentityProviderRequestOptions clone() const noexcept;
    [[nodiscard]] jsbind::String nonce() const;
    void nonce(const jsbind::String& value);
    [[nodiscard]] jsbind::String loginHint() const;
    void loginHint(const jsbind::String& value);
    [[nodiscard]] jsbind::String domainHint() const;
    void domainHint(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> fields() const;
    void fields(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::Any params() const;
    void params(const jsbind::Any& value);
};

} // namespace webbind