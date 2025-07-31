#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GamepadButton class.
/// [`GamepadButton`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadButton)
class GamepadButton : public emlite::Val {
    explicit GamepadButton(Handle h) noexcept;

public:
    explicit GamepadButton(const emlite::Val &val) noexcept;
    static GamepadButton take_ownership(Handle h) noexcept;

    [[nodiscard]] GamepadButton clone() const noexcept;
    /// Getter of the `pressed` attribute.
    /// [`GamepadButton.pressed`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadButton/pressed)
    [[nodiscard]] bool pressed() const;
    /// Getter of the `touched` attribute.
    /// [`GamepadButton.touched`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadButton/touched)
    [[nodiscard]] bool touched() const;
    /// Getter of the `value` attribute.
    /// [`GamepadButton.value`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadButton/value)
    [[nodiscard]] double value() const;
};

