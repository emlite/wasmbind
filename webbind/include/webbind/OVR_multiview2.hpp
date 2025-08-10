#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class WebGLTexture;

/// Interface OVR_multiview2
/// [`OVR_multiview2`](https://developer.mozilla.org/en-US/docs/Web/API/OVR_multiview2)
class OVR_multiview2 : public emlite::Val {
    explicit OVR_multiview2(Handle h) noexcept;
public:
    explicit OVR_multiview2(const emlite::Val &val) noexcept;
    static OVR_multiview2 take_ownership(Handle h) noexcept;
    [[nodiscard]] OVR_multiview2 clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The framebufferTextureMultiviewOVR method.
    /// [`OVR_multiview2.framebufferTextureMultiviewOVR`](https://developer.mozilla.org/en-US/docs/Web/API/OVR_multiview2/framebufferTextureMultiviewOVR)
    jsbind::Undefined framebufferTextureMultiviewOVR(const jsbind::Any& target, const jsbind::Any& attachment, const WebGLTexture& texture, const jsbind::Any& level, const jsbind::Any& baseViewIndex, const jsbind::Any& numViews);
};

} // namespace webbind