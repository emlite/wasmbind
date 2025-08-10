#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type NavigationInterceptOptions
/// [`NavigationInterceptOptions`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationInterceptOptions)
class NavigationInterceptOptions : public emlite::Val {
  explicit NavigationInterceptOptions(Handle h) noexcept;
public:
    static NavigationInterceptOptions take_ownership(Handle h) noexcept;
    explicit NavigationInterceptOptions(const emlite::Val &val) noexcept;
    NavigationInterceptOptions() noexcept;
    [[nodiscard]] NavigationInterceptOptions clone() const noexcept;
    [[nodiscard]] jsbind::Function handler() const;
    void handler(const jsbind::Function& value);
    [[nodiscard]] NavigationFocusReset focusReset() const;
    void focusReset(const NavigationFocusReset& value);
    [[nodiscard]] NavigationScrollBehavior scroll() const;
    void scroll(const NavigationScrollBehavior& value);
};

} // namespace webbind