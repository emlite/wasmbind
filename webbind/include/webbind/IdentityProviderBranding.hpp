#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "IdentityProviderIcon.hpp"

namespace webbind {

/// Dictionary type IdentityProviderBranding
/// [`IdentityProviderBranding`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProviderBranding)
class IdentityProviderBranding : public emlite::Val {
  explicit IdentityProviderBranding(Handle h) noexcept;
public:
    static IdentityProviderBranding take_ownership(Handle h) noexcept;
    explicit IdentityProviderBranding(const emlite::Val &val) noexcept;
    IdentityProviderBranding() noexcept;
    [[nodiscard]] IdentityProviderBranding clone() const noexcept;
    [[nodiscard]] jsbind::String background_color() const;
    void background_color(const jsbind::String& value);
    [[nodiscard]] jsbind::String color() const;
    void color(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<IdentityProviderIcon> icons() const;
    void icons(const jsbind::TypedArray<IdentityProviderIcon>& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
};

} // namespace webbind