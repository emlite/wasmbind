#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "NavigationOptions.hpp"

namespace webbind {

/// Dictionary type NavigationReloadOptions
class NavigationReloadOptions : public NavigationOptions {
  explicit NavigationReloadOptions(Handle h) noexcept;
public:
    static NavigationReloadOptions take_ownership(Handle h) noexcept;
    explicit NavigationReloadOptions(const emlite::Val &val) noexcept;
    NavigationReloadOptions() noexcept;
    [[nodiscard]] NavigationReloadOptions clone() const noexcept;
    /// Getter of the `state` attribute.
    [[nodiscard]] jsbind::Any state() const;
    /// Setter of the `state` attribute.
    void state(const jsbind::Any& value);
};

} // namespace webbind