#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "NavigationOptions.hpp"

namespace webbind {

/// Dictionary type NavigationNavigateOptions
/// [`NavigationNavigateOptions`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationNavigateOptions)
class NavigationNavigateOptions : public NavigationOptions {
  explicit NavigationNavigateOptions(Handle h) noexcept;
public:
    static NavigationNavigateOptions take_ownership(Handle h) noexcept;
    explicit NavigationNavigateOptions(const emlite::Val &val) noexcept;
    NavigationNavigateOptions() noexcept;
    [[nodiscard]] NavigationNavigateOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any state() const;
    void state(const jsbind::Any& value);
    [[nodiscard]] NavigationHistoryBehavior history() const;
    void history(const NavigationHistoryBehavior& value);
};

} // namespace webbind