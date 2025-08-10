#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GamepadEffectParameters
class GamepadEffectParameters : public emlite::Val {
  explicit GamepadEffectParameters(Handle h) noexcept;
public:
    static GamepadEffectParameters take_ownership(Handle h) noexcept;
    explicit GamepadEffectParameters(const emlite::Val &val) noexcept;
    GamepadEffectParameters() noexcept;
    [[nodiscard]] GamepadEffectParameters clone() const noexcept;
    /// Getter of the `duration` attribute.
    [[nodiscard]] long long duration() const;
    /// Setter of the `duration` attribute.
    void duration(long long value);
    /// Getter of the `startDelay` attribute.
    [[nodiscard]] long long startDelay() const;
    /// Setter of the `startDelay` attribute.
    void startDelay(long long value);
    /// Getter of the `strongMagnitude` attribute.
    [[nodiscard]] double strongMagnitude() const;
    /// Setter of the `strongMagnitude` attribute.
    void strongMagnitude(double value);
    /// Getter of the `weakMagnitude` attribute.
    [[nodiscard]] double weakMagnitude() const;
    /// Setter of the `weakMagnitude` attribute.
    void weakMagnitude(double value);
    /// Getter of the `leftTrigger` attribute.
    [[nodiscard]] double leftTrigger() const;
    /// Setter of the `leftTrigger` attribute.
    void leftTrigger(double value);
    /// Getter of the `rightTrigger` attribute.
    [[nodiscard]] double rightTrigger() const;
    /// Setter of the `rightTrigger` attribute.
    void rightTrigger(double value);
};

} // namespace webbind