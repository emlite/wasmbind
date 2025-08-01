#include <webbind/EXT_blend_minmax.hpp>


EXT_blend_minmax EXT_blend_minmax::take_ownership(Handle h) noexcept {
        return EXT_blend_minmax(h);
    }
EXT_blend_minmax EXT_blend_minmax::clone() const noexcept { return *this; }
EXT_blend_minmax::EXT_blend_minmax(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EXT_blend_minmax::EXT_blend_minmax(const emlite::Val &val) noexcept: emlite::Val(val) {}


