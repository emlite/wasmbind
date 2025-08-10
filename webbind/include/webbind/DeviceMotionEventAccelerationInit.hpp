#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DeviceMotionEventAccelerationInit
class DeviceMotionEventAccelerationInit : public emlite::Val {
  explicit DeviceMotionEventAccelerationInit(Handle h) noexcept;
public:
    static DeviceMotionEventAccelerationInit take_ownership(Handle h) noexcept;
    explicit DeviceMotionEventAccelerationInit(const emlite::Val &val) noexcept;
    DeviceMotionEventAccelerationInit() noexcept;
    [[nodiscard]] DeviceMotionEventAccelerationInit clone() const noexcept;
    /// Getter of the `x` attribute.
    [[nodiscard]] double x() const;
    /// Setter of the `x` attribute.
    void x(double value);
    /// Getter of the `y` attribute.
    [[nodiscard]] double y() const;
    /// Setter of the `y` attribute.
    void y(double value);
    /// Getter of the `z` attribute.
    [[nodiscard]] double z() const;
    /// Setter of the `z` attribute.
    void z(double value);
};

} // namespace webbind