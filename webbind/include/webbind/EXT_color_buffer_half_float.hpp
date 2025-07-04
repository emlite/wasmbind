#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class EXT_color_buffer_half_float : public emlite::Val {
    explicit EXT_color_buffer_half_float(Handle h) noexcept;

public:
    explicit EXT_color_buffer_half_float(const emlite::Val &val) noexcept;
    static EXT_color_buffer_half_float take_ownership(Handle h) noexcept;

    EXT_color_buffer_half_float clone() const noexcept;
};

