#include <webbind/EXT_shader_texture_lod.hpp>


EXT_shader_texture_lod EXT_shader_texture_lod::take_ownership(Handle h) noexcept {
        return EXT_shader_texture_lod(h);
    }
EXT_shader_texture_lod EXT_shader_texture_lod::clone() const noexcept { return *this; }
EXT_shader_texture_lod::EXT_shader_texture_lod(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EXT_shader_texture_lod::EXT_shader_texture_lod(const emlite::Val &val) noexcept: emlite::Val(val) {}


