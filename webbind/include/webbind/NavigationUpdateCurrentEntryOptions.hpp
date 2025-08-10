#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type NavigationUpdateCurrentEntryOptions
/// [`NavigationUpdateCurrentEntryOptions`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationUpdateCurrentEntryOptions)
class NavigationUpdateCurrentEntryOptions : public emlite::Val {
  explicit NavigationUpdateCurrentEntryOptions(Handle h) noexcept;
public:
    static NavigationUpdateCurrentEntryOptions take_ownership(Handle h) noexcept;
    explicit NavigationUpdateCurrentEntryOptions(const emlite::Val &val) noexcept;
    NavigationUpdateCurrentEntryOptions() noexcept;
    [[nodiscard]] NavigationUpdateCurrentEntryOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any state() const;
    void state(const jsbind::Any& value);
};

} // namespace webbind