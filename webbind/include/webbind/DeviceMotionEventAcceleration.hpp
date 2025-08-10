#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface DeviceMotionEventAcceleration
/// [`DeviceMotionEventAcceleration`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventAcceleration)
class DeviceMotionEventAcceleration : public emlite::Val {
    explicit DeviceMotionEventAcceleration(Handle h) noexcept;
public:
    explicit DeviceMotionEventAcceleration(const emlite::Val &val) noexcept;
    static DeviceMotionEventAcceleration take_ownership(Handle h) noexcept;
    [[nodiscard]] DeviceMotionEventAcceleration clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`DeviceMotionEventAcceleration.x`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventAcceleration/x)
    /// [`DeviceMotionEventAcceleration.x`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventAcceleration/x)
    [[nodiscard]] double x() const;
    /// [`DeviceMotionEventAcceleration.y`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventAcceleration/y)
    /// [`DeviceMotionEventAcceleration.y`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventAcceleration/y)
    [[nodiscard]] double y() const;
    /// [`DeviceMotionEventAcceleration.z`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventAcceleration/z)
    /// [`DeviceMotionEventAcceleration.z`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventAcceleration/z)
    [[nodiscard]] double z() const;
};

} // namespace webbind