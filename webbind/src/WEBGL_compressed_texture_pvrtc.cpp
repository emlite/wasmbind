#include <webbind/WEBGL_compressed_texture_pvrtc.hpp>


WEBGL_compressed_texture_pvrtc WEBGL_compressed_texture_pvrtc::take_ownership(Handle h) noexcept {
        return WEBGL_compressed_texture_pvrtc(h);
    }
WEBGL_compressed_texture_pvrtc WEBGL_compressed_texture_pvrtc::clone() const noexcept { return *this; }
emlite::Val WEBGL_compressed_texture_pvrtc::instance() noexcept { return emlite::Val::global("WEBGL_compressed_texture_pvrtc"); }
WEBGL_compressed_texture_pvrtc::WEBGL_compressed_texture_pvrtc(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_compressed_texture_pvrtc::WEBGL_compressed_texture_pvrtc(const emlite::Val &val) noexcept: emlite::Val(val) {}


