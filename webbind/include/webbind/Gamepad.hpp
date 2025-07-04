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
    GamepadTouch clone() const noexcept;
    unsigned long touchId() const;
    void touchId(unsigned long value);
    unsigned char surfaceId() const;
    void surfaceId(unsigned char value);
    DOMPointReadOnly position() const;
    void position(const DOMPointReadOnly& value);
    DOMRectReadOnly surfaceDimensions() const;
    void surfaceDimensions(const DOMRectReadOnly& value);
};

class Gamepad : public emlite::Val {
    explicit Gamepad(Handle h) noexcept;

public:
    explicit Gamepad(const emlite::Val &val) noexcept;
    static Gamepad take_ownership(Handle h) noexcept;

    Gamepad clone() const noexcept;
    jsbind::DOMString id() const;
    long index() const;
    bool connected() const;
    jsbind::Any timestamp() const;
    GamepadMappingType mapping() const;
    jsbind::FrozenArray<double> axes() const;
    jsbind::FrozenArray<GamepadButton> buttons() const;
    jsbind::FrozenArray<GamepadTouch> touches() const;
    GamepadHapticActuator vibrationActuator() const;
    GamepadHand hand() const;
    jsbind::FrozenArray<GamepadHapticActuator> hapticActuators() const;
    GamepadPose pose() const;
};

