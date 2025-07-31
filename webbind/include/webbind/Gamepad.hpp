#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GamepadButton;
class GamepadTouch;
class GamepadHapticActuator;
class GamepadPose;
class DOMRectReadOnly;
class DOMPointReadOnly;


class GamepadTouch : public emlite::Val {
  explicit GamepadTouch(Handle h) noexcept;
public:
    static GamepadTouch take_ownership(Handle h) noexcept;
    explicit GamepadTouch(const emlite::Val &val) noexcept;
    GamepadTouch() noexcept;
    [[nodiscard]] GamepadTouch clone() const noexcept;
    [[nodiscard]] unsigned long touchId() const;
    void touchId(unsigned long value);
    [[nodiscard]] unsigned char surfaceId() const;
    void surfaceId(unsigned char value);
    [[nodiscard]] DOMPointReadOnly position() const;
    void position(const DOMPointReadOnly& value);
    [[nodiscard]] DOMRectReadOnly surfaceDimensions() const;
    void surfaceDimensions(const DOMRectReadOnly& value);
};

/// The Gamepad class.
/// [`Gamepad`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad)
class Gamepad : public emlite::Val {
    explicit Gamepad(Handle h) noexcept;

public:
    explicit Gamepad(const emlite::Val &val) noexcept;
    static Gamepad take_ownership(Handle h) noexcept;

    [[nodiscard]] Gamepad clone() const noexcept;
    /// Getter of the `id` attribute.
    /// [`Gamepad.id`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `index` attribute.
    /// [`Gamepad.index`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/index)
    [[nodiscard]] long index() const;
    /// Getter of the `connected` attribute.
    /// [`Gamepad.connected`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/connected)
    [[nodiscard]] bool connected() const;
    /// Getter of the `timestamp` attribute.
    /// [`Gamepad.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/timestamp)
    [[nodiscard]] jsbind::Any timestamp() const;
    /// Getter of the `mapping` attribute.
    /// [`Gamepad.mapping`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/mapping)
    [[nodiscard]] GamepadMappingType mapping() const;
    /// Getter of the `axes` attribute.
    /// [`Gamepad.axes`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/axes)
    [[nodiscard]] jsbind::TypedArray<double> axes() const;
    /// Getter of the `buttons` attribute.
    /// [`Gamepad.buttons`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/buttons)
    [[nodiscard]] jsbind::TypedArray<GamepadButton> buttons() const;
    /// Getter of the `touches` attribute.
    /// [`Gamepad.touches`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/touches)
    [[nodiscard]] jsbind::TypedArray<GamepadTouch> touches() const;
    /// Getter of the `vibrationActuator` attribute.
    /// [`Gamepad.vibrationActuator`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/vibrationActuator)
    [[nodiscard]] GamepadHapticActuator vibrationActuator() const;
    /// Getter of the `hand` attribute.
    /// [`Gamepad.hand`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/hand)
    [[nodiscard]] GamepadHand hand() const;
    /// Getter of the `hapticActuators` attribute.
    /// [`Gamepad.hapticActuators`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/hapticActuators)
    [[nodiscard]] jsbind::TypedArray<GamepadHapticActuator> hapticActuators() const;
    /// Getter of the `pose` attribute.
    /// [`Gamepad.pose`](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad/pose)
    [[nodiscard]] GamepadPose pose() const;
};

