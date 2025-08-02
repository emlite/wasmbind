#include <webbind/WEBGL_compressed_texture_etc.hpp>


WEBGL_compressed_texture_etc WEBGL_compressed_texture_etc::take_ownership(Handle h) noexcept {
        return WEBGL_compressed_texture_etc(h);
    }
WEBGL_compressed_texture_etc WEBGL_compressed_texture_etc::clone() const noexcept { return *this; }
emlite::Val WEBGL_compressed_texture_etc::instance() noexcept { return emlite::Val::global("WEBGL_compressed_texture_etc"); }
WEBGL_compressed_texture_etc::WEBGL_compressed_texture_etc(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_compressed_texture_etc::WEBGL_compressed_texture_etc(const emlite::Val &val) noexcept: emlite::Val(val) {}


