#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type NavigationPreloadState
class NavigationPreloadState : public emlite::Val {
  explicit NavigationPreloadState(Handle h) noexcept;
public:
    static NavigationPreloadState take_ownership(Handle h) noexcept;
    explicit NavigationPreloadState(const emlite::Val &val) noexcept;
    NavigationPreloadState() noexcept;
    [[nodiscard]] NavigationPreloadState clone() const noexcept;
    /// Getter of the `enabled` attribute.
    [[nodiscard]] bool enabled() const;
    /// Setter of the `enabled` attribute.
    void enabled(bool value);
    /// Getter of the `headerValue` attribute.
    [[nodiscard]] jsbind::String headerValue() const;
    /// Setter of the `headerValue` attribute.
    void headerValue(const jsbind::String& value);
};

} // namespace webbind