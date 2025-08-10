#include <webbind/XRWebGLBinding.hpp>
#include <webbind/XRSession.hpp>
#include <webbind/XRProjectionLayer.hpp>
#include <webbind/XRProjectionLayerInit.hpp>
#include <webbind/XRQuadLayer.hpp>
#include <webbind/XRQuadLayerInit.hpp>
#include <webbind/XRCylinderLayer.hpp>
#include <webbind/XRCylinderLayerInit.hpp>
#include <webbind/XREquirectLayer.hpp>
#include <webbind/XREquirectLayerInit.hpp>
#include <webbind/XRCubeLayer.hpp>
#include <webbind/XRCubeLayerInit.hpp>
#include <webbind/XRWebGLSubImage.hpp>
#include <webbind/XRCompositionLayer.hpp>
#include <webbind/XRFrame.hpp>
#include <webbind/XRView.hpp>
#include <webbind/WebGLTexture.hpp>
#include <webbind/XRCamera.hpp>
#include <webbind/XRWebGLDepthInformation.hpp>
#include <webbind/XRLightProbe.hpp>

namespace webbind {

XRWebGLBinding XRWebGLBinding::take_ownership(Handle h) noexcept {
        return XRWebGLBinding(h);
    }
XRWebGLBinding XRWebGLBinding::clone() const noexcept { return *this; }
emlite::Val XRWebGLBinding::instance() noexcept { return emlite::Val::global("XRWebGLBinding"); }
XRWebGLBinding::XRWebGLBinding(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRWebGLBinding::XRWebGLBinding(const emlite::Val &val) noexcept: emlite::Val(val) {}

XRWebGLBinding::XRWebGLBinding(const XRSession& session, const jsbind::Any& context) : emlite::Val(emlite::Val::global("XRWebGLBinding").new_(session, context)) {}

double XRWebGLBinding::nativeProjectionScaleFactor() const {
    return emlite::Val::get("nativeProjectionScaleFactor").as<double>();
}

bool XRWebGLBinding::usesDepthValues() const {
    return emlite::Val::get("usesDepthValues").as<bool>();
}

XRProjectionLayer XRWebGLBinding::createProjectionLayer() {
    return emlite::Val::call("createProjectionLayer").as<XRProjectionLayer>();
}

XRProjectionLayer XRWebGLBinding::createProjectionLayer(const XRProjectionLayerInit& init) {
    return emlite::Val::call("createProjectionLayer", init).as<XRProjectionLayer>();
}

XRQuadLayer XRWebGLBinding::createQuadLayer() {
    return emlite::Val::call("createQuadLayer").as<XRQuadLayer>();
}

XRQuadLayer XRWebGLBinding::createQuadLayer(const XRQuadLayerInit& init) {
    return emlite::Val::call("createQuadLayer", init).as<XRQuadLayer>();
}

XRCylinderLayer XRWebGLBinding::createCylinderLayer() {
    return emlite::Val::call("createCylinderLayer").as<XRCylinderLayer>();
}

XRCylinderLayer XRWebGLBinding::createCylinderLayer(const XRCylinderLayerInit& init) {
    return emlite::Val::call("createCylinderLayer", init).as<XRCylinderLayer>();
}

XREquirectLayer XRWebGLBinding::createEquirectLayer() {
    return emlite::Val::call("createEquirectLayer").as<XREquirectLayer>();
}

XREquirectLayer XRWebGLBinding::createEquirectLayer(const XREquirectLayerInit& init) {
    return emlite::Val::call("createEquirectLayer", init).as<XREquirectLayer>();
}

XRCubeLayer XRWebGLBinding::createCubeLayer() {
    return emlite::Val::call("createCubeLayer").as<XRCubeLayer>();
}

XRCubeLayer XRWebGLBinding::createCubeLayer(const XRCubeLayerInit& init) {
    return emlite::Val::call("createCubeLayer", init).as<XRCubeLayer>();
}

XRWebGLSubImage XRWebGLBinding::getSubImage(const XRCompositionLayer& layer, const XRFrame& frame) {
    return emlite::Val::call("getSubImage", layer, frame).as<XRWebGLSubImage>();
}

XRWebGLSubImage XRWebGLBinding::getSubImage(const XRCompositionLayer& layer, const XRFrame& frame, const XREye& eye) {
    return emlite::Val::call("getSubImage", layer, frame, eye).as<XRWebGLSubImage>();
}

XRWebGLSubImage XRWebGLBinding::getViewSubImage(const XRProjectionLayer& layer, const XRView& view) {
    return emlite::Val::call("getViewSubImage", layer, view).as<XRWebGLSubImage>();
}

jsbind::Undefined XRWebGLBinding::foveateBoundTexture(const jsbind::Any& target, float fixed_foveation) {
    return emlite::Val::call("foveateBoundTexture", target, fixed_foveation).as<jsbind::Undefined>();
}

WebGLTexture XRWebGLBinding::getCameraImage(const XRCamera& camera) {
    return emlite::Val::call("getCameraImage", camera).as<WebGLTexture>();
}

XRWebGLDepthInformation XRWebGLBinding::getDepthInformation(const XRView& view) {
    return emlite::Val::call("getDepthInformation", view).as<XRWebGLDepthInformation>();
}

WebGLTexture XRWebGLBinding::getReflectionCubeMap(const XRLightProbe& lightProbe) {
    return emlite::Val::call("getReflectionCubeMap", lightProbe).as<WebGLTexture>();
}


} // namespace webbind