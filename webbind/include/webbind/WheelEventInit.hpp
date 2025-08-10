#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MouseEventInit.hpp"

namespace webbind {

/// Dictionary type WheelEventInit
class WheelEventInit : public MouseEventInit {
  explicit WheelEventInit(Handle h) noexcept;
public:
    static WheelEventInit take_ownership(Handle h) noexcept;
    explicit WheelEventInit(const emlite::Val &val) noexcept;
    WheelEventInit() noexcept;
    [[nodiscard]] WheelEventInit clone() const noexcept;
    /// Getter of the `deltaX` attribute.
    [[nodiscard]] double deltaX() const;
    /// Setter of the `deltaX` attribute.
    void deltaX(double value);
    /// Getter of the `deltaY` attribute.
    [[nodiscard]] double deltaY() const;
    /// Setter of the `deltaY` attribute.
    void deltaY(double value);
    /// Getter of the `deltaZ` attribute.
    [[nodiscard]] double deltaZ() const;
    /// Setter of the `deltaZ` attribute.
    void deltaZ(double value);
    /// Getter of the `deltaMode` attribute.
    [[nodiscard]] unsigned long deltaMode() const;
    /// Setter of the `deltaMode` attribute.
    void deltaMode(unsigned long value);
};

} // namespace webbind