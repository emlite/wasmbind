#include <webbind/WebGLTexture.hpp>


WebGLTexture WebGLTexture::take_ownership(Handle h) noexcept {
        return WebGLTexture(h);
    }
WebGLTexture WebGLTexture::clone() const noexcept { return *this; }
WebGLTexture::WebGLTexture(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}
WebGLTexture::WebGLTexture(const emlite::Val &val) noexcept: WebGLObject(val) {}


