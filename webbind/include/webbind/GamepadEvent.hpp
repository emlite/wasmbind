#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "GamepadEventInit.hpp"

namespace webbind {

class Gamepad;

/// Interface GamepadEvent
/// [`GamepadEvent`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadEvent)
class GamepadEvent : public Event {
    explicit GamepadEvent(Handle h) noexcept;
public:
    explicit GamepadEvent(const emlite::Val &val) noexcept;
    static GamepadEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] GamepadEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new GamepadEvent(..)` constructor, creating a new GamepadEvent instance
    GamepadEvent(const jsbind::String& type, const GamepadEventInit& eventInitDict);
    /// [`GamepadEvent.gamepad`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadEvent/gamepad)
    /// [`GamepadEvent.gamepad`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadEvent/gamepad)
    [[nodiscard]] Gamepad gamepad() const;
};

} // namespace webbind