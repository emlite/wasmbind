#include "webbind/WEBGL_compressed_texture_s3tc.hpp"

namespace webbind {

WEBGL_compressed_texture_s3tc WEBGL_compressed_texture_s3tc::take_ownership(Handle h) noexcept {
        return WEBGL_compressed_texture_s3tc(h);
    }
WEBGL_compressed_texture_s3tc WEBGL_compressed_texture_s3tc::clone() const noexcept { return *this; }
emlite::Val WEBGL_compressed_texture_s3tc::instance() noexcept { return emlite::Val::global("WEBGL_compressed_texture_s3tc"); }
WEBGL_compressed_texture_s3tc::WEBGL_compressed_texture_s3tc(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_compressed_texture_s3tc::WEBGL_compressed_texture_s3tc(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind