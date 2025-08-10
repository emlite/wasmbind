#include <webbind/GamepadButton.hpp>

namespace webbind {

GamepadButton GamepadButton::take_ownership(Handle h) noexcept {
        return GamepadButton(h);
    }
GamepadButton GamepadButton::clone() const noexcept { return *this; }
emlite::Val GamepadButton::instance() noexcept { return emlite::Val::global("GamepadButton"); }
GamepadButton::GamepadButton(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GamepadButton::GamepadButton(const emlite::Val &val) noexcept: emlite::Val(val) {}

bool GamepadButton::pressed() const {
    return emlite::Val::get("pressed").as<bool>();
}

bool GamepadButton::touched() const {
    return emlite::Val::get("touched").as<bool>();
}

double GamepadButton::value() const {
    return emlite::Val::get("value").as<double>();
}


} // namespace webbind