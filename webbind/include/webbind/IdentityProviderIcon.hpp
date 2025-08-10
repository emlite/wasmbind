#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityProviderIcon
/// [`IdentityProviderIcon`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProviderIcon)
class IdentityProviderIcon : public emlite::Val {
  explicit IdentityProviderIcon(Handle h) noexcept;
public:
    static IdentityProviderIcon take_ownership(Handle h) noexcept;
    explicit IdentityProviderIcon(const emlite::Val &val) noexcept;
    IdentityProviderIcon() noexcept;
    [[nodiscard]] IdentityProviderIcon clone() const noexcept;
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
    [[nodiscard]] unsigned long size() const;
    void size(unsigned long value);
};

} // namespace webbind