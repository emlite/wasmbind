#include <webbind/GamepadEventInit.hpp>
#include <webbind/Gamepad.hpp>

using emlite::Val;
namespace webbind {

GamepadEventInit::GamepadEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
GamepadEventInit GamepadEventInit::take_ownership(Handle h) noexcept {
        return GamepadEventInit(h);
    }
GamepadEventInit::GamepadEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
GamepadEventInit::GamepadEventInit() noexcept: EventInit(emlite::Val::object()) {}
GamepadEventInit GamepadEventInit::clone() const noexcept { return *this; }

Gamepad GamepadEventInit::gamepad() const {
    return emlite::Val::get("gamepad").as<Gamepad>();
}

void GamepadEventInit::gamepad(const Gamepad& value) {
    emlite::Val::set("gamepad", value);
}


} // namespace webbind