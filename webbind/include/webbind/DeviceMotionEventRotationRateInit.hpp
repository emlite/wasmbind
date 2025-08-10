#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DeviceMotionEventRotationRateInit
class DeviceMotionEventRotationRateInit : public emlite::Val {
  explicit DeviceMotionEventRotationRateInit(Handle h) noexcept;
public:
    static DeviceMotionEventRotationRateInit take_ownership(Handle h) noexcept;
    explicit DeviceMotionEventRotationRateInit(const emlite::Val &val) noexcept;
    DeviceMotionEventRotationRateInit() noexcept;
    [[nodiscard]] DeviceMotionEventRotationRateInit clone() const noexcept;
    /// Getter of the `alpha` attribute.
    [[nodiscard]] double alpha() const;
    /// Setter of the `alpha` attribute.
    void alpha(double value);
    /// Getter of the `beta` attribute.
    [[nodiscard]] double beta() const;
    /// Setter of the `beta` attribute.
    void beta(double value);
    /// Getter of the `gamma` attribute.
    [[nodiscard]] double gamma() const;
    /// Setter of the `gamma` attribute.
    void gamma(double value);
};

} // namespace webbind