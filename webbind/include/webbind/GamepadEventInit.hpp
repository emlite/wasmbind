#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class Gamepad;

/// Dictionary type GamepadEventInit
class GamepadEventInit : public EventInit {
  explicit GamepadEventInit(Handle h) noexcept;
public:
    static GamepadEventInit take_ownership(Handle h) noexcept;
    explicit GamepadEventInit(const emlite::Val &val) noexcept;
    GamepadEventInit() noexcept;
    [[nodiscard]] GamepadEventInit clone() const noexcept;
    /// Getter of the `gamepad` attribute.
    [[nodiscard]] Gamepad gamepad() const;
    /// Setter of the `gamepad` attribute.
    void gamepad(const Gamepad& value);
};

} // namespace webbind