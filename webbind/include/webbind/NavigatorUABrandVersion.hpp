#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type NavigatorUABrandVersion
class NavigatorUABrandVersion : public emlite::Val {
  explicit NavigatorUABrandVersion(Handle h) noexcept;
public:
    static NavigatorUABrandVersion take_ownership(Handle h) noexcept;
    explicit NavigatorUABrandVersion(const emlite::Val &val) noexcept;
    NavigatorUABrandVersion() noexcept;
    [[nodiscard]] NavigatorUABrandVersion clone() const noexcept;
    /// Getter of the `brand` attribute.
    [[nodiscard]] jsbind::String brand() const;
    /// Setter of the `brand` attribute.
    void brand(const jsbind::String& value);
    /// Getter of the `version` attribute.
    [[nodiscard]] jsbind::String version() const;
    /// Setter of the `version` attribute.
    void version(const jsbind::String& value);
};

} // namespace webbind