#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRWebGLLayer;
class XRLayer;


/// The XRRenderState class.
/// [`XRRenderState`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState)
class XRRenderState : public emlite::Val {
    explicit XRRenderState(Handle h) noexcept;

public:
    explicit XRRenderState(const emlite::Val &val) noexcept;
    static XRRenderState take_ownership(Handle h) noexcept;

    [[nodiscard]] XRRenderState clone() const noexcept;
    /// Getter of the `depthNear` attribute.
    /// [`XRRenderState.depthNear`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/depthNear)
    [[nodiscard]] double depthNear() const;
    /// Getter of the `depthFar` attribute.
    /// [`XRRenderState.depthFar`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/depthFar)
    [[nodiscard]] double depthFar() const;
    /// Getter of the `passthroughFullyObscured` attribute.
    /// [`XRRenderState.passthroughFullyObscured`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/passthroughFullyObscured)
    [[nodiscard]] bool passthroughFullyObscured() const;
    /// Getter of the `inlineVerticalFieldOfView` attribute.
    /// [`XRRenderState.inlineVerticalFieldOfView`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/inlineVerticalFieldOfView)
    [[nodiscard]] double inlineVerticalFieldOfView() const;
    /// Getter of the `baseLayer` attribute.
    /// [`XRRenderState.baseLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/baseLayer)
    [[nodiscard]] XRWebGLLayer baseLayer() const;
    /// Getter of the `layers` attribute.
    /// [`XRRenderState.layers`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/layers)
    [[nodiscard]] jsbind::TypedArray<XRLayer> layers() const;
};

