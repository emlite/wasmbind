#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRWebGLLayer;
class XRLayer;

/// Dictionary type XRRenderStateInit
/// [`XRRenderStateInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderStateInit)
class XRRenderStateInit : public emlite::Val {
  explicit XRRenderStateInit(Handle h) noexcept;
public:
    static XRRenderStateInit take_ownership(Handle h) noexcept;
    explicit XRRenderStateInit(const emlite::Val &val) noexcept;
    XRRenderStateInit() noexcept;
    [[nodiscard]] XRRenderStateInit clone() const noexcept;
    [[nodiscard]] double depthNear() const;
    void depthNear(double value);
    [[nodiscard]] double depthFar() const;
    void depthFar(double value);
    [[nodiscard]] bool passthroughFullyObscured() const;
    void passthroughFullyObscured(bool value);
    [[nodiscard]] double inlineVerticalFieldOfView() const;
    void inlineVerticalFieldOfView(double value);
    [[nodiscard]] XRWebGLLayer baseLayer() const;
    void baseLayer(const XRWebGLLayer& value);
    [[nodiscard]] jsbind::TypedArray<XRLayer> layers() const;
    void layers(const jsbind::TypedArray<XRLayer>& value);
};

} // namespace webbind