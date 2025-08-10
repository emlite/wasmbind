#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "NavigationOptions.hpp"

namespace webbind {

/// Dictionary type NavigationNavigateOptions
class NavigationNavigateOptions : public NavigationOptions {
  explicit NavigationNavigateOptions(Handle h) noexcept;
public:
    static NavigationNavigateOptions take_ownership(Handle h) noexcept;
    explicit NavigationNavigateOptions(const emlite::Val &val) noexcept;
    NavigationNavigateOptions() noexcept;
    [[nodiscard]] NavigationNavigateOptions clone() const noexcept;
    /// Getter of the `state` attribute.
    [[nodiscard]] jsbind::Any state() const;
    /// Setter of the `state` attribute.
    void state(const jsbind::Any& value);
    /// Getter of the `history` attribute.
    [[nodiscard]] NavigationHistoryBehavior history() const;
    /// Setter of the `history` attribute.
    void history(const NavigationHistoryBehavior& value);
};

} // namespace webbind