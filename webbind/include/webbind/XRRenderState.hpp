#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRWebGLLayer;
class XRLayer;

/// Interface XRRenderState
/// [`XRRenderState`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState)
class XRRenderState : public emlite::Val {
    explicit XRRenderState(Handle h) noexcept;
public:
    explicit XRRenderState(const emlite::Val &val) noexcept;
    static XRRenderState take_ownership(Handle h) noexcept;
    [[nodiscard]] XRRenderState clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRRenderState.depthNear`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/depthNear)
    /// [`XRRenderState.depthNear`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/depthNear)
    [[nodiscard]] double depthNear() const;
    /// [`XRRenderState.depthFar`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/depthFar)
    /// [`XRRenderState.depthFar`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/depthFar)
    [[nodiscard]] double depthFar() const;
    /// [`XRRenderState.passthroughFullyObscured`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/passthroughFullyObscured)
    /// [`XRRenderState.passthroughFullyObscured`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/passthroughFullyObscured)
    [[nodiscard]] bool passthroughFullyObscured() const;
    /// [`XRRenderState.inlineVerticalFieldOfView`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/inlineVerticalFieldOfView)
    /// [`XRRenderState.inlineVerticalFieldOfView`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/inlineVerticalFieldOfView)
    [[nodiscard]] double inlineVerticalFieldOfView() const;
    /// [`XRRenderState.baseLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/baseLayer)
    /// [`XRRenderState.baseLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/baseLayer)
    [[nodiscard]] XRWebGLLayer baseLayer() const;
    /// [`XRRenderState.layers`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/layers)
    /// [`XRRenderState.layers`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState/layers)
    [[nodiscard]] jsbind::TypedArray<XRLayer> layers() const;
};

} // namespace webbind