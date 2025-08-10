#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRWebGLLayer;
class XRLayer;

/// Dictionary type XRRenderStateInit
class XRRenderStateInit : public emlite::Val {
  explicit XRRenderStateInit(Handle h) noexcept;
public:
    static XRRenderStateInit take_ownership(Handle h) noexcept;
    explicit XRRenderStateInit(const emlite::Val &val) noexcept;
    XRRenderStateInit() noexcept;
    [[nodiscard]] XRRenderStateInit clone() const noexcept;
    /// Getter of the `depthNear` attribute.
    [[nodiscard]] double depthNear() const;
    /// Setter of the `depthNear` attribute.
    void depthNear(double value);
    /// Getter of the `depthFar` attribute.
    [[nodiscard]] double depthFar() const;
    /// Setter of the `depthFar` attribute.
    void depthFar(double value);
    /// Getter of the `passthroughFullyObscured` attribute.
    [[nodiscard]] bool passthroughFullyObscured() const;
    /// Setter of the `passthroughFullyObscured` attribute.
    void passthroughFullyObscured(bool value);
    /// Getter of the `inlineVerticalFieldOfView` attribute.
    [[nodiscard]] double inlineVerticalFieldOfView() const;
    /// Setter of the `inlineVerticalFieldOfView` attribute.
    void inlineVerticalFieldOfView(double value);
    /// Getter of the `baseLayer` attribute.
    [[nodiscard]] XRWebGLLayer baseLayer() const;
    /// Setter of the `baseLayer` attribute.
    void baseLayer(const XRWebGLLayer& value);
    /// Getter of the `layers` attribute.
    [[nodiscard]] jsbind::TypedArray<XRLayer> layers() const;
    /// Setter of the `layers` attribute.
    void layers(const jsbind::TypedArray<XRLayer>& value);
};

} // namespace webbind