#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DeviceMotionEventRotationRateInit
/// [`DeviceMotionEventRotationRateInit`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventRotationRateInit)
class DeviceMotionEventRotationRateInit : public emlite::Val {
  explicit DeviceMotionEventRotationRateInit(Handle h) noexcept;
public:
    static DeviceMotionEventRotationRateInit take_ownership(Handle h) noexcept;
    explicit DeviceMotionEventRotationRateInit(const emlite::Val &val) noexcept;
    DeviceMotionEventRotationRateInit() noexcept;
    [[nodiscard]] DeviceMotionEventRotationRateInit clone() const noexcept;
    [[nodiscard]] double alpha() const;
    void alpha(double value);
    [[nodiscard]] double beta() const;
    void beta(double value);
    [[nodiscard]] double gamma() const;
    void gamma(double value);
};

} // namespace webbind