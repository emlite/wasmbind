#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type XRWebGLLayerInit
class XRWebGLLayerInit : public emlite::Val {
  explicit XRWebGLLayerInit(Handle h) noexcept;
public:
    static XRWebGLLayerInit take_ownership(Handle h) noexcept;
    explicit XRWebGLLayerInit(const emlite::Val &val) noexcept;
    XRWebGLLayerInit() noexcept;
    [[nodiscard]] XRWebGLLayerInit clone() const noexcept;
    /// Getter of the `antialias` attribute.
    [[nodiscard]] bool antialias() const;
    /// Setter of the `antialias` attribute.
    void antialias(bool value);
    /// Getter of the `depth` attribute.
    [[nodiscard]] bool depth() const;
    /// Setter of the `depth` attribute.
    void depth(bool value);
    /// Getter of the `stencil` attribute.
    [[nodiscard]] bool stencil() const;
    /// Setter of the `stencil` attribute.
    void stencil(bool value);
    /// Getter of the `alpha` attribute.
    [[nodiscard]] bool alpha() const;
    /// Setter of the `alpha` attribute.
    void alpha(bool value);
    /// Getter of the `ignoreDepthValues` attribute.
    [[nodiscard]] bool ignoreDepthValues() const;
    /// Setter of the `ignoreDepthValues` attribute.
    void ignoreDepthValues(bool value);
    /// Getter of the `framebufferScaleFactor` attribute.
    [[nodiscard]] double framebufferScaleFactor() const;
    /// Setter of the `framebufferScaleFactor` attribute.
    void framebufferScaleFactor(double value);
};

} // namespace webbind