#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRSubImage.hpp"
#include "enums.hpp"

class WebGLTexture;


/// The XRWebGLSubImage class.
/// [`XRWebGLSubImage`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage)
class XRWebGLSubImage : public XRSubImage {
    explicit XRWebGLSubImage(Handle h) noexcept;

public:
    explicit XRWebGLSubImage(const emlite::Val &val) noexcept;
    static XRWebGLSubImage take_ownership(Handle h) noexcept;

    [[nodiscard]] XRWebGLSubImage clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `colorTexture` attribute.
    /// [`XRWebGLSubImage.colorTexture`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/colorTexture)
    [[nodiscard]] WebGLTexture colorTexture() const;
    /// Getter of the `depthStencilTexture` attribute.
    /// [`XRWebGLSubImage.depthStencilTexture`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/depthStencilTexture)
    [[nodiscard]] WebGLTexture depthStencilTexture() const;
    /// Getter of the `motionVectorTexture` attribute.
    /// [`XRWebGLSubImage.motionVectorTexture`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/motionVectorTexture)
    [[nodiscard]] WebGLTexture motionVectorTexture() const;
    /// Getter of the `imageIndex` attribute.
    /// [`XRWebGLSubImage.imageIndex`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/imageIndex)
    [[nodiscard]] unsigned long imageIndex() const;
    /// Getter of the `colorTextureWidth` attribute.
    /// [`XRWebGLSubImage.colorTextureWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/colorTextureWidth)
    [[nodiscard]] unsigned long colorTextureWidth() const;
    /// Getter of the `colorTextureHeight` attribute.
    /// [`XRWebGLSubImage.colorTextureHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/colorTextureHeight)
    [[nodiscard]] unsigned long colorTextureHeight() const;
    /// Getter of the `depthStencilTextureWidth` attribute.
    /// [`XRWebGLSubImage.depthStencilTextureWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/depthStencilTextureWidth)
    [[nodiscard]] unsigned long depthStencilTextureWidth() const;
    /// Getter of the `depthStencilTextureHeight` attribute.
    /// [`XRWebGLSubImage.depthStencilTextureHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/depthStencilTextureHeight)
    [[nodiscard]] unsigned long depthStencilTextureHeight() const;
    /// Getter of the `motionVectorTextureWidth` attribute.
    /// [`XRWebGLSubImage.motionVectorTextureWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/motionVectorTextureWidth)
    [[nodiscard]] unsigned long motionVectorTextureWidth() const;
    /// Getter of the `motionVectorTextureHeight` attribute.
    /// [`XRWebGLSubImage.motionVectorTextureHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage/motionVectorTextureHeight)
    [[nodiscard]] unsigned long motionVectorTextureHeight() const;
};

