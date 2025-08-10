#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ResizeObserverOptions
/// [`ResizeObserverOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverOptions)
class ResizeObserverOptions : public emlite::Val {
  explicit ResizeObserverOptions(Handle h) noexcept;
public:
    static ResizeObserverOptions take_ownership(Handle h) noexcept;
    explicit ResizeObserverOptions(const emlite::Val &val) noexcept;
    ResizeObserverOptions() noexcept;
    [[nodiscard]] ResizeObserverOptions clone() const noexcept;
    [[nodiscard]] ResizeObserverBoxOptions box() const;
    void box(const ResizeObserverBoxOptions& value);
};

} // namespace webbind