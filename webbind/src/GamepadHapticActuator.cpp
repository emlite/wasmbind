#include <webbind/GamepadHapticActuator.hpp>


GamepadEffectParameters::GamepadEffectParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GamepadEffectParameters GamepadEffectParameters::take_ownership(Handle h) noexcept {
        return GamepadEffectParameters(h);
    }
GamepadEffectParameters::GamepadEffectParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}
GamepadEffectParameters::GamepadEffectParameters() noexcept: emlite::Val(emlite::Val::object()) {}
GamepadEffectParameters GamepadEffectParameters::clone() const noexcept { return *this; }

long long GamepadEffectParameters::duration() const {
    return emlite::Val::get("duration").as<long long>();
}

void GamepadEffectParameters::duration(long long value) {
    emlite::Val::set("duration", value);
}

long long GamepadEffectParameters::startDelay() const {
    return emlite::Val::get("startDelay").as<long long>();
}

void GamepadEffectParameters::startDelay(long long value) {
    emlite::Val::set("startDelay", value);
}

double GamepadEffectParameters::strongMagnitude() const {
    return emlite::Val::get("strongMagnitude").as<double>();
}

void GamepadEffectParameters::strongMagnitude(double value) {
    emlite::Val::set("strongMagnitude", value);
}

double GamepadEffectParameters::weakMagnitude() const {
    return emlite::Val::get("weakMagnitude").as<double>();
}

void GamepadEffectParameters::weakMagnitude(double value) {
    emlite::Val::set("weakMagnitude", value);
}

double GamepadEffectParameters::leftTrigger() const {
    return emlite::Val::get("leftTrigger").as<double>();
}

void GamepadEffectParameters::leftTrigger(double value) {
    emlite::Val::set("leftTrigger", value);
}

double GamepadEffectParameters::rightTrigger() const {
    return emlite::Val::get("rightTrigger").as<double>();
}

void GamepadEffectParameters::rightTrigger(double value) {
    emlite::Val::set("rightTrigger", value);
}

GamepadHapticActuator GamepadHapticActuator::take_ownership(Handle h) noexcept {
        return GamepadHapticActuator(h);
    }
GamepadHapticActuator GamepadHapticActuator::clone() const noexcept { return *this; }
GamepadHapticActuator::GamepadHapticActuator(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GamepadHapticActuator::GamepadHapticActuator(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::FrozenArray<GamepadHapticEffectType> GamepadHapticActuator::effects() const {
    return emlite::Val::get("effects").as<jsbind::FrozenArray<GamepadHapticEffectType>>();
}

jsbind::Promise GamepadHapticActuator::playEffect(const GamepadHapticEffectType& type, const GamepadEffectParameters& params) {
    return emlite::Val::call("playEffect", type, params).as<jsbind::Promise>();
}

jsbind::Promise GamepadHapticActuator::reset() {
    return emlite::Val::call("reset").as<jsbind::Promise>();
}

jsbind::Promise GamepadHapticActuator::pulse(double value, double duration) {
    return emlite::Val::call("pulse", value, duration).as<jsbind::Promise>();
}

