#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class KeyboardLayoutMap : public emlite::Val {
    explicit KeyboardLayoutMap(Handle h) noexcept;

public:
    explicit KeyboardLayoutMap(const emlite::Val &val) noexcept;
    static KeyboardLayoutMap take_ownership(Handle h) noexcept;

    KeyboardLayoutMap clone() const noexcept;
};

