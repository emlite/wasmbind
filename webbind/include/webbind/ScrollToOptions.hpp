#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ScrollOptions.hpp"

namespace webbind {

/// Dictionary type ScrollToOptions
/// [`ScrollToOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollToOptions)
class ScrollToOptions : public ScrollOptions {
  explicit ScrollToOptions(Handle h) noexcept;
public:
    static ScrollToOptions take_ownership(Handle h) noexcept;
    explicit ScrollToOptions(const emlite::Val &val) noexcept;
    ScrollToOptions() noexcept;
    [[nodiscard]] ScrollToOptions clone() const noexcept;
    [[nodiscard]] double left() const;
    void left(double value);
    [[nodiscard]] double top() const;
    void top(double value);
};

} // namespace webbind