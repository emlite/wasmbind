#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MouseEventInit.hpp"

namespace webbind {

/// Dictionary type WheelEventInit
/// [`WheelEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/WheelEventInit)
class WheelEventInit : public MouseEventInit {
  explicit WheelEventInit(Handle h) noexcept;
public:
    static WheelEventInit take_ownership(Handle h) noexcept;
    explicit WheelEventInit(const emlite::Val &val) noexcept;
    WheelEventInit() noexcept;
    [[nodiscard]] WheelEventInit clone() const noexcept;
    [[nodiscard]] double deltaX() const;
    void deltaX(double value);
    [[nodiscard]] double deltaY() const;
    void deltaY(double value);
    [[nodiscard]] double deltaZ() const;
    void deltaZ(double value);
    [[nodiscard]] unsigned long deltaMode() const;
    void deltaMode(unsigned long value);
};

} // namespace webbind