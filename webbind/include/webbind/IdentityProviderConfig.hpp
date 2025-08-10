#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityProviderConfig
class IdentityProviderConfig : public emlite::Val {
  explicit IdentityProviderConfig(Handle h) noexcept;
public:
    static IdentityProviderConfig take_ownership(Handle h) noexcept;
    explicit IdentityProviderConfig(const emlite::Val &val) noexcept;
    IdentityProviderConfig() noexcept;
    [[nodiscard]] IdentityProviderConfig clone() const noexcept;
    /// Getter of the `configURL` attribute.
    [[nodiscard]] jsbind::String configURL() const;
    /// Setter of the `configURL` attribute.
    void configURL(const jsbind::String& value);
    /// Getter of the `clientId` attribute.
    [[nodiscard]] jsbind::String clientId() const;
    /// Setter of the `clientId` attribute.
    void clientId(const jsbind::String& value);
};

} // namespace webbind