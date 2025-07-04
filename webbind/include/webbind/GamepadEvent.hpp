#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Gamepad;


class GamepadEvent : public Event {
    explicit GamepadEvent(Handle h) noexcept;

public:
    explicit GamepadEvent(const emlite::Val &val) noexcept;
    static GamepadEvent take_ownership(Handle h) noexcept;

    GamepadEvent clone() const noexcept;
    GamepadEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    Gamepad gamepad() const;
};

