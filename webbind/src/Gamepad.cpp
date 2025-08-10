#include "webbind/Gamepad.hpp"
#include "webbind/GamepadButton.hpp"
#include "webbind/GamepadTouch.hpp"
#include "webbind/GamepadHapticActuator.hpp"
#include "webbind/GamepadPose.hpp"

namespace webbind {

Gamepad Gamepad::take_ownership(Handle h) noexcept {
        return Gamepad(h);
    }
Gamepad Gamepad::clone() const noexcept { return *this; }
emlite::Val Gamepad::instance() noexcept { return emlite::Val::global("Gamepad"); }
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


} // namespace webbind