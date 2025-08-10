#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class Gamepad;

/// Dictionary type GamepadEventInit
/// [`GamepadEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadEventInit)
class GamepadEventInit : public EventInit {
  explicit GamepadEventInit(Handle h) noexcept;
public:
    static GamepadEventInit take_ownership(Handle h) noexcept;
    explicit GamepadEventInit(const emlite::Val &val) noexcept;
    GamepadEventInit() noexcept;
    [[nodiscard]] GamepadEventInit clone() const noexcept;
    [[nodiscard]] Gamepad gamepad() const;
    void gamepad(const Gamepad& value);
};

} // namespace webbind