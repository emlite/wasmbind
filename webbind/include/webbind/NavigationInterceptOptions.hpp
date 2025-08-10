#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type NavigationInterceptOptions
class NavigationInterceptOptions : public emlite::Val {
  explicit NavigationInterceptOptions(Handle h) noexcept;
public:
    static NavigationInterceptOptions take_ownership(Handle h) noexcept;
    explicit NavigationInterceptOptions(const emlite::Val &val) noexcept;
    NavigationInterceptOptions() noexcept;
    [[nodiscard]] NavigationInterceptOptions clone() const noexcept;
    /// Getter of the `handler` attribute.
    [[nodiscard]] jsbind::Function handler() const;
    /// Setter of the `handler` attribute.
    void handler(const jsbind::Function& value);
    /// Getter of the `focusReset` attribute.
    [[nodiscard]] NavigationFocusReset focusReset() const;
    /// Setter of the `focusReset` attribute.
    void focusReset(const NavigationFocusReset& value);
    /// Getter of the `scroll` attribute.
    [[nodiscard]] NavigationScrollBehavior scroll() const;
    /// Setter of the `scroll` attribute.
    void scroll(const NavigationScrollBehavior& value);
};

} // namespace webbind