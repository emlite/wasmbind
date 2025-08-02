#include <webbind/XRRenderState.hpp>
#include <webbind/XRWebGLLayer.hpp>
#include <webbind/XRLayer.hpp>


XRRenderState XRRenderState::take_ownership(Handle h) noexcept {
        return XRRenderState(h);
    }
XRRenderState XRRenderState::clone() const noexcept { return *this; }
emlite::Val XRRenderState::instance() noexcept { return emlite::Val::global("XRRenderState"); }
XRRenderState::XRRenderState(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRRenderState::XRRenderState(const emlite::Val &val) noexcept: emlite::Val(val) {}


double XRRenderState::depthNear() const {
    return emlite::Val::get("depthNear").as<double>();
}

double XRRenderState::depthFar() const {
    return emlite::Val::get("depthFar").as<double>();
}

bool XRRenderState::passthroughFullyObscured() const {
    return emlite::Val::get("passthroughFullyObscured").as<bool>();
}

double XRRenderState::inlineVerticalFieldOfView() const {
    return emlite::Val::get("inlineVerticalFieldOfView").as<double>();
}

XRWebGLLayer XRRenderState::baseLayer() const {
    return emlite::Val::get("baseLayer").as<XRWebGLLayer>();
}

jsbind::TypedArray<XRLayer> XRRenderState::layers() const {
    return emlite::Val::get("layers").as<jsbind::TypedArray<XRLayer>>();
}

