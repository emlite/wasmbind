#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The InputDeviceCapabilities class.
/// [`InputDeviceCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/InputDeviceCapabilities)
class InputDeviceCapabilities : public emlite::Val {
    explicit InputDeviceCapabilities(Handle h) noexcept;

public:
    explicit InputDeviceCapabilities(const emlite::Val &val) noexcept;
    static InputDeviceCapabilities take_ownership(Handle h) noexcept;

    [[nodiscard]] InputDeviceCapabilities clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new InputDeviceCapabilities(..)` constructor, creating a new InputDeviceCapabilities instance
    InputDeviceCapabilities();
    /// The `new InputDeviceCapabilities(..)` constructor, creating a new InputDeviceCapabilities instance
    InputDeviceCapabilities(const jsbind::Any& deviceInitDict);
    /// Getter of the `firesTouchEvents` attribute.
    /// [`InputDeviceCapabilities.firesTouchEvents`](https://developer.mozilla.org/en-US/docs/Web/API/InputDeviceCapabilities/firesTouchEvents)
    [[nodiscard]] bool firesTouchEvents() const;
    /// Getter of the `pointerMovementScrolls` attribute.
    /// [`InputDeviceCapabilities.pointerMovementScrolls`](https://developer.mozilla.org/en-US/docs/Web/API/InputDeviceCapabilities/pointerMovementScrolls)
    [[nodiscard]] bool pointerMovementScrolls() const;
};

