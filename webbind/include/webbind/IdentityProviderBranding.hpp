#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "IdentityProviderIcon.hpp"

namespace webbind {

/// Dictionary type IdentityProviderBranding
class IdentityProviderBranding : public emlite::Val {
  explicit IdentityProviderBranding(Handle h) noexcept;
public:
    static IdentityProviderBranding take_ownership(Handle h) noexcept;
    explicit IdentityProviderBranding(const emlite::Val &val) noexcept;
    IdentityProviderBranding() noexcept;
    [[nodiscard]] IdentityProviderBranding clone() const noexcept;
    /// Getter of the `background_color` attribute.
    [[nodiscard]] jsbind::String background_color() const;
    /// Setter of the `background_color` attribute.
    void background_color(const jsbind::String& value);
    /// Getter of the `color` attribute.
    [[nodiscard]] jsbind::String color() const;
    /// Setter of the `color` attribute.
    void color(const jsbind::String& value);
    /// Getter of the `icons` attribute.
    [[nodiscard]] jsbind::TypedArray<IdentityProviderIcon> icons() const;
    /// Setter of the `icons` attribute.
    void icons(const jsbind::TypedArray<IdentityProviderIcon>& value);
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
};

} // namespace webbind