#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type LayoutOptions
/// [`LayoutOptions`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutOptions)
class LayoutOptions : public emlite::Val {
  explicit LayoutOptions(Handle h) noexcept;
public:
    static LayoutOptions take_ownership(Handle h) noexcept;
    explicit LayoutOptions(const emlite::Val &val) noexcept;
    LayoutOptions() noexcept;
    [[nodiscard]] LayoutOptions clone() const noexcept;
    [[nodiscard]] ChildDisplayType childDisplay() const;
    void childDisplay(const ChildDisplayType& value);
    [[nodiscard]] LayoutSizingMode sizing() const;
    void sizing(const LayoutSizingMode& value);
};

} // namespace webbind