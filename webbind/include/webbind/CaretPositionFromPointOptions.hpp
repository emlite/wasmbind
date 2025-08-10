#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ShadowRoot;

/// Dictionary type CaretPositionFromPointOptions
/// [`CaretPositionFromPointOptions`](https://developer.mozilla.org/en-US/docs/Web/API/CaretPositionFromPointOptions)
class CaretPositionFromPointOptions : public emlite::Val {
  explicit CaretPositionFromPointOptions(Handle h) noexcept;
public:
    static CaretPositionFromPointOptions take_ownership(Handle h) noexcept;
    explicit CaretPositionFromPointOptions(const emlite::Val &val) noexcept;
    CaretPositionFromPointOptions() noexcept;
    [[nodiscard]] CaretPositionFromPointOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<ShadowRoot> shadowRoots() const;
    void shadowRoots(const jsbind::TypedArray<ShadowRoot>& value);
};

} // namespace webbind