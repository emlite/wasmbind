#include <webbind/EXT_float_blend.hpp>


EXT_float_blend EXT_float_blend::take_ownership(Handle h) noexcept {
        return EXT_float_blend(h);
    }
EXT_float_blend EXT_float_blend::clone() const noexcept { return *this; }
EXT_float_blend::EXT_float_blend(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EXT_float_blend::EXT_float_blend(const emlite::Val &val) noexcept: emlite::Val(val) {}


