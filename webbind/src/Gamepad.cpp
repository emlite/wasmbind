#include <webbind/Gamepad.hpp>
#include <webbind/GamepadButton.hpp>
#include <webbind/GamepadHapticActuator.hpp>
#include <webbind/GamepadPose.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/DOMPointReadOnly.hpp>


GamepadTouch::GamepadTouch(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GamepadTouch GamepadTouch::take_ownership(Handle h) noexcept {
        return GamepadTouch(h);
    }
GamepadTouch::GamepadTouch(const emlite::Val &val) noexcept: emlite::Val(val) {}
GamepadTouch::GamepadTouch() noexcept: emlite::Val(emlite::Val::object()) {}
GamepadTouch GamepadTouch::clone() const noexcept { return *this; }

unsigned long GamepadTouch::touchId() const {
    return emlite::Val::get("touchId").as<unsigned long>();
}

void GamepadTouch::touchId(unsigned long value) {
    emlite::Val::set("touchId", value);
}

unsigned char GamepadTouch::surfaceId() const {
    return emlite::Val::get("surfaceId").as<unsigned char>();
}

void GamepadTouch::surfaceId(unsigned char value) {
    emlite::Val::set("surfaceId", value);
}

DOMPointReadOnly GamepadTouch::position() const {
    return emlite::Val::get("position").as<DOMPointReadOnly>();
}

void GamepadTouch::position(const DOMPointReadOnly& value) {
    emlite::Val::set("position", value);
}

DOMRectReadOnly GamepadTouch::surfaceDimensions() const {
    return emlite::Val::get("surfaceDimensions").as<DOMRectReadOnly>();
}

void GamepadTouch::surfaceDimensions(const DOMRectReadOnly& value) {
    emlite::Val::set("surfaceDimensions", value);
}

Gamepad Gamepad::take_ownership(Handle h) noexcept {
        return Gamepad(h);
    }
Gamepad Gamepad::clone() const noexcept { return *this; }
Gamepad::Gamepad(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Gamepad::Gamepad(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String Gamepad::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

long Gamepad::index() const {
    return emlite::Val::get("index").as<long>();
}

bool Gamepad::connected() const {
    return emlite::Val::get("connected").as<bool>();
}

jsbind::Any Gamepad::timestamp() const {
    return emlite::Val::get("timestamp").as<jsbind::Any>();
}

GamepadMappingType Gamepad::mapping() const {
    return emlite::Val::get("mapping").as<GamepadMappingType>();
}

jsbind::TypedArray<double> Gamepad::axes() const {
    return emlite::Val::get("axes").as<jsbind::TypedArray<double>>();
}

jsbind::TypedArray<GamepadButton> Gamepad::buttons() const {
    return emlite::Val::get("buttons").as<jsbind::TypedArray<GamepadButton>>();
}

jsbind::TypedArray<GamepadTouch> Gamepad::touches() const {
    return emlite::Val::get("touches").as<jsbind::TypedArray<GamepadTouch>>();
}

GamepadHapticActuator Gamepad::vibrationActuator() const {
    return emlite::Val::get("vibrationActuator").as<GamepadHapticActuator>();
}

GamepadHand Gamepad::hand() const {
    return emlite::Val::get("hand").as<GamepadHand>();
}

jsbind::TypedArray<GamepadHapticActuator> Gamepad::hapticActuators() const {
    return emlite::Val::get("hapticActuators").as<jsbind::TypedArray<GamepadHapticActuator>>();
}

GamepadPose Gamepad::pose() const {
    return emlite::Val::get("pose").as<GamepadPose>();
}

