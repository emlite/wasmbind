#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WebGLTexture;


class OVR_multiview2 : public emlite::Val {
    explicit OVR_multiview2(Handle h) noexcept;

public:
    explicit OVR_multiview2(const emlite::Val &val) noexcept;
    static OVR_multiview2 take_ownership(Handle h) noexcept;

    OVR_multiview2 clone() const noexcept;
    jsbind::Undefined framebufferTextureMultiviewOVR(const jsbind::Any& target, const jsbind::Any& attachment, const WebGLTexture& texture, const jsbind::Any& level, const jsbind::Any& baseViewIndex, const jsbind::Any& numViews);
};

