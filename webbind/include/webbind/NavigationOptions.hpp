#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type NavigationOptions
/// [`NavigationOptions`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationOptions)
class NavigationOptions : public emlite::Val {
  explicit NavigationOptions(Handle h) noexcept;
public:
    static NavigationOptions take_ownership(Handle h) noexcept;
    explicit NavigationOptions(const emlite::Val &val) noexcept;
    NavigationOptions() noexcept;
    [[nodiscard]] NavigationOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any info() const;
    void info(const jsbind::Any& value);
};

} // namespace webbind