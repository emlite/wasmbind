#include <webbind/EXT_color_buffer_half_float.hpp>


EXT_color_buffer_half_float EXT_color_buffer_half_float::take_ownership(Handle h) noexcept {
        return EXT_color_buffer_half_float(h);
    }
EXT_color_buffer_half_float EXT_color_buffer_half_float::clone() const noexcept { return *this; }
EXT_color_buffer_half_float::EXT_color_buffer_half_float(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EXT_color_buffer_half_float::EXT_color_buffer_half_float(const emlite::Val &val) noexcept: emlite::Val(val) {}


