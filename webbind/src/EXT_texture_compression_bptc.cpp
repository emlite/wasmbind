#include <webbind/EXT_texture_compression_bptc.hpp>


EXT_texture_compression_bptc EXT_texture_compression_bptc::take_ownership(Handle h) noexcept {
        return EXT_texture_compression_bptc(h);
    }
EXT_texture_compression_bptc EXT_texture_compression_bptc::clone() const noexcept { return *this; }
EXT_texture_compression_bptc::EXT_texture_compression_bptc(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EXT_texture_compression_bptc::EXT_texture_compression_bptc(const emlite::Val &val) noexcept: emlite::Val(val) {}


