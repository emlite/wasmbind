#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DeviceMotionEventAccelerationInit
/// [`DeviceMotionEventAccelerationInit`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventAccelerationInit)
class DeviceMotionEventAccelerationInit : public emlite::Val {
  explicit DeviceMotionEventAccelerationInit(Handle h) noexcept;
public:
    static DeviceMotionEventAccelerationInit take_ownership(Handle h) noexcept;
    explicit DeviceMotionEventAccelerationInit(const emlite::Val &val) noexcept;
    DeviceMotionEventAccelerationInit() noexcept;
    [[nodiscard]] DeviceMotionEventAccelerationInit clone() const noexcept;
    [[nodiscard]] double x() const;
    void x(double value);
    [[nodiscard]] double y() const;
    void y(double value);
    [[nodiscard]] double z() const;
    void z(double value);
};

} // namespace webbind