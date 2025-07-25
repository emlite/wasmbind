#include <webbind/EXT_texture_norm16.hpp>


EXT_texture_norm16 EXT_texture_norm16::take_ownership(Handle h) noexcept {
        return EXT_texture_norm16(h);
    }
EXT_texture_norm16 EXT_texture_norm16::clone() const noexcept { return *this; }
EXT_texture_norm16::EXT_texture_norm16(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EXT_texture_norm16::EXT_texture_norm16(const emlite::Val &val) noexcept: emlite::Val(val) {}


