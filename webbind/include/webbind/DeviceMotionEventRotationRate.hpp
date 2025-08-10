#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface DeviceMotionEventRotationRate
/// [`DeviceMotionEventRotationRate`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventRotationRate)
class DeviceMotionEventRotationRate : public emlite::Val {
    explicit DeviceMotionEventRotationRate(Handle h) noexcept;
public:
    explicit DeviceMotionEventRotationRate(const emlite::Val &val) noexcept;
    static DeviceMotionEventRotationRate take_ownership(Handle h) noexcept;
    [[nodiscard]] DeviceMotionEventRotationRate clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `alpha` attribute.
    /// [`DeviceMotionEventRotationRate.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventRotationRate/alpha)
    [[nodiscard]] double alpha() const;
    /// Getter of the `beta` attribute.
    /// [`DeviceMotionEventRotationRate.beta`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventRotationRate/beta)
    [[nodiscard]] double beta() const;
    /// Getter of the `gamma` attribute.
    /// [`DeviceMotionEventRotationRate.gamma`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventRotationRate/gamma)
    [[nodiscard]] double gamma() const;
};

} // namespace webbind