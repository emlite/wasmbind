#include "webbind/OVR_multiview2.hpp"
#include "webbind/WebGLTexture.hpp"

namespace webbind {

OVR_multiview2 OVR_multiview2::take_ownership(Handle h) noexcept {
        return OVR_multiview2(h);
    }
OVR_multiview2 OVR_multiview2::clone() const noexcept { return *this; }
emlite::Val OVR_multiview2::instance() noexcept { return emlite::Val::global("OVR_multiview2"); }
OVR_multiview2::OVR_multiview2(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OVR_multiview2::OVR_multiview2(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined OVR_multiview2::framebufferTextureMultiviewOVR(const jsbind::Any& target, const jsbind::Any& attachment, const WebGLTexture& texture, const jsbind::Any& level, const jsbind::Any& baseViewIndex, const jsbind::Any& numViews) {
    return emlite::Val::call("framebufferTextureMultiviewOVR", target, attachment, texture, level, baseViewIndex, numViews).as<jsbind::Undefined>();
}


} // namespace webbind