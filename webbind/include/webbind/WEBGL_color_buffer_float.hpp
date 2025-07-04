#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WEBGL_color_buffer_float : public emlite::Val {
    explicit WEBGL_color_buffer_float(Handle h) noexcept;

public:
    explicit WEBGL_color_buffer_float(const emlite::Val &val) noexcept;
    static WEBGL_color_buffer_float take_ownership(Handle h) noexcept;

    WEBGL_color_buffer_float clone() const noexcept;
};

