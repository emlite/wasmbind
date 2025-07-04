#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GamepadButton : public emlite::Val {
    explicit GamepadButton(Handle h) noexcept;

public:
    explicit GamepadButton(const emlite::Val &val) noexcept;
    static GamepadButton take_ownership(Handle h) noexcept;

    GamepadButton clone() const noexcept;
    bool pressed() const;
    bool touched() const;
    double value() const;
};

