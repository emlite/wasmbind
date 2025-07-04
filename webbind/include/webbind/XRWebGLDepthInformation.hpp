#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRDepthInformation.hpp"
#include "enums.hpp"

class WebGLTexture;


class XRWebGLDepthInformation : public XRDepthInformation {
    explicit XRWebGLDepthInformation(Handle h) noexcept;

public:
    explicit XRWebGLDepthInformation(const emlite::Val &val) noexcept;
    static XRWebGLDepthInformation take_ownership(Handle h) noexcept;

    XRWebGLDepthInformation clone() const noexcept;
    WebGLTexture texture() const;
    XRTextureType textureType() const;
    unsigned long imageIndex() const;
};

