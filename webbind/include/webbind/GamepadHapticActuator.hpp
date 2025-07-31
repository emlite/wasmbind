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
    [[nodiscard]] GamepadEffectParameters clone() const noexcept;
    [[nodiscard]] long long duration() const;
    void duration(long long value);
    [[nodiscard]] long long startDelay() const;
    void startDelay(long long value);
    [[nodiscard]] double strongMagnitude() const;
    void strongMagnitude(double value);
    [[nodiscard]] double weakMagnitude() const;
    void weakMagnitude(double value);
    [[nodiscard]] double leftTrigger() const;
    void leftTrigger(double value);
    [[nodiscard]] double rightTrigger() const;
    void rightTrigger(double value);
};

/// The GamepadHapticActuator class.
/// [`GamepadHapticActuator`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHapticActuator)
class GamepadHapticActuator : public emlite::Val {
    explicit GamepadHapticActuator(Handle h) noexcept;

public:
    explicit GamepadHapticActuator(const emlite::Val &val) noexcept;
    static GamepadHapticActuator take_ownership(Handle h) noexcept;

    [[nodiscard]] GamepadHapticActuator clone() const noexcept;
    /// Getter of the `effects` attribute.
    /// [`GamepadHapticActuator.effects`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHapticActuator/effects)
    [[nodiscard]] jsbind::TypedArray<GamepadHapticEffectType> effects() const;
    /// The playEffect method.
    /// [`GamepadHapticActuator.playEffect`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHapticActuator/playEffect)
    jsbind::Promise<GamepadHapticsResult> playEffect(const GamepadHapticEffectType& type);
    /// The playEffect method.
    /// [`GamepadHapticActuator.playEffect`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHapticActuator/playEffect)
    jsbind::Promise<GamepadHapticsResult> playEffect(const GamepadHapticEffectType& type, const GamepadEffectParameters& params);
    /// The reset method.
    /// [`GamepadHapticActuator.reset`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHapticActuator/reset)
    jsbind::Promise<GamepadHapticsResult> reset();
    /// The pulse method.
    /// [`GamepadHapticActuator.pulse`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHapticActuator/pulse)
    jsbind::Promise<bool> pulse(double value, double duration);
};

