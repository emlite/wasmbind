#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"
#include "DeviceMotionEventAccelerationInit.hpp"
#include "DeviceMotionEventRotationRateInit.hpp"

namespace webbind {

/// Dictionary type DeviceMotionEventInit
/// [`DeviceMotionEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventInit)
class DeviceMotionEventInit : public EventInit {
  explicit DeviceMotionEventInit(Handle h) noexcept;
public:
    static DeviceMotionEventInit take_ownership(Handle h) noexcept;
    explicit DeviceMotionEventInit(const emlite::Val &val) noexcept;
    DeviceMotionEventInit() noexcept;
    [[nodiscard]] DeviceMotionEventInit clone() const noexcept;
    [[nodiscard]] DeviceMotionEventAccelerationInit acceleration() const;
    void acceleration(const DeviceMotionEventAccelerationInit& value);
    [[nodiscard]] DeviceMotionEventAccelerationInit accelerationIncludingGravity() const;
    void accelerationIncludingGravity(const DeviceMotionEventAccelerationInit& value);
    [[nodiscard]] DeviceMotionEventRotationRateInit rotationRate() const;
    void rotationRate(const DeviceMotionEventRotationRateInit& value);
    [[nodiscard]] double interval() const;
    void interval(double value);
};

} // namespace webbind