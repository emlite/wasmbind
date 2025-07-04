#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRLayer.hpp"
#include "enums.hpp"

class WebGLFramebuffer;
class XRViewport;
class XRView;
class XRSession;


class XRWebGLLayer : public XRLayer {
    explicit XRWebGLLayer(Handle h) noexcept;

public:
    explicit XRWebGLLayer(const emlite::Val &val) noexcept;
    static XRWebGLLayer take_ownership(Handle h) noexcept;

    XRWebGLLayer clone() const noexcept;
    XRWebGLLayer(const XRSession& session, const jsbind::Any& context, const jsbind::Any& layerInit);
    bool antialias() const;
    bool ignoreDepthValues() const;
    float fixedFoveation() const;
    void fixedFoveation(float value);
    WebGLFramebuffer framebuffer() const;
    unsigned long framebufferWidth() const;
    unsigned long framebufferHeight() const;
    XRViewport getViewport(const XRView& view);
    static double getNativeFramebufferScaleFactor(const XRSession& session);
};

