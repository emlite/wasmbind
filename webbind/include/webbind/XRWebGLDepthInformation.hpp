#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRDepthInformation.hpp"
#include "enums.hpp"

class WebGLTexture;


/// The XRWebGLDepthInformation class.
/// [`XRWebGLDepthInformation`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLDepthInformation)
class XRWebGLDepthInformation : public XRDepthInformation {
    explicit XRWebGLDepthInformation(Handle h) noexcept;

public:
    explicit XRWebGLDepthInformation(const emlite::Val &val) noexcept;
    static XRWebGLDepthInformation take_ownership(Handle h) noexcept;

    [[nodiscard]] XRWebGLDepthInformation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `texture` attribute.
    /// [`XRWebGLDepthInformation.texture`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLDepthInformation/texture)
    [[nodiscard]] WebGLTexture texture() const;
    /// Getter of the `textureType` attribute.
    /// [`XRWebGLDepthInformation.textureType`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLDepthInformation/textureType)
    [[nodiscard]] XRTextureType textureType() const;
    /// Getter of the `imageIndex` attribute.
    /// [`XRWebGLDepthInformation.imageIndex`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLDepthInformation/imageIndex)
    [[nodiscard]] unsigned long imageIndex() const;
};

