#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Gamepad;


/// The GamepadEvent class.
/// [`GamepadEvent`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadEvent)
class GamepadEvent : public Event {
    explicit GamepadEvent(Handle h) noexcept;

public:
    explicit GamepadEvent(const emlite::Val &val) noexcept;
    static GamepadEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] GamepadEvent clone() const noexcept;
    /// The `new GamepadEvent(..)` constructor, creating a new GamepadEvent instance
    GamepadEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `gamepad` attribute.
    /// [`GamepadEvent.gamepad`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadEvent/gamepad)
    [[nodiscard]] Gamepad gamepad() const;
};

