#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type Point2D
class Point2D : public emlite::Val {
  explicit Point2D(Handle h) noexcept;
public:
    static Point2D take_ownership(Handle h) noexcept;
    explicit Point2D(const emlite::Val &val) noexcept;
    Point2D() noexcept;
    [[nodiscard]] Point2D clone() const noexcept;
    /// Getter of the `x` attribute.
    [[nodiscard]] double x() const;
    /// Setter of the `x` attribute.
    void x(double value);
    /// Getter of the `y` attribute.
    [[nodiscard]] double y() const;
    /// Setter of the `y` attribute.
    void y(double value);
};

} // namespace webbind