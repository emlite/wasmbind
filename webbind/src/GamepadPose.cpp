#include <webbind/GamepadPose.hpp>


GamepadPose GamepadPose::take_ownership(Handle h) noexcept {
        return GamepadPose(h);
    }
GamepadPose GamepadPose::clone() const noexcept { return *this; }
emlite::Val GamepadPose::instance() noexcept { return emlite::Val::global("GamepadPose"); }
GamepadPose::GamepadPose(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GamepadPose::GamepadPose(const emlite::Val &val) noexcept: emlite::Val(val) {}


bool GamepadPose::hasOrientation() const {
    return emlite::Val::get("hasOrientation").as<bool>();
}

bool GamepadPose::hasPosition() const {
    return emlite::Val::get("hasPosition").as<bool>();
}

jsbind::Float32Array GamepadPose::position() const {
    return emlite::Val::get("position").as<jsbind::Float32Array>();
}

jsbind::Float32Array GamepadPose::linearVelocity() const {
    return emlite::Val::get("linearVelocity").as<jsbind::Float32Array>();
}

jsbind::Float32Array GamepadPose::linearAcceleration() const {
    return emlite::Val::get("linearAcceleration").as<jsbind::Float32Array>();
}

jsbind::Float32Array GamepadPose::orientation() const {
    return emlite::Val::get("orientation").as<jsbind::Float32Array>();
}

jsbind::Float32Array GamepadPose::angularVelocity() const {
    return emlite::Val::get("angularVelocity").as<jsbind::Float32Array>();
}

jsbind::Float32Array GamepadPose::angularAcceleration() const {
    return emlite::Val::get("angularAcceleration").as<jsbind::Float32Array>();
}

