#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRSubImage.hpp"
#include "enums.hpp"

class WebGLTexture;


class XRWebGLSubImage : public XRSubImage {
    explicit XRWebGLSubImage(Handle h) noexcept;

public:
    explicit XRWebGLSubImage(const emlite::Val &val) noexcept;
    static XRWebGLSubImage take_ownership(Handle h) noexcept;

    XRWebGLSubImage clone() const noexcept;
    WebGLTexture colorTexture() const;
    WebGLTexture depthStencilTexture() const;
    WebGLTexture motionVectorTexture() const;
    unsigned long imageIndex() const;
    unsigned long colorTextureWidth() const;
    unsigned long colorTextureHeight() const;
    unsigned long depthStencilTextureWidth() const;
    unsigned long depthStencilTextureHeight() const;
    unsigned long motionVectorTextureWidth() const;
    unsigned long motionVectorTextureHeight() const;
};

