#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"
#include "DeviceMotionEventAccelerationInit.hpp"
#include "DeviceMotionEventRotationRateInit.hpp"

namespace webbind {

/// Dictionary type DeviceMotionEventInit
class DeviceMotionEventInit : public EventInit {
  explicit DeviceMotionEventInit(Handle h) noexcept;
public:
    static DeviceMotionEventInit take_ownership(Handle h) noexcept;
    explicit DeviceMotionEventInit(const emlite::Val &val) noexcept;
    DeviceMotionEventInit() noexcept;
    [[nodiscard]] DeviceMotionEventInit clone() const noexcept;
    /// Getter of the `acceleration` attribute.
    [[nodiscard]] DeviceMotionEventAccelerationInit acceleration() const;
    /// Setter of the `acceleration` attribute.
    void acceleration(const DeviceMotionEventAccelerationInit& value);
    /// Getter of the `accelerationIncludingGravity` attribute.
    [[nodiscard]] DeviceMotionEventAccelerationInit accelerationIncludingGravity() const;
    /// Setter of the `accelerationIncludingGravity` attribute.
    void accelerationIncludingGravity(const DeviceMotionEventAccelerationInit& value);
    /// Getter of the `rotationRate` attribute.
    [[nodiscard]] DeviceMotionEventRotationRateInit rotationRate() const;
    /// Setter of the `rotationRate` attribute.
    void rotationRate(const DeviceMotionEventRotationRateInit& value);
    /// Getter of the `interval` attribute.
    [[nodiscard]] double interval() const;
    /// Setter of the `interval` attribute.
    void interval(double value);
};

} // namespace webbind