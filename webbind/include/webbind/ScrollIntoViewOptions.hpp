#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ScrollOptions.hpp"

namespace webbind {

/// Dictionary type ScrollIntoViewOptions
/// [`ScrollIntoViewOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollIntoViewOptions)
class ScrollIntoViewOptions : public ScrollOptions {
  explicit ScrollIntoViewOptions(Handle h) noexcept;
public:
    static ScrollIntoViewOptions take_ownership(Handle h) noexcept;
    explicit ScrollIntoViewOptions(const emlite::Val &val) noexcept;
    ScrollIntoViewOptions() noexcept;
    [[nodiscard]] ScrollIntoViewOptions clone() const noexcept;
    [[nodiscard]] ScrollLogicalPosition block() const;
    void block(const ScrollLogicalPosition& value);
    [[nodiscard]] ScrollLogicalPosition inline_() const;
    void inline_(const ScrollLogicalPosition& value);
    [[nodiscard]] ScrollIntoViewContainer container() const;
    void container(const ScrollIntoViewContainer& value);
};

} // namespace webbind