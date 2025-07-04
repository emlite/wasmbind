#include <webbind/XRWebGLSubImage.hpp>
#include <webbind/WebGLTexture.hpp>


XRWebGLSubImage XRWebGLSubImage::take_ownership(Handle h) noexcept {
        return XRWebGLSubImage(h);
    }
XRWebGLSubImage XRWebGLSubImage::clone() const noexcept { return *this; }
XRWebGLSubImage::XRWebGLSubImage(Handle h) noexcept : XRSubImage(emlite::Val::take_ownership(h)) {}
XRWebGLSubImage::XRWebGLSubImage(const emlite::Val &val) noexcept: XRSubImage(val) {}


WebGLTexture XRWebGLSubImage::colorTexture() const {
    return XRSubImage::get("colorTexture").as<WebGLTexture>();
}

WebGLTexture XRWebGLSubImage::depthStencilTexture() const {
    return XRSubImage::get("depthStencilTexture").as<WebGLTexture>();
}

WebGLTexture XRWebGLSubImage::motionVectorTexture() const {
    return XRSubImage::get("motionVectorTexture").as<WebGLTexture>();
}

unsigned long XRWebGLSubImage::imageIndex() const {
    return XRSubImage::get("imageIndex").as<unsigned long>();
}

unsigned long XRWebGLSubImage::colorTextureWidth() const {
    return XRSubImage::get("colorTextureWidth").as<unsigned long>();
}

unsigned long XRWebGLSubImage::colorTextureHeight() const {
    return XRSubImage::get("colorTextureHeight").as<unsigned long>();
}

unsigned long XRWebGLSubImage::depthStencilTextureWidth() const {
    return XRSubImage::get("depthStencilTextureWidth").as<unsigned long>();
}

unsigned long XRWebGLSubImage::depthStencilTextureHeight() const {
    return XRSubImage::get("depthStencilTextureHeight").as<unsigned long>();
}

unsigned long XRWebGLSubImage::motionVectorTextureWidth() const {
    return XRSubImage::get("motionVectorTextureWidth").as<unsigned long>();
}

unsigned long XRWebGLSubImage::motionVectorTextureHeight() const {
    return XRSubImage::get("motionVectorTextureHeight").as<unsigned long>();
}

