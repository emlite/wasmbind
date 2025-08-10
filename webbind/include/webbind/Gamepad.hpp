#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GamepadTouch.hpp"
#include "enums.hpp"

namespace webbind {

class GamepadButton;
class GamepadHapticActuator;
class GamepadPose;

/// Interface Gamepad
/// [`Gamepad`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad)
class Gamepad : public emlite::Val {
    explicit Gamepad(Handle h) noexcept;
public:
    explicit Gamepad(const emlite::Val &val) noexcept;
    static Gamepad take_ownership(Handle h) noexcept;
    [[nodiscard]] Gamepad clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`Gamepad.id`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/id)
    /// [`Gamepad.id`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`Gamepad.index`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/index)
    /// [`Gamepad.index`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/index)
    [[nodiscard]] long index() const;
    /// [`Gamepad.connected`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/connected)
    /// [`Gamepad.connected`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/connected)
    [[nodiscard]] bool connected() const;
    /// [`Gamepad.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/timestamp)
    /// [`Gamepad.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/timestamp)
    [[nodiscard]] jsbind::Any timestamp() const;
    /// [`Gamepad.mapping`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/mapping)
    /// [`Gamepad.mapping`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/mapping)
    [[nodiscard]] GamepadMappingType mapping() const;
    /// [`Gamepad.axes`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/axes)
    /// [`Gamepad.axes`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/axes)
    [[nodiscard]] jsbind::TypedArray<double> axes() const;
    /// [`Gamepad.buttons`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/buttons)
    /// [`Gamepad.buttons`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/buttons)
    [[nodiscard]] jsbind::TypedArray<GamepadButton> buttons() const;
    /// [`Gamepad.touches`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/touches)
    /// [`Gamepad.touches`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/touches)
    [[nodiscard]] jsbind::TypedArray<GamepadTouch> touches() const;
    /// [`Gamepad.vibrationActuator`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/vibrationActuator)
    /// [`Gamepad.vibrationActuator`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/vibrationActuator)
    [[nodiscard]] GamepadHapticActuator vibrationActuator() const;
    /// [`Gamepad.hand`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/hand)
    /// [`Gamepad.hand`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/hand)
    [[nodiscard]] GamepadHand hand() const;
    /// [`Gamepad.hapticActuators`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/hapticActuators)
    /// [`Gamepad.hapticActuators`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/hapticActuators)
    [[nodiscard]] jsbind::TypedArray<GamepadHapticActuator> hapticActuators() const;
    /// [`Gamepad.pose`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/pose)
    /// [`Gamepad.pose`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/pose)
    [[nodiscard]] GamepadPose pose() const;
};

} // namespace webbind