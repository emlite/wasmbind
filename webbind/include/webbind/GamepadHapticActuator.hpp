#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GamepadEffectParameters.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface GamepadHapticActuator
/// [`GamepadHapticActuator`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHapticActuator)
class GamepadHapticActuator : public emlite::Val {
    explicit GamepadHapticActuator(Handle h) noexcept;
public:
    explicit GamepadHapticActuator(const emlite::Val &val) noexcept;
    static GamepadHapticActuator take_ownership(Handle h) noexcept;
    [[nodiscard]] GamepadHapticActuator clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`GamepadHapticActuator.effects`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHapticActuator/effects)
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

} // namespace webbind