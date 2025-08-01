#include <webbind/OES_texture_float_linear.hpp>


OES_texture_float_linear OES_texture_float_linear::take_ownership(Handle h) noexcept {
        return OES_texture_float_linear(h);
    }
OES_texture_float_linear OES_texture_float_linear::clone() const noexcept { return *this; }
OES_texture_float_linear::OES_texture_float_linear(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OES_texture_float_linear::OES_texture_float_linear(const emlite::Val &val) noexcept: emlite::Val(val) {}


