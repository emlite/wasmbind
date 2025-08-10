#include "webbind/WEBGL_depth_texture.hpp"

namespace webbind {

WEBGL_depth_texture WEBGL_depth_texture::take_ownership(Handle h) noexcept {
        return WEBGL_depth_texture(h);
    }
WEBGL_depth_texture WEBGL_depth_texture::clone() const noexcept { return *this; }
emlite::Val WEBGL_depth_texture::instance() noexcept { return emlite::Val::global("WEBGL_depth_texture"); }
WEBGL_depth_texture::WEBGL_depth_texture(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_depth_texture::WEBGL_depth_texture(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind