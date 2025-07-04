#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GamepadPose : public emlite::Val {
    explicit GamepadPose(Handle h) noexcept;

public:
    explicit GamepadPose(const emlite::Val &val) noexcept;
    static GamepadPose take_ownership(Handle h) noexcept;

    GamepadPose clone() const noexcept;
    bool hasOrientation() const;
    bool hasPosition() const;
    jsbind::Float32Array position() const;
    jsbind::Float32Array linearVelocity() const;
    jsbind::Float32Array linearAcceleration() const;
    jsbind::Float32Array orientation() const;
    jsbind::Float32Array angularVelocity() const;
    jsbind::Float32Array angularAcceleration() const;
};

