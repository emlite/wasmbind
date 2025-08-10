#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRLayer.hpp"

namespace webbind {

class XRSession;
class XRWebGLLayerInit;
class WebGLFramebuffer;
class XRViewport;
class XRView;

/// Interface XRWebGLLayer
/// [`XRWebGLLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer)
class XRWebGLLayer : public XRLayer {
    explicit XRWebGLLayer(Handle h) noexcept;
public:
    explicit XRWebGLLayer(const emlite::Val &val) noexcept;
    static XRWebGLLayer take_ownership(Handle h) noexcept;
    [[nodiscard]] XRWebGLLayer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new XRWebGLLayer(..)` constructor, creating a new XRWebGLLayer instance
    XRWebGLLayer(const XRSession& session, const jsbind::Any& context);
    /// The `new XRWebGLLayer(..)` constructor, creating a new XRWebGLLayer instance
    XRWebGLLayer(const XRSession& session, const jsbind::Any& context, const XRWebGLLayerInit& layerInit);
    /// [`XRWebGLLayer.antialias`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/antialias)
    /// [`XRWebGLLayer.antialias`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/antialias)
    [[nodiscard]] bool antialias() const;
    /// [`XRWebGLLayer.ignoreDepthValues`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/ignoreDepthValues)
    /// [`XRWebGLLayer.ignoreDepthValues`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/ignoreDepthValues)
    [[nodiscard]] bool ignoreDepthValues() const;
    /// [`XRWebGLLayer.fixedFoveation`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/fixedFoveation)
    /// [`XRWebGLLayer.fixedFoveation`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/fixedFoveation)
    [[nodiscard]] float fixedFoveation() const;
    /// Setter of the `fixedFoveation` attribute.
    /// [`XRWebGLLayer.fixedFoveation`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/fixedFoveation)
    void fixedFoveation(float value);
    /// [`XRWebGLLayer.framebuffer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/framebuffer)
    /// [`XRWebGLLayer.framebuffer`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/framebuffer)
    [[nodiscard]] WebGLFramebuffer framebuffer() const;
    /// [`XRWebGLLayer.framebufferWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/framebufferWidth)
    /// [`XRWebGLLayer.framebufferWidth`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/framebufferWidth)
    [[nodiscard]] unsigned long framebufferWidth() const;
    /// [`XRWebGLLayer.framebufferHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/framebufferHeight)
    /// [`XRWebGLLayer.framebufferHeight`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/framebufferHeight)
    [[nodiscard]] unsigned long framebufferHeight() const;
    /// The getViewport method.
    /// [`XRWebGLLayer.getViewport`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/getViewport)
    XRViewport getViewport(const XRView& view);
    /// The getNativeFramebufferScaleFactor method.
    /// [`XRWebGLLayer.getNativeFramebufferScaleFactor`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer/getNativeFramebufferScaleFactor)
    static double getNativeFramebufferScaleFactor(const XRSession& session);
};

} // namespace webbind