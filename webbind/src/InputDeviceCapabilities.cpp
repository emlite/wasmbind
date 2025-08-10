#include "webbind/InputDeviceCapabilities.hpp"
#include "webbind/InputDeviceCapabilitiesInit.hpp"

namespace webbind {

InputDeviceCapabilities InputDeviceCapabilities::take_ownership(Handle h) noexcept {
        return InputDeviceCapabilities(h);
    }
InputDeviceCapabilities InputDeviceCapabilities::clone() const noexcept { return *this; }
emlite::Val InputDeviceCapabilities::instance() noexcept { return emlite::Val::global("InputDeviceCapabilities"); }
InputDeviceCapabilities::InputDeviceCapabilities(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
InputDeviceCapabilities::InputDeviceCapabilities(const emlite::Val &val) noexcept: emlite::Val(val) {}

InputDeviceCapabilities::InputDeviceCapabilities() : emlite::Val(emlite::Val::global("InputDeviceCapabilities").new_()) {}

InputDeviceCapabilities::InputDeviceCapabilities(const InputDeviceCapabilitiesInit& deviceInitDict) : emlite::Val(emlite::Val::global("InputDeviceCapabilities").new_(deviceInitDict)) {}

bool InputDeviceCapabilities::firesTouchEvents() const {
    return emlite::Val::get("firesTouchEvents").as<bool>();
}

bool InputDeviceCapabilities::pointerMovementScrolls() const {
    return emlite::Val::get("pointerMovementScrolls").as<bool>();
}


} // namespace webbind