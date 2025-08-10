#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ScrollOptions.hpp"

namespace webbind {

/// Dictionary type ScrollToOptions
class ScrollToOptions : public ScrollOptions {
  explicit ScrollToOptions(Handle h) noexcept;
public:
    static ScrollToOptions take_ownership(Handle h) noexcept;
    explicit ScrollToOptions(const emlite::Val &val) noexcept;
    ScrollToOptions() noexcept;
    [[nodiscard]] ScrollToOptions clone() const noexcept;
    /// Getter of the `left` attribute.
    [[nodiscard]] double left() const;
    /// Setter of the `left` attribute.
    void left(double value);
    /// Getter of the `top` attribute.
    [[nodiscard]] double top() const;
    /// Setter of the `top` attribute.
    void top(double value);
};

} // namespace webbind