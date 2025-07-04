#include <webbind/OES_texture_half_float.hpp>


OES_texture_half_float OES_texture_half_float::take_ownership(Handle h) noexcept {
        return OES_texture_half_float(h);
    }
OES_texture_half_float OES_texture_half_float::clone() const noexcept { return *this; }
OES_texture_half_float::OES_texture_half_float(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OES_texture_half_float::OES_texture_half_float(const emlite::Val &val) noexcept: emlite::Val(val) {}


