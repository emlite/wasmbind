#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class InputDeviceCapabilities : public emlite::Val {
    explicit InputDeviceCapabilities(Handle h) noexcept;

public:
    explicit InputDeviceCapabilities(const emlite::Val &val) noexcept;
    static InputDeviceCapabilities take_ownership(Handle h) noexcept;

    InputDeviceCapabilities clone() const noexcept;
    InputDeviceCapabilities();
    InputDeviceCapabilities(const jsbind::Any& deviceInitDict);
    bool firesTouchEvents() const;
    bool pointerMovementScrolls() const;
};

