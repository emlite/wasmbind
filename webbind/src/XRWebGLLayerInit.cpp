#include "webbind/XRWebGLLayerInit.hpp"

using emlite::Val;
namespace webbind {

XRWebGLLayerInit::XRWebGLLayerInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRWebGLLayerInit XRWebGLLayerInit::take_ownership(Handle h) noexcept {
        return XRWebGLLayerInit(h);
    }
XRWebGLLayerInit::XRWebGLLayerInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRWebGLLayerInit::XRWebGLLayerInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRWebGLLayerInit XRWebGLLayerInit::clone() const noexcept { return *this; }

bool XRWebGLLayerInit::antialias() const {
    return emlite::Val::get("antialias").as<bool>();
}

void XRWebGLLayerInit::antialias(bool value) {
    emlite::Val::set("antialias", value);
}

bool XRWebGLLayerInit::depth() const {
    return emlite::Val::get("depth").as<bool>();
}

void XRWebGLLayerInit::depth(bool value) {
    emlite::Val::set("depth", value);
}

bool XRWebGLLayerInit::stencil() const {
    return emlite::Val::get("stencil").as<bool>();
}

void XRWebGLLayerInit::stencil(bool value) {
    emlite::Val::set("stencil", value);
}

bool XRWebGLLayerInit::alpha() const {
    return emlite::Val::get("alpha").as<bool>();
}

void XRWebGLLayerInit::alpha(bool value) {
    emlite::Val::set("alpha", value);
}

bool XRWebGLLayerInit::ignoreDepthValues() const {
    return emlite::Val::get("ignoreDepthValues").as<bool>();
}

void XRWebGLLayerInit::ignoreDepthValues(bool value) {
    emlite::Val::set("ignoreDepthValues", value);
}

double XRWebGLLayerInit::framebufferScaleFactor() const {
    return emlite::Val::get("framebufferScaleFactor").as<double>();
}

void XRWebGLLayerInit::framebufferScaleFactor(double value) {
    emlite::Val::set("framebufferScaleFactor", value);
}


} // namespace webbind