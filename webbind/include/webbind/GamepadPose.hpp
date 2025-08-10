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
    /// Getter of the `hasOrientation` attribute.
    /// [`GamepadPose.hasOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/hasOrientation)
    [[nodiscard]] bool hasOrientation() const;
    /// Getter of the `hasPosition` attribute.
    /// [`GamepadPose.hasPosition`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/hasPosition)
    [[nodiscard]] bool hasPosition() const;
    /// Getter of the `position` attribute.
    /// [`GamepadPose.position`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/position)
    [[nodiscard]] jsbind::Float32Array position() const;
    /// Getter of the `linearVelocity` attribute.
    /// [`GamepadPose.linearVelocity`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/linearVelocity)
    [[nodiscard]] jsbind::Float32Array linearVelocity() const;
    /// Getter of the `linearAcceleration` attribute.
    /// [`GamepadPose.linearAcceleration`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/linearAcceleration)
    [[nodiscard]] jsbind::Float32Array linearAcceleration() const;
    /// Getter of the `orientation` attribute.
    /// [`GamepadPose.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/orientation)
    [[nodiscard]] jsbind::Float32Array orientation() const;
    /// Getter of the `angularVelocity` attribute.
    /// [`GamepadPose.angularVelocity`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/angularVelocity)
    [[nodiscard]] jsbind::Float32Array angularVelocity() const;
    /// Getter of the `angularAcceleration` attribute.
    /// [`GamepadPose.angularAcceleration`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadPose/angularAcceleration)
    [[nodiscard]] jsbind::Float32Array angularAcceleration() const;
};

} // namespace webbind