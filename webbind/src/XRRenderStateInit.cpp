#include "webbind/XRRenderStateInit.hpp"
#include "webbind/XRWebGLLayer.hpp"
#include "webbind/XRLayer.hpp"

using emlite::Val;
namespace webbind {

XRRenderStateInit::XRRenderStateInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRRenderStateInit XRRenderStateInit::take_ownership(Handle h) noexcept {
        return XRRenderStateInit(h);
    }
XRRenderStateInit::XRRenderStateInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRRenderStateInit::XRRenderStateInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRRenderStateInit XRRenderStateInit::clone() const noexcept { return *this; }

double XRRenderStateInit::depthNear() const {
    return emlite::Val::get("depthNear").as<double>();
}

void XRRenderStateInit::depthNear(double value) {
    emlite::Val::set("depthNear", value);
}

double XRRenderStateInit::depthFar() const {
    return emlite::Val::get("depthFar").as<double>();
}

void XRRenderStateInit::depthFar(double value) {
    emlite::Val::set("depthFar", value);
}

bool XRRenderStateInit::passthroughFullyObscured() const {
    return emlite::Val::get("passthroughFullyObscured").as<bool>();
}

void XRRenderStateInit::passthroughFullyObscured(bool value) {
    emlite::Val::set("passthroughFullyObscured", value);
}

double XRRenderStateInit::inlineVerticalFieldOfView() const {
    return emlite::Val::get("inlineVerticalFieldOfView").as<double>();
}

void XRRenderStateInit::inlineVerticalFieldOfView(double value) {
    emlite::Val::set("inlineVerticalFieldOfView", value);
}

XRWebGLLayer XRRenderStateInit::baseLayer() const {
    return emlite::Val::get("baseLayer").as<XRWebGLLayer>();
}

void XRRenderStateInit::baseLayer(const XRWebGLLayer& value) {
    emlite::Val::set("baseLayer", value);
}

jsbind::TypedArray<XRLayer> XRRenderStateInit::layers() const {
    return emlite::Val::get("layers").as<jsbind::TypedArray<XRLayer>>();
}

void XRRenderStateInit::layers(const jsbind::TypedArray<XRLayer>& value) {
    emlite::Val::set("layers", value);
}


} // namespace webbind