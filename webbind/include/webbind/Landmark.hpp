#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Point2D.hpp"

namespace webbind {

/// Dictionary type Landmark
/// [`Landmark`](https://developer.mozilla.org/en-US/docs/Web/API/Landmark)
class Landmark : public emlite::Val {
  explicit Landmark(Handle h) noexcept;
public:
    static Landmark take_ownership(Handle h) noexcept;
    explicit Landmark(const emlite::Val &val) noexcept;
    Landmark() noexcept;
    [[nodiscard]] Landmark clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<Point2D> locations() const;
    void locations(const jsbind::TypedArray<Point2D>& value);
    [[nodiscard]] LandmarkType type() const;
    void type(const LandmarkType& value);
};

} // namespace webbind