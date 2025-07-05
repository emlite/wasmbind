#include <webbind/InputDeviceCapabilities.hpp>


InputDeviceCapabilities InputDeviceCapabilities::take_ownership(Handle h) noexcept {
        return InputDeviceCapabilities(h);
    }
InputDeviceCapabilities InputDeviceCapabilities::clone() const noexcept { return *this; }
InputDeviceCapabilities::InputDeviceCapabilities(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
InputDeviceCapabilities::InputDeviceCapabilities(const emlite::Val &val) noexcept: emlite::Val(val) {}


InputDeviceCapabilities::InputDeviceCapabilities() : emlite::Val(emlite::Val::global("InputDeviceCapabilities").new_()) {}

InputDeviceCapabilities::InputDeviceCapabilities(const jsbind::Any& deviceInitDict) : emlite::Val(emlite::Val::global("InputDeviceCapabilities").new_(deviceInitDict)) {}

bool InputDeviceCapabilities::firesTouchEvents() const {
    return emlite::Val::get("firesTouchEvents").as<bool>();
}

bool InputDeviceCapabilities::pointerMovementScrolls() const {
    return emlite::Val::get("pointerMovementScrolls").as<bool>();
}

