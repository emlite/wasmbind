#include <webbind/EXT_texture_compression_rgtc.hpp>

namespace webbind {

EXT_texture_compression_rgtc EXT_texture_compression_rgtc::take_ownership(Handle h) noexcept {
    return EXT_texture_compression_rgtc(h);
}

EXT_texture_compression_rgtc EXT_texture_compression_rgtc::clone() const noexcept { return *this; }

emlite::Val EXT_texture_compression_rgtc::instance() noexcept { return emlite::Val::global("EXT_texture_compression_rgtc"); }

EXT_texture_compression_rgtc::EXT_texture_compression_rgtc(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

EXT_texture_compression_rgtc::EXT_texture_compression_rgtc(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind