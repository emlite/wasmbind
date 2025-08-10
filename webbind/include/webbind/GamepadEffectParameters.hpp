#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GamepadEffectParameters
/// [`GamepadEffectParameters`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadEffectParameters)
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

} // namespace webbind