#include "webbind/WEBGL_compressed_texture_etc1.hpp"

namespace webbind {

WEBGL_compressed_texture_etc1 WEBGL_compressed_texture_etc1::take_ownership(Handle h) noexcept {
        return WEBGL_compressed_texture_etc1(h);
    }
WEBGL_compressed_texture_etc1 WEBGL_compressed_texture_etc1::clone() const noexcept { return *this; }
emlite::Val WEBGL_compressed_texture_etc1::instance() noexcept { return emlite::Val::global("WEBGL_compressed_texture_etc1"); }
WEBGL_compressed_texture_etc1::WEBGL_compressed_texture_etc1(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_compressed_texture_etc1::WEBGL_compressed_texture_etc1(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind