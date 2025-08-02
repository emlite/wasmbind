#include <webbind/XRWebGLBinding.hpp>
#include <webbind/XRProjectionLayer.hpp>
#include <webbind/XRQuadLayer.hpp>
#include <webbind/XRCylinderLayer.hpp>
#include <webbind/XREquirectLayer.hpp>
#include <webbind/XRCubeLayer.hpp>
#include <webbind/XRWebGLSubImage.hpp>
#include <webbind/XRCompositionLayer.hpp>
#include <webbind/XRFrame.hpp>
#include <webbind/XRView.hpp>
#include <webbind/WebGLTexture.hpp>
#include <webbind/XRCamera.hpp>
#include <webbind/XRWebGLDepthInformation.hpp>
#include <webbind/XRLightProbe.hpp>
#include <webbind/XRRigidTransform.hpp>
#include <webbind/DOMPointReadOnly.hpp>
#include <webbind/XRSession.hpp>


XRProjectionLayerInit::XRProjectionLayerInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRProjectionLayerInit XRProjectionLayerInit::take_ownership(Handle h) noexcept {
        return XRProjectionLayerInit(h);
    }
XRProjectionLayerInit::XRProjectionLayerInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRProjectionLayerInit::XRProjectionLayerInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRProjectionLayerInit XRProjectionLayerInit::clone() const noexcept { return *this; }

XRTextureType XRProjectionLayerInit::textureType() const {
    return emlite::Val::get("textureType").as<XRTextureType>();
}

void XRProjectionLayerInit::textureType(const XRTextureType& value) {
    emlite::Val::set("textureType", value);
}

jsbind::Any XRProjectionLayerInit::colorFormat() const {
    return emlite::Val::get("colorFormat").as<jsbind::Any>();
}

void XRProjectionLayerInit::colorFormat(const jsbind::Any& value) {
    emlite::Val::set("colorFormat", value);
}

jsbind::Any XRProjectionLayerInit::depthFormat() const {
    return emlite::Val::get("depthFormat").as<jsbind::Any>();
}

void XRProjectionLayerInit::depthFormat(const jsbind::Any& value) {
    emlite::Val::set("depthFormat", value);
}

double XRProjectionLayerInit::scaleFactor() const {
    return emlite::Val::get("scaleFactor").as<double>();
}

void XRProjectionLayerInit::scaleFactor(double value) {
    emlite::Val::set("scaleFactor", value);
}

bool XRProjectionLayerInit::clearOnAccess() const {
    return emlite::Val::get("clearOnAccess").as<bool>();
}

void XRProjectionLayerInit::clearOnAccess(bool value) {
    emlite::Val::set("clearOnAccess", value);
}

XRQuadLayerInit::XRQuadLayerInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRQuadLayerInit XRQuadLayerInit::take_ownership(Handle h) noexcept {
        return XRQuadLayerInit(h);
    }
XRQuadLayerInit::XRQuadLayerInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRQuadLayerInit::XRQuadLayerInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRQuadLayerInit XRQuadLayerInit::clone() const noexcept { return *this; }

XRTextureType XRQuadLayerInit::textureType() const {
    return emlite::Val::get("textureType").as<XRTextureType>();
}

void XRQuadLayerInit::textureType(const XRTextureType& value) {
    emlite::Val::set("textureType", value);
}

XRRigidTransform XRQuadLayerInit::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

void XRQuadLayerInit::transform(const XRRigidTransform& value) {
    emlite::Val::set("transform", value);
}

float XRQuadLayerInit::width() const {
    return emlite::Val::get("width").as<float>();
}

void XRQuadLayerInit::width(float value) {
    emlite::Val::set("width", value);
}

float XRQuadLayerInit::height() const {
    return emlite::Val::get("height").as<float>();
}

void XRQuadLayerInit::height(float value) {
    emlite::Val::set("height", value);
}

XRCylinderLayerInit::XRCylinderLayerInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRCylinderLayerInit XRCylinderLayerInit::take_ownership(Handle h) noexcept {
        return XRCylinderLayerInit(h);
    }
