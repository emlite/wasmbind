#include "webbind/WEBGL_compressed_texture_s3tc_srgb.hpp"

namespace webbind {

WEBGL_compressed_texture_s3tc_srgb WEBGL_compressed_texture_s3tc_srgb::take_ownership(Handle h) noexcept {
        return WEBGL_compressed_texture_s3tc_srgb(h);
    }
WEBGL_compressed_texture_s3tc_srgb WEBGL_compressed_texture_s3tc_srgb::clone() const noexcept { return *this; }
emlite::Val WEBGL_compressed_texture_s3tc_srgb::instance() noexcept { return emlite::Val::global("WEBGL_compressed_texture_s3tc_srgb"); }
WEBGL_compressed_texture_s3tc_srgb::WEBGL_compressed_texture_s3tc_srgb(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_compressed_texture_s3tc_srgb::WEBGL_compressed_texture_s3tc_srgb(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind