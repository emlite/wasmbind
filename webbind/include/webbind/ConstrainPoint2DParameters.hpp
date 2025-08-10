#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Point2D.hpp"

namespace webbind {

/// Dictionary type ConstrainPoint2DParameters
/// [`ConstrainPoint2DParameters`](https://developer.mozilla.org/en-US/docs/Web/API/ConstrainPoint2DParameters)
class ConstrainPoint2DParameters : public emlite::Val {
  explicit ConstrainPoint2DParameters(Handle h) noexcept;
public:
    static ConstrainPoint2DParameters take_ownership(Handle h) noexcept;
    explicit ConstrainPoint2DParameters(const emlite::Val &val) noexcept;
    ConstrainPoint2DParameters() noexcept;
    [[nodiscard]] ConstrainPoint2DParameters clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<Point2D> exact() const;
    void exact(const jsbind::TypedArray<Point2D>& value);
    [[nodiscard]] jsbind::TypedArray<Point2D> ideal() const;
    void ideal(const jsbind::TypedArray<Point2D>& value);
};

} // namespace webbind