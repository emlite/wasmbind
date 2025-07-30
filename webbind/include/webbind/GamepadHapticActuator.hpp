#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GamepadEffectParameters;


class GamepadEffectParameters : public emlite::Val {
  explicit GamepadEffectParameters(Handle h) noexcept;
public:
    static GamepadEffectParameters take_ownership(Handle h) noexcept;
    explicit GamepadEffectParameters(const emlite::Val &val) noexcept;
    GamepadEffectParameters() noexcept;
    GamepadEffectParameters clone() const noexcept;
    long long duration() const;
    void duration(long long value);
    long long startDelay() const;
    void startDelay(long long value);
    double strongMagnitude() const;
    void strongMagnitude(double value);
    double weakMagnitude() const;
    void weakMagnitude(double value);
    double leftTrigger() const;
    void leftTrigger(double value);
    double rightTrigger() const;
    void rightTrigger(double value);
};

class GamepadHapticActuator : public emlite::Val {
    explicit GamepadHapticActuator(Handle h) noexcept;

public:
    explicit GamepadHapticActuator(const emlite::Val &val) noexcept;
    static GamepadHapticActuator take_ownership(Handle h) noexcept;

    GamepadHapticActuator clone() const noexcept;
    jsbind::TypedArray<GamepadHapticEffectType> effects() const;
    jsbind::Promise<GamepadHapticsResult> playEffect(const GamepadHapticEffectType& type);
    jsbind::Promise<GamepadHapticsResult> playEffect(const GamepadHapticEffectType& type, const GamepadEffectParameters& params);
    jsbind::Promise<GamepadHapticsResult> reset();
    jsbind::Promise<bool> pulse(double value, double duration);
};

