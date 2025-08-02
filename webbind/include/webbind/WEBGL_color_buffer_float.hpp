#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WEBGL_color_buffer_float class.
/// [`WEBGL_color_buffer_float`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_color_buffer_float)
class WEBGL_color_buffer_float : public emlite::Val {
    explicit WEBGL_color_buffer_float(Handle h) noexcept;

public:
    explicit WEBGL_color_buffer_float(const emlite::Val &val) noexcept;
    static WEBGL_color_buffer_float take_ownership(Handle h) noexcept;

    [[nodiscard]] WEBGL_color_buffer_float clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

