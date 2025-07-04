#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRWebGLLayer;
class XRLayer;


class XRRenderState : public emlite::Val {
    explicit XRRenderState(Handle h) noexcept;

public:
    explicit XRRenderState(const emlite::Val &val) noexcept;
    static XRRenderState take_ownership(Handle h) noexcept;

    XRRenderState clone() const noexcept;
    double depthNear() const;
    double depthFar() const;
    bool passthroughFullyObscured() const;
    double inlineVerticalFieldOfView() const;
    XRWebGLLayer baseLayer() const;
    jsbind::FrozenArray<XRLayer> layers() const;
};

