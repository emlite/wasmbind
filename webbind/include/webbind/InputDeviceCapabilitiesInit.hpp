#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type InputDeviceCapabilitiesInit
class InputDeviceCapabilitiesInit : public emlite::Val {
  explicit InputDeviceCapabilitiesInit(Handle h) noexcept;
public:
    static InputDeviceCapabilitiesInit take_ownership(Handle h) noexcept;
    explicit InputDeviceCapabilitiesInit(const emlite::Val &val) noexcept;
    InputDeviceCapabilitiesInit() noexcept;
    [[nodiscard]] InputDeviceCapabilitiesInit clone() const noexcept;
    /// Getter of the `firesTouchEvents` attribute.
    [[nodiscard]] bool firesTouchEvents() const;
    /// Setter of the `firesTouchEvents` attribute.
    void firesTouchEvents(bool value);
    /// Getter of the `pointerMovementScrolls` attribute.
    [[nodiscard]] bool pointerMovementScrolls() const;
    /// Setter of the `pointerMovementScrolls` attribute.
    void pointerMovementScrolls(bool value);
};

} // namespace webbind