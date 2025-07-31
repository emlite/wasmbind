#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRLayer.hpp"
#include "enums.hpp"

class WebGLFramebuffer;
class XRViewport;
class XRView;
class XRSession;


/// The XRWebGLLayer class.
/// [`XRWebGLLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer)
class XRWebGLLayer : public XRLayer {
    explicit XRWebGLLayer(Handle h) noexcept;

public:
    explicit XRWebGLLayer(const emlite::Val &val) noexcept;
    static XRWebGLLayer take_ownership(Handle h) noexcept;

    [[nodiscard]] XRWebGLLayer clone() const noexcept;
    /// The `new XRWebGLLayer(..)` constructor, creating a new XRWebGLLayer instance
    XRWebGLLayer(const XRSession& session, const jsbind::Any& context);
    /// The `new XRWebGLLayer(..)` constructor, creating a new XRWebGLLayer instance
    XRWebGLLayer(const XRSession& session, const jsbind::Any& context, const jsbind::Any& layerInit);
    /// Getter of the `antialias` attribute.
    /// [`XRWebGLLayer.antialias`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/antialias)
    [[nodiscard]] bool antialias() const;
    /// Getter of the `ignoreDepthValues` attribute.
    /// [`XRWebGLLayer.ignoreDepthValues`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/ignoreDepthValues)
    [[nodiscard]] bool ignoreDepthValues() const;
    /// Getter of the `fixedFoveation` attribute.
    /// [`XRWebGLLayer.fixedFoveation`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/fixedFoveation)
    [[nodiscard]] float fixedFoveation() const;
    /// Setter of the `fixedFoveation` attribute.
    /// [`XRWebGLLayer.fixedFoveation`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/fixedFoveation)
    void fixedFoveation(float value);
    /// Getter of the `framebuffer` attribute.
    /// [`XRWebGLLayer.framebuffer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/framebuffer)
    [[nodiscard]] WebGLFramebuffer framebuffer() const;
    /// Getter of the `framebufferWidth` attribute.
    /// [`XRWebGLLayer.framebufferWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/framebufferWidth)
    [[nodiscard]] unsigned long framebufferWidth() const;
    /// Getter of the `framebufferHeight` attribute.
    /// [`XRWebGLLayer.framebufferHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/framebufferHeight)
    [[nodiscard]] unsigned long framebufferHeight() const;
    /// The getViewport method.
    /// [`XRWebGLLayer.getViewport`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/getViewport)
    XRViewport getViewport(const XRView& view);
    /// The getNativeFramebufferScaleFactor method.
    /// [`XRWebGLLayer.getNativeFramebufferScaleFactor`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/getNativeFramebufferScaleFactor)
    static double getNativeFramebufferScaleFactor(const XRSession& session);
};

