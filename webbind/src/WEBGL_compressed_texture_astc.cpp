#include <webbind/WEBGL_compressed_texture_astc.hpp>


WEBGL_compressed_texture_astc WEBGL_compressed_texture_astc::take_ownership(Handle h) noexcept {
        return WEBGL_compressed_texture_astc(h);
    }
WEBGL_compressed_texture_astc WEBGL_compressed_texture_astc::clone() const noexcept { return *this; }
WEBGL_compressed_texture_astc::WEBGL_compressed_texture_astc(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_compressed_texture_astc::WEBGL_compressed_texture_astc(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::TypedArray<jsbind::String> WEBGL_compressed_texture_astc::getSupportedProfiles() {
    return emlite::Val::call("getSupportedProfiles").as<jsbind::TypedArray<jsbind::String>>();
}

