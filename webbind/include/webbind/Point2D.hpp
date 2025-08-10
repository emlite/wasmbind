#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type Point2D
/// [`Point2D`](https://developer.mozilla.org/en-US/docs/Web/API/Point2D)
class Point2D : public emlite::Val {
  explicit Point2D(Handle h) noexcept;
public:
    static Point2D take_ownership(Handle h) noexcept;
    explicit Point2D(const emlite::Val &val) noexcept;
    Point2D() noexcept;
    [[nodiscard]] Point2D clone() const noexcept;
    [[nodiscard]] double x() const;
    void x(double value);
    [[nodiscard]] double y() const;
    void y(double value);
};

} // namespace webbind