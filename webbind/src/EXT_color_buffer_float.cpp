#include <webbind/EXT_color_buffer_float.hpp>


EXT_color_buffer_float EXT_color_buffer_float::take_ownership(Handle h) noexcept {
        return EXT_color_buffer_float(h);
    }
EXT_color_buffer_float EXT_color_buffer_float::clone() const noexcept { return *this; }
emlite::Val EXT_color_buffer_float::instance() noexcept { return emlite::Val::global("EXT_color_buffer_float"); }
EXT_color_buffer_float::EXT_color_buffer_float(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EXT_color_buffer_float::EXT_color_buffer_float(const emlite::Val &val) noexcept: emlite::Val(val) {}


