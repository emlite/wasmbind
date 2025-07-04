#include <webbind/EXT_texture_compression_rgtc.hpp>


EXT_texture_compression_rgtc EXT_texture_compression_rgtc::take_ownership(Handle h) noexcept {
        return EXT_texture_compression_rgtc(h);
    }
EXT_texture_compression_rgtc EXT_texture_compression_rgtc::clone() const noexcept { return *this; }
EXT_texture_compression_rgtc::EXT_texture_compression_rgtc(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EXT_texture_compression_rgtc::EXT_texture_compression_rgtc(const emlite::Val &val) noexcept: emlite::Val(val) {}


