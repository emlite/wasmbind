#include <webbind/XRWebGLDepthInformation.hpp>
#include <webbind/WebGLTexture.hpp>


XRWebGLDepthInformation XRWebGLDepthInformation::take_ownership(Handle h) noexcept {
        return XRWebGLDepthInformation(h);
    }
XRWebGLDepthInformation XRWebGLDepthInformation::clone() const noexcept { return *this; }
emlite::Val XRWebGLDepthInformation::instance() noexcept { return emlite::Val::global("XRWebGLDepthInformation"); }
XRWebGLDepthInformation::XRWebGLDepthInformation(Handle h) noexcept : XRDepthInformation(emlite::Val::take_ownership(h)) {}
XRWebGLDepthInformation::XRWebGLDepthInformation(const emlite::Val &val) noexcept: XRDepthInformation(val) {}


WebGLTexture XRWebGLDepthInformation::texture() const {
    return XRDepthInformation::get("texture").as<WebGLTexture>();
}

XRTextureType XRWebGLDepthInformation::textureType() const {
    return XRDepthInformation::get("textureType").as<XRTextureType>();
}

unsigned long XRWebGLDepthInformation::imageIndex() const {
    return XRDepthInformation::get("imageIndex").as<unsigned long>();
}

