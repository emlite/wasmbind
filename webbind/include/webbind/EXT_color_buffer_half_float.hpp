#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The EXT_color_buffer_half_float class.
/// [`EXT_color_buffer_half_float`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_color_buffer_half_float)
class EXT_color_buffer_half_float : public emlite::Val {
    explicit EXT_color_buffer_half_float(Handle h) noexcept;

public:
    explicit EXT_color_buffer_half_float(const emlite::Val &val) noexcept;
    static EXT_color_buffer_half_float take_ownership(Handle h) noexcept;

    [[nodiscard]] EXT_color_buffer_half_float clone() const noexcept;
};

