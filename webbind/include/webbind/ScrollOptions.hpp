#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ScrollOptions
/// [`ScrollOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollOptions)
class ScrollOptions : public emlite::Val {
  explicit ScrollOptions(Handle h) noexcept;
public:
    static ScrollOptions take_ownership(Handle h) noexcept;
    explicit ScrollOptions(const emlite::Val &val) noexcept;
    ScrollOptions() noexcept;
    [[nodiscard]] ScrollOptions clone() const noexcept;
    [[nodiscard]] ScrollBehavior behavior() const;
    void behavior(const ScrollBehavior& value);
};

} // namespace webbind