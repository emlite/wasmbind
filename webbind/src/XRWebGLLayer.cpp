#include <webbind/XRWebGLLayer.hpp>
#include <webbind/WebGLFramebuffer.hpp>
#include <webbind/XRViewport.hpp>
#include <webbind/XRView.hpp>
#include <webbind/XRSession.hpp>


XRWebGLLayer XRWebGLLayer::take_ownership(Handle h) noexcept {
        return XRWebGLLayer(h);
    }
XRWebGLLayer XRWebGLLayer::clone() const noexcept { return *this; }
XRWebGLLayer::XRWebGLLayer(Handle h) noexcept : XRLayer(emlite::Val::take_ownership(h)) {}
XRWebGLLayer::XRWebGLLayer(const emlite::Val &val) noexcept: XRLayer(val) {}


XRWebGLLayer::XRWebGLLayer(const XRSession& session, const jsbind::Any& context) : XRLayer(emlite::Val::global("XRWebGLLayer").new_(session, context)) {}

XRWebGLLayer::XRWebGLLayer(const XRSession& session, const jsbind::Any& context, const jsbind::Any& layerInit) : XRLayer(emlite::Val::global("XRWebGLLayer").new_(session, context, layerInit)) {}

bool XRWebGLLayer::antialias() const {
    return XRLayer::get("antialias").as<bool>();
}

bool XRWebGLLayer::ignoreDepthValues() const {
    return XRLayer::get("ignoreDepthValues").as<bool>();
}

float XRWebGLLayer::fixedFoveation() const {
    return XRLayer::get("fixedFoveation").as<float>();
}

void XRWebGLLayer::fixedFoveation(float value) {
    XRLayer::set("fixedFoveation", value);
}

WebGLFramebuffer XRWebGLLayer::framebuffer() const {
    return XRLayer::get("framebuffer").as<WebGLFramebuffer>();
}

unsigned long XRWebGLLayer::framebufferWidth() const {
    return XRLayer::get("framebufferWidth").as<unsigned long>();
}

unsigned long XRWebGLLayer::framebufferHeight() const {
    return XRLayer::get("framebufferHeight").as<unsigned long>();
}

XRViewport XRWebGLLayer::getViewport(const XRView& view) {
    return XRLayer::call("getViewport", view).as<XRViewport>();
}

double XRWebGLLayer::getNativeFramebufferScaleFactor(const XRSession& session) {
    return emlite::Val::global("xrwebgllayer").call("getNativeFramebufferScaleFactor", session).as<double>();
}

