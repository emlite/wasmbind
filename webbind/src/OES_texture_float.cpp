#include <webbind/OES_texture_float.hpp>


OES_texture_float OES_texture_float::take_ownership(Handle h) noexcept {
        return OES_texture_float(h);
    }
OES_texture_float OES_texture_float::clone() const noexcept { return *this; }
OES_texture_float::OES_texture_float(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OES_texture_float::OES_texture_float(const emlite::Val &val) noexcept: emlite::Val(val) {}


