#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type XRWebGLLayerInit
/// [`XRWebGLLayerInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayerInit)
class XRWebGLLayerInit : public emlite::Val {
  explicit XRWebGLLayerInit(Handle h) noexcept;
public:
    static XRWebGLLayerInit take_ownership(Handle h) noexcept;
    explicit XRWebGLLayerInit(const emlite::Val &val) noexcept;
    XRWebGLLayerInit() noexcept;
    [[nodiscard]] XRWebGLLayerInit clone() const noexcept;
    [[nodiscard]] bool antialias() const;
    void antialias(bool value);
    [[nodiscard]] bool depth() const;
    void depth(bool value);
    [[nodiscard]] bool stencil() const;
    void stencil(bool value);
    [[nodiscard]] bool alpha() const;
    void alpha(bool value);
    [[nodiscard]] bool ignoreDepthValues() const;
    void ignoreDepthValues(bool value);
    [[nodiscard]] double framebufferScaleFactor() const;
    void framebufferScaleFactor(double value);
};

} // namespace webbind