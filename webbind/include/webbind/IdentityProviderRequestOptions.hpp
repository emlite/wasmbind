#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "IdentityProviderConfig.hpp"

namespace webbind {

/// Dictionary type IdentityProviderRequestOptions
class IdentityProviderRequestOptions : public IdentityProviderConfig {
  explicit IdentityProviderRequestOptions(Handle h) noexcept;
public:
    static IdentityProviderRequestOptions take_ownership(Handle h) noexcept;
    explicit IdentityProviderRequestOptions(const emlite::Val &val) noexcept;
    IdentityProviderRequestOptions() noexcept;
    [[nodiscard]] IdentityProviderRequestOptions clone() const noexcept;
    /// Getter of the `loginHint` attribute.
    [[nodiscard]] jsbind::String loginHint() const;
    /// Setter of the `loginHint` attribute.
    void loginHint(const jsbind::String& value);
    /// Getter of the `domainHint` attribute.
    [[nodiscard]] jsbind::String domainHint() const;
    /// Setter of the `domainHint` attribute.
    void domainHint(const jsbind::String& value);
    /// Getter of the `fields` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> fields() const;
    /// Setter of the `fields` attribute.
    void fields(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `params` attribute.
    [[nodiscard]] jsbind::Any params() const;
    /// Setter of the `params` attribute.
    void params(const jsbind::Any& value);
};

} // namespace webbind