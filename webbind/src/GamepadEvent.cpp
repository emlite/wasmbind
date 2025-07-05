#include <webbind/GamepadEvent.hpp>
#include <webbind/Gamepad.hpp>


GamepadEvent GamepadEvent::take_ownership(Handle h) noexcept {
        return GamepadEvent(h);
    }
GamepadEvent GamepadEvent::clone() const noexcept { return *this; }
GamepadEvent::GamepadEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
GamepadEvent::GamepadEvent(const emlite::Val &val) noexcept: Event(val) {}


GamepadEvent::GamepadEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("GamepadEvent").new_(type, eventInitDict)) {}

Gamepad GamepadEvent::gamepad() const {
    return Event::get("gamepad").as<Gamepad>();
}

