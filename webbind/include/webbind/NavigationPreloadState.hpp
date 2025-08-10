#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type NavigationPreloadState
/// [`NavigationPreloadState`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationPreloadState)
class NavigationPreloadState : public emlite::Val {
  explicit NavigationPreloadState(Handle h) noexcept;
public:
    static NavigationPreloadState take_ownership(Handle h) noexcept;
    explicit NavigationPreloadState(const emlite::Val &val) noexcept;
    NavigationPreloadState() noexcept;
    [[nodiscard]] NavigationPreloadState clone() const noexcept;
    [[nodiscard]] bool enabled() const;
    void enabled(bool value);
    [[nodiscard]] jsbind::String headerValue() const;
    void headerValue(const jsbind::String& value);
};

} // namespace webbind