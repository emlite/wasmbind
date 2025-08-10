#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRSubImage.hpp"

namespace webbind {

class WebGLTexture;

/// Interface XRWebGLSubImage
/// [`XRWebGLSubImage`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage)
class XRWebGLSubImage : public XRSubImage {
    explicit XRWebGLSubImage(Handle h) noexcept;
public:
    explicit XRWebGLSubImage(const emlite::Val &val) noexcept;
    static XRWebGLSubImage take_ownership(Handle h) noexcept;
    [[nodiscard]] XRWebGLSubImage clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRWebGLSubImage.colorTexture`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/colorTexture)
    /// [`XRWebGLSubImage.colorTexture`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/colorTexture)
    [[nodiscard]] WebGLTexture colorTexture() const;
    /// [`XRWebGLSubImage.depthStencilTexture`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/depthStencilTexture)
    /// [`XRWebGLSubImage.depthStencilTexture`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/depthStencilTexture)
    [[nodiscard]] WebGLTexture depthStencilTexture() const;
    /// [`XRWebGLSubImage.motionVectorTexture`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/motionVectorTexture)
    /// [`XRWebGLSubImage.motionVectorTexture`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/motionVectorTexture)
    [[nodiscard]] WebGLTexture motionVectorTexture() const;
    /// [`XRWebGLSubImage.imageIndex`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/imageIndex)
    /// [`XRWebGLSubImage.imageIndex`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/imageIndex)
    [[nodiscard]] unsigned long imageIndex() const;
    /// [`XRWebGLSubImage.colorTextureWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/colorTextureWidth)
    /// [`XRWebGLSubImage.colorTextureWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/colorTextureWidth)
    [[nodiscard]] unsigned long colorTextureWidth() const;
    /// [`XRWebGLSubImage.colorTextureHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/colorTextureHeight)
    /// [`XRWebGLSubImage.colorTextureHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/colorTextureHeight)
    [[nodiscard]] unsigned long colorTextureHeight() const;
    /// [`XRWebGLSubImage.depthStencilTextureWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/depthStencilTextureWidth)
    /// [`XRWebGLSubImage.depthStencilTextureWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/depthStencilTextureWidth)
    [[nodiscard]] unsigned long depthStencilTextureWidth() const;
    /// [`XRWebGLSubImage.depthStencilTextureHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/depthStencilTextureHeight)
    /// [`XRWebGLSubImage.depthStencilTextureHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/depthStencilTextureHeight)
    [[nodiscard]] unsigned long depthStencilTextureHeight() const;
    /// [`XRWebGLSubImage.motionVectorTextureWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/motionVectorTextureWidth)
    /// [`XRWebGLSubImage.motionVectorTextureWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/motionVectorTextureWidth)
    [[nodiscard]] unsigned long motionVectorTextureWidth() const;
    /// [`XRWebGLSubImage.motionVectorTextureHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/motionVectorTextureHeight)
    /// [`XRWebGLSubImage.motionVectorTextureHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/motionVectorTextureHeight)
    [[nodiscard]] unsigned long motionVectorTextureHeight() const;
};

} // namespace webbind