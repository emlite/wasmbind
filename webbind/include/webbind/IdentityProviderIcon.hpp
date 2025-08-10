#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityProviderIcon
class IdentityProviderIcon : public emlite::Val {
  explicit IdentityProviderIcon(Handle h) noexcept;
public:
    static IdentityProviderIcon take_ownership(Handle h) noexcept;
    explicit IdentityProviderIcon(const emlite::Val &val) noexcept;
    IdentityProviderIcon() noexcept;
    [[nodiscard]] IdentityProviderIcon clone() const noexcept;
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
    /// Getter of the `size` attribute.
    [[nodiscard]] unsigned long size() const;
    /// Setter of the `size` attribute.
    void size(unsigned long value);
};

} // namespace webbind