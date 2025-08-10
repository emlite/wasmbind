#include "webbind/GamepadHapticActuator.hpp"
#include "webbind/GamepadEffectParameters.hpp"

namespace webbind {

GamepadHapticActuator GamepadHapticActuator::take_ownership(Handle h) noexcept {
        return GamepadHapticActuator(h);
    }
GamepadHapticActuator GamepadHapticActuator::clone() const noexcept { return *this; }
emlite::Val GamepadHapticActuator::instance() noexcept { return emlite::Val::global("GamepadHapticActuator"); }
GamepadHapticActuator::GamepadHapticActuator(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GamepadHapticActuator::GamepadHapticActuator(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::TypedArray<GamepadHapticEffectType> GamepadHapticActuator::effects() const {
    return emlite::Val::get("effects").as<jsbind::TypedArray<GamepadHapticEffectType>>();
}

jsbind::Promise<GamepadHapticsResult> GamepadHapticActuator::playEffect(const GamepadHapticEffectType& type) {
    return emlite::Val::call("playEffect", type).as<jsbind::Promise<GamepadHapticsResult>>();
}

jsbind::Promise<GamepadHapticsResult> GamepadHapticActuator::playEffect(const GamepadHapticEffectType& type, const GamepadEffectParameters& params) {
    return emlite::Val::call("playEffect", type, params).as<jsbind::Promise<GamepadHapticsResult>>();
}

jsbind::Promise<GamepadHapticsResult> GamepadHapticActuator::reset() {
    return emlite::Val::call("reset").as<jsbind::Promise<GamepadHapticsResult>>();
}

jsbind::Promise<bool> GamepadHapticActuator::pulse(double value, double duration) {
    return emlite::Val::call("pulse", value, duration).as<jsbind::Promise<bool>>();
}


} // namespace webbind