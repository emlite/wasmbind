#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HandwritingPoint
/// [`HandwritingPoint`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingPoint)
class HandwritingPoint : public emlite::Val {
  explicit HandwritingPoint(Handle h) noexcept;
public:
    static HandwritingPoint take_ownership(Handle h) noexcept;
    explicit HandwritingPoint(const emlite::Val &val) noexcept;
    HandwritingPoint() noexcept;
    [[nodiscard]] HandwritingPoint clone() const noexcept;
    [[nodiscard]] double x() const;
    void x(double value);
    [[nodiscard]] double y() const;
    void y(double value);
    [[nodiscard]] jsbind::Any t() const;
    void t(const jsbind::Any& value);
};

} // namespace webbind