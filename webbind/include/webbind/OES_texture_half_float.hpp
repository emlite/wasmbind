#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class OES_texture_half_float : public emlite::Val {
    explicit OES_texture_half_float(Handle h) noexcept;

public:
    explicit OES_texture_half_float(const emlite::Val &val) noexcept;
    static OES_texture_half_float take_ownership(Handle h) noexcept;

    OES_texture_half_float clone() const noexcept;
};

