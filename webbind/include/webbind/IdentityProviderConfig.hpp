#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityProviderConfig
/// [`IdentityProviderConfig`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProviderConfig)
class IdentityProviderConfig : public emlite::Val {
  explicit IdentityProviderConfig(Handle h) noexcept;
public:
    static IdentityProviderConfig take_ownership(Handle h) noexcept;
    explicit IdentityProviderConfig(const emlite::Val &val) noexcept;
    IdentityProviderConfig() noexcept;
    [[nodiscard]] IdentityProviderConfig clone() const noexcept;
    [[nodiscard]] jsbind::String configURL() const;
    void configURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String clientId() const;
    void clientId(const jsbind::String& value);
};

} // namespace webbind