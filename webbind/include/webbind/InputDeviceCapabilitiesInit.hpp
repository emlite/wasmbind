#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type InputDeviceCapabilitiesInit
/// [`InputDeviceCapabilitiesInit`](https://developer.mozilla.org/en-US/docs/Web/API/InputDeviceCapabilitiesInit)
class InputDeviceCapabilitiesInit : public emlite::Val {
  explicit InputDeviceCapabilitiesInit(Handle h) noexcept;
public:
    static InputDeviceCapabilitiesInit take_ownership(Handle h) noexcept;
    explicit InputDeviceCapabilitiesInit(const emlite::Val &val) noexcept;
    InputDeviceCapabilitiesInit() noexcept;
    [[nodiscard]] InputDeviceCapabilitiesInit clone() const noexcept;
    [[nodiscard]] bool firesTouchEvents() const;
    void firesTouchEvents(bool value);
    [[nodiscard]] bool pointerMovementScrolls() const;
    void pointerMovementScrolls(bool value);
};

} // namespace webbind