#include <webbind/InputDeviceCapabilitiesInit.hpp>

namespace webbind {

InputDeviceCapabilitiesInit::InputDeviceCapabilitiesInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
InputDeviceCapabilitiesInit InputDeviceCapabilitiesInit::take_ownership(Handle h) noexcept {
    return InputDeviceCapabilitiesInit(h);
}

InputDeviceCapabilitiesInit::InputDeviceCapabilitiesInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

InputDeviceCapabilitiesInit::InputDeviceCapabilitiesInit() noexcept: emlite::Val(emlite::Val::object()) {}

InputDeviceCapabilitiesInit InputDeviceCapabilitiesInit::clone() const noexcept { return *this; }

bool InputDeviceCapabilitiesInit::firesTouchEvents() const {
    return emlite::Val::get("firesTouchEvents").as<bool>();
}

void InputDeviceCapabilitiesInit::firesTouchEvents(bool value) {
    emlite::Val::set("firesTouchEvents", value);
}

bool InputDeviceCapabilitiesInit::pointerMovementScrolls() const {
    return emlite::Val::get("pointerMovementScrolls").as<bool>();
}

void InputDeviceCapabilitiesInit::pointerMovementScrolls(bool value) {
    emlite::Val::set("pointerMovementScrolls", value);
}


} // namespace webbind