#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "NavigationOptions.hpp"

namespace webbind {

/// Dictionary type NavigationReloadOptions
/// [`NavigationReloadOptions`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationReloadOptions)
class NavigationReloadOptions : public NavigationOptions {
  explicit NavigationReloadOptions(Handle h) noexcept;
public:
    static NavigationReloadOptions take_ownership(Handle h) noexcept;
    explicit NavigationReloadOptions(const emlite::Val &val) noexcept;
    NavigationReloadOptions() noexcept;
    [[nodiscard]] NavigationReloadOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any state() const;
    void state(const jsbind::Any& value);
};

} // namespace webbind