XRCylinderLayerInit::XRCylinderLayerInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRCylinderLayerInit::XRCylinderLayerInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRCylinderLayerInit XRCylinderLayerInit::clone() const noexcept { return *this; }

XRTextureType XRCylinderLayerInit::textureType() const {
    return emlite::Val::get("textureType").as<XRTextureType>();
}

void XRCylinderLayerInit::textureType(const XRTextureType& value) {
    emlite::Val::set("textureType", value);
}

XRRigidTransform XRCylinderLayerInit::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

void XRCylinderLayerInit::transform(const XRRigidTransform& value) {
    emlite::Val::set("transform", value);
}

float XRCylinderLayerInit::radius() const {
    return emlite::Val::get("radius").as<float>();
}

void XRCylinderLayerInit::radius(float value) {
    emlite::Val::set("radius", value);
}

float XRCylinderLayerInit::centralAngle() const {
    return emlite::Val::get("centralAngle").as<float>();
}

void XRCylinderLayerInit::centralAngle(float value) {
    emlite::Val::set("centralAngle", value);
}

float XRCylinderLayerInit::aspectRatio() const {
    return emlite::Val::get("aspectRatio").as<float>();
}

void XRCylinderLayerInit::aspectRatio(float value) {
    emlite::Val::set("aspectRatio", value);
}

XREquirectLayerInit::XREquirectLayerInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XREquirectLayerInit XREquirectLayerInit::take_ownership(Handle h) noexcept {
        return XREquirectLayerInit(h);
    }
XREquirectLayerInit::XREquirectLayerInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XREquirectLayerInit::XREquirectLayerInit() noexcept: emlite::Val(emlite::Val::object()) {}
XREquirectLayerInit XREquirectLayerInit::clone() const noexcept { return *this; }

XRTextureType XREquirectLayerInit::textureType() const {
    return emlite::Val::get("textureType").as<XRTextureType>();
}

void XREquirectLayerInit::textureType(const XRTextureType& value) {
    emlite::Val::set("textureType", value);
}

XRRigidTransform XREquirectLayerInit::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

void XREquirectLayerInit::transform(const XRRigidTransform& value) {
    emlite::Val::set("transform", value);
}

float XREquirectLayerInit::radius() const {
    return emlite::Val::get("radius").as<float>();
}

void XREquirectLayerInit::radius(float value) {
    emlite::Val::set("radius", value);
}

float XREquirectLayerInit::centralHorizontalAngle() const {
    return emlite::Val::get("centralHorizontalAngle").as<float>();
}

void XREquirectLayerInit::centralHorizontalAngle(float value) {
    emlite::Val::set("centralHorizontalAngle", value);
}

float XREquirectLayerInit::upperVerticalAngle() const {
    return emlite::Val::get("upperVerticalAngle").as<float>();
}

void XREquirectLayerInit::upperVerticalAngle(float value) {
    emlite::Val::set("upperVerticalAngle", value);
}

float XREquirectLayerInit::lowerVerticalAngle() const {
    return emlite::Val::get("lowerVerticalAngle").as<float>();
}

void XREquirectLayerInit::lowerVerticalAngle(float value) {
    emlite::Val::set("lowerVerticalAngle", value);
}

XRCubeLayerInit::XRCubeLayerInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRCubeLayerInit XRCubeLayerInit::take_ownership(Handle h) noexcept {
        return XRCubeLayerInit(h);
    }
XRCubeLayerInit::XRCubeLayerInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRCubeLayerInit::XRCubeLayerInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRCubeLayerInit XRCubeLayerInit::clone() const noexcept { return *this; }

DOMPointReadOnly XRCubeLayerInit::orientation() const {
    return emlite::Val::get("orientation").as<DOMPointReadOnly>();
}

void XRCubeLayerInit::orientation(const DOMPointReadOnly& value) {
    emlite::Val::set("orientation", value);
}

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

