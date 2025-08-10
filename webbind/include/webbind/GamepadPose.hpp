#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface GamepadPose
/// [`GamepadPose`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose)
class GamepadPose : public emlite::Val {
    explicit GamepadPose(Handle h) noexcept;
public:
    explicit GamepadPose(const emlite::Val &val) noexcept;
    static GamepadPose take_ownership(Handle h) noexcept;
    [[nodiscard]] GamepadPose clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`GamepadPose.hasOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/hasOrientation)
    /// [`GamepadPose.hasOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/hasOrientation)
    [[nodiscard]] bool hasOrientation() const;
    /// [`GamepadPose.hasPosition`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/hasPosition)
    /// [`GamepadPose.hasPosition`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/hasPosition)
    [[nodiscard]] bool hasPosition() const;
    /// [`GamepadPose.position`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/position)
    /// [`GamepadPose.position`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/position)
    [[nodiscard]] jsbind::Float32Array position() const;
    /// [`GamepadPose.linearVelocity`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/linearVelocity)
    /// [`GamepadPose.linearVelocity`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/linearVelocity)
    [[nodiscard]] jsbind::Float32Array linearVelocity() const;
    /// [`GamepadPose.linearAcceleration`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/linearAcceleration)
    /// [`GamepadPose.linearAcceleration`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/linearAcceleration)
    [[nodiscard]] jsbind::Float32Array linearAcceleration() const;
    /// [`GamepadPose.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/orientation)
    /// [`GamepadPose.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/orientation)
    [[nodiscard]] jsbind::Float32Array orientation() const;
    /// [`GamepadPose.angularVelocity`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/angularVelocity)
    /// [`GamepadPose.angularVelocity`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/angularVelocity)
    [[nodiscard]] jsbind::Float32Array angularVelocity() const;
    /// [`GamepadPose.angularAcceleration`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/angularAcceleration)
    /// [`GamepadPose.angularAcceleration`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/angularAcceleration)
    [[nodiscard]] jsbind::Float32Array angularAcceleration() const;
};

} // namespace webbind