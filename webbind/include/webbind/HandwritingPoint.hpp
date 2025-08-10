#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HandwritingPoint
class HandwritingPoint : public emlite::Val {
  explicit HandwritingPoint(Handle h) noexcept;
public:
    static HandwritingPoint take_ownership(Handle h) noexcept;
    explicit HandwritingPoint(const emlite::Val &val) noexcept;
    HandwritingPoint() noexcept;
    [[nodiscard]] HandwritingPoint clone() const noexcept;
    /// Getter of the `x` attribute.
    [[nodiscard]] double x() const;
    /// Setter of the `x` attribute.
    void x(double value);
    /// Getter of the `y` attribute.
    [[nodiscard]] double y() const;
    /// Setter of the `y` attribute.
    void y(double value);
    /// Getter of the `t` attribute.
    [[nodiscard]] jsbind::Any t() const;
    /// Setter of the `t` attribute.
    void t(const jsbind::Any& value);
};

} // namespace webbind