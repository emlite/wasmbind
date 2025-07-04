#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class OES_texture_half_float_linear : public emlite::Val {
    explicit OES_texture_half_float_linear(Handle h) noexcept;

public:
    explicit OES_texture_half_float_linear(const emlite::Val &val) noexcept;
    static OES_texture_half_float_linear take_ownership(Handle h) noexcept;

    OES_texture_half_float_linear clone() const noexcept;
};

