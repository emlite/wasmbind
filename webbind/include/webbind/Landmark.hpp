#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Point2D.hpp"

namespace webbind {

/// Dictionary type Landmark
class Landmark : public emlite::Val {
  explicit Landmark(Handle h) noexcept;
public:
    static Landmark take_ownership(Handle h) noexcept;
    explicit Landmark(const emlite::Val &val) noexcept;
    Landmark() noexcept;
    [[nodiscard]] Landmark clone() const noexcept;
    /// Getter of the `locations` attribute.
    [[nodiscard]] jsbind::TypedArray<Point2D> locations() const;
    /// Setter of the `locations` attribute.
    void locations(const jsbind::TypedArray<Point2D>& value);
    /// Getter of the `type` attribute.
    [[nodiscard]] LandmarkType type() const;
    /// Setter of the `type` attribute.
    void type(const LandmarkType& value);
};

} // namespace webbind