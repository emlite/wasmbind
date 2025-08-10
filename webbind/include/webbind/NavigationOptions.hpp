#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type NavigationOptions
class NavigationOptions : public emlite::Val {
  explicit NavigationOptions(Handle h) noexcept;
public:
    static NavigationOptions take_ownership(Handle h) noexcept;
    explicit NavigationOptions(const emlite::Val &val) noexcept;
    NavigationOptions() noexcept;
    [[nodiscard]] NavigationOptions clone() const noexcept;
    /// Getter of the `info` attribute.
    [[nodiscard]] jsbind::Any info() const;
    /// Setter of the `info` attribute.
    void info(const jsbind::Any& value);
};

} // namespace webbind