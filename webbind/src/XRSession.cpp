#include <webbind/XRSession.hpp>
#include <webbind/XRRenderState.hpp>
#include <webbind/XRInputSourceArray.hpp>
#include <webbind/XRReferenceSpace.hpp>
#include <webbind/XRAnchor.hpp>
#include <webbind/XRHitTestSource.hpp>
#include <webbind/XRTransientInputHitTestSource.hpp>
#include <webbind/XRLightProbe.hpp>
#include <webbind/XRRay.hpp>
#include <webbind/XRWebGLLayer.hpp>
#include <webbind/XRRigidTransform.hpp>


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

jsbind::Sequence<XRLayer> XRRenderStateInit::layers() const {
    return emlite::Val::get("layers").as<jsbind::Sequence<XRLayer>>();
}

void XRRenderStateInit::layers(const jsbind::Sequence<XRLayer>& value) {
    emlite::Val::set("layers", value);
}

XRDOMOverlayState::XRDOMOverlayState(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRDOMOverlayState XRDOMOverlayState::take_ownership(Handle h) noexcept {
        return XRDOMOverlayState(h);
    }
XRDOMOverlayState::XRDOMOverlayState(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRDOMOverlayState::XRDOMOverlayState() noexcept: emlite::Val(emlite::Val::object()) {}
XRDOMOverlayState XRDOMOverlayState::clone() const noexcept { return *this; }

XRDOMOverlayType XRDOMOverlayState::type() const {
    return emlite::Val::get("type").as<XRDOMOverlayType>();
}

void XRDOMOverlayState::type(const XRDOMOverlayType& value) {
    emlite::Val::set("type", value);
}

XRHitTestOptionsInit::XRHitTestOptionsInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRHitTestOptionsInit XRHitTestOptionsInit::take_ownership(Handle h) noexcept {
        return XRHitTestOptionsInit(h);
    }
XRHitTestOptionsInit::XRHitTestOptionsInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRHitTestOptionsInit::XRHitTestOptionsInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRHitTestOptionsInit XRHitTestOptionsInit::clone() const noexcept { return *this; }

XRSpace XRHitTestOptionsInit::space() const {
    return emlite::Val::get("space").as<XRSpace>();
}

void XRHitTestOptionsInit::space(const XRSpace& value) {
    emlite::Val::set("space", value);
}

jsbind::Sequence<XRHitTestTrackableType> XRHitTestOptionsInit::entityTypes() const {
    return emlite::Val::get("entityTypes").as<jsbind::Sequence<XRHitTestTrackableType>>();
}

void XRHitTestOptionsInit::entityTypes(const jsbind::Sequence<XRHitTestTrackableType>& value) {
    emlite::Val::set("entityTypes", value);
}

XRRay XRHitTestOptionsInit::offsetRay() const {
    return emlite::Val::get("offsetRay").as<XRRay>();
}

void XRHitTestOptionsInit::offsetRay(const XRRay& value) {
    emlite::Val::set("offsetRay", value);
}

XRTransientInputHitTestOptionsInit::XRTransientInputHitTestOptionsInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRTransientInputHitTestOptionsInit XRTransientInputHitTestOptionsInit::take_ownership(Handle h) noexcept {
        return XRTransientInputHitTestOptionsInit(h);
    }
XRTransientInputHitTestOptionsInit::XRTransientInputHitTestOptionsInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRTransientInputHitTestOptionsInit::XRTransientInputHitTestOptionsInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRTransientInputHitTestOptionsInit XRTransientInputHitTestOptionsInit::clone() const noexcept { return *this; }

jsbind::DOMString XRTransientInputHitTestOptionsInit::profile() const {
    return emlite::Val::get("profile").as<jsbind::DOMString>();
}

void XRTransientInputHitTestOptionsInit::profile(const jsbind::DOMString& value) {
    emlite::Val::set("profile", value);
}

jsbind::Sequence<XRHitTestTrackableType> XRTransientInputHitTestOptionsInit::entityTypes() const {
    return emlite::Val::get("entityTypes").as<jsbind::Sequence<XRHitTestTrackableType>>();
}

void XRTransientInputHitTestOptionsInit::entityTypes(const jsbind::Sequence<XRHitTestTrackableType>& value) {
    emlite::Val::set("entityTypes", value);
}

XRRay XRTransientInputHitTestOptionsInit::offsetRay() const {
    return emlite::Val::get("offsetRay").as<XRRay>();
}

void XRTransientInputHitTestOptionsInit::offsetRay(const XRRay& value) {
    emlite::Val::set("offsetRay", value);
}

XRLightProbeInit::XRLightProbeInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRLightProbeInit XRLightProbeInit::take_ownership(Handle h) noexcept {
        return XRLightProbeInit(h);
    }
XRLightProbeInit::XRLightProbeInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRLightProbeInit::XRLightProbeInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRLightProbeInit XRLightProbeInit::clone() const noexcept { return *this; }

XRReflectionFormat XRLightProbeInit::reflectionFormat() const {
    return emlite::Val::get("reflectionFormat").as<XRReflectionFormat>();
}

void XRLightProbeInit::reflectionFormat(const XRReflectionFormat& value) {
    emlite::Val::set("reflectionFormat", value);
}

XRSession XRSession::take_ownership(Handle h) noexcept {
        return XRSession(h);
    }
XRSession XRSession::clone() const noexcept { return *this; }
XRSession::XRSession(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
XRSession::XRSession(const emlite::Val &val) noexcept: EventTarget(val) {}


XRVisibilityState XRSession::visibilityState() const {
    return EventTarget::get("visibilityState").as<XRVisibilityState>();
}

float XRSession::frameRate() const {
    return EventTarget::get("frameRate").as<float>();
}

jsbind::Float32Array XRSession::supportedFrameRates() const {
    return EventTarget::get("supportedFrameRates").as<jsbind::Float32Array>();
}

XRRenderState XRSession::renderState() const {
    return EventTarget::get("renderState").as<XRRenderState>();
}

XRInputSourceArray XRSession::inputSources() const {
    return EventTarget::get("inputSources").as<XRInputSourceArray>();
}

XRInputSourceArray XRSession::trackedSources() const {
    return EventTarget::get("trackedSources").as<XRInputSourceArray>();
}

jsbind::FrozenArray<jsbind::DOMString> XRSession::enabledFeatures() const {
    return EventTarget::get("enabledFeatures").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

bool XRSession::isSystemKeyboardSupported() const {
    return EventTarget::get("isSystemKeyboardSupported").as<bool>();
}

jsbind::Undefined XRSession::updateRenderState(const XRRenderStateInit& state) {
    return EventTarget::call("updateRenderState", state).as<jsbind::Undefined>();
}

jsbind::Promise XRSession::updateTargetFrameRate(float rate) {
    return EventTarget::call("updateTargetFrameRate", rate).as<jsbind::Promise>();
}

jsbind::Promise XRSession::requestReferenceSpace(const XRReferenceSpaceType& type) {
    return EventTarget::call("requestReferenceSpace", type).as<jsbind::Promise>();
}

unsigned long XRSession::requestAnimationFrame(const jsbind::Function& callback) {
    return EventTarget::call("requestAnimationFrame", callback).as<unsigned long>();
}

jsbind::Undefined XRSession::cancelAnimationFrame(unsigned long handle) {
    return EventTarget::call("cancelAnimationFrame", handle).as<jsbind::Undefined>();
}

jsbind::Promise XRSession::end() {
    return EventTarget::call("end").as<jsbind::Promise>();
}

jsbind::Any XRSession::onend() const {
    return EventTarget::get("onend").as<jsbind::Any>();
}

void XRSession::onend(const jsbind::Any& value) {
    EventTarget::set("onend", value);
}

jsbind::Any XRSession::oninputsourceschange() const {
    return EventTarget::get("oninputsourceschange").as<jsbind::Any>();
}

void XRSession::oninputsourceschange(const jsbind::Any& value) {
    EventTarget::set("oninputsourceschange", value);
}

jsbind::Any XRSession::onselect() const {
    return EventTarget::get("onselect").as<jsbind::Any>();
}

void XRSession::onselect(const jsbind::Any& value) {
    EventTarget::set("onselect", value);
}

jsbind::Any XRSession::onselectstart() const {
    return EventTarget::get("onselectstart").as<jsbind::Any>();
}

void XRSession::onselectstart(const jsbind::Any& value) {
    EventTarget::set("onselectstart", value);
}

jsbind::Any XRSession::onselectend() const {
    return EventTarget::get("onselectend").as<jsbind::Any>();
}

void XRSession::onselectend(const jsbind::Any& value) {
    EventTarget::set("onselectend", value);
}

jsbind::Any XRSession::onsqueeze() const {
    return EventTarget::get("onsqueeze").as<jsbind::Any>();
}

void XRSession::onsqueeze(const jsbind::Any& value) {
    EventTarget::set("onsqueeze", value);
}

jsbind::Any XRSession::onsqueezestart() const {
    return EventTarget::get("onsqueezestart").as<jsbind::Any>();
}

void XRSession::onsqueezestart(const jsbind::Any& value) {
    EventTarget::set("onsqueezestart", value);
}

jsbind::Any XRSession::onsqueezeend() const {
    return EventTarget::get("onsqueezeend").as<jsbind::Any>();
}

void XRSession::onsqueezeend(const jsbind::Any& value) {
    EventTarget::set("onsqueezeend", value);
}

jsbind::Any XRSession::onvisibilitychange() const {
    return EventTarget::get("onvisibilitychange").as<jsbind::Any>();
}

void XRSession::onvisibilitychange(const jsbind::Any& value) {
    EventTarget::set("onvisibilitychange", value);
}

jsbind::Any XRSession::onframeratechange() const {
    return EventTarget::get("onframeratechange").as<jsbind::Any>();
}

void XRSession::onframeratechange(const jsbind::Any& value) {
    EventTarget::set("onframeratechange", value);
}

jsbind::FrozenArray<jsbind::DOMString> XRSession::persistentAnchors() const {
    return EventTarget::get("persistentAnchors").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

jsbind::Promise XRSession::restorePersistentAnchor(const jsbind::DOMString& uuid) {
    return EventTarget::call("restorePersistentAnchor", uuid).as<jsbind::Promise>();
}

jsbind::Promise XRSession::deletePersistentAnchor(const jsbind::DOMString& uuid) {
    return EventTarget::call("deletePersistentAnchor", uuid).as<jsbind::Promise>();
}

XREnvironmentBlendMode XRSession::environmentBlendMode() const {
    return EventTarget::get("environmentBlendMode").as<XREnvironmentBlendMode>();
}

XRInteractionMode XRSession::interactionMode() const {
    return EventTarget::get("interactionMode").as<XRInteractionMode>();
}

XRDepthUsage XRSession::depthUsage() const {
    return EventTarget::get("depthUsage").as<XRDepthUsage>();
}

XRDepthDataFormat XRSession::depthDataFormat() const {
    return EventTarget::get("depthDataFormat").as<XRDepthDataFormat>();
}

XRDepthType XRSession::depthType() const {
    return EventTarget::get("depthType").as<XRDepthType>();
}

bool XRSession::depthActive() const {
    return EventTarget::get("depthActive").as<bool>();
}

jsbind::Undefined XRSession::pauseDepthSensing() {
    return EventTarget::call("pauseDepthSensing").as<jsbind::Undefined>();
}

jsbind::Undefined XRSession::resumeDepthSensing() {
    return EventTarget::call("resumeDepthSensing").as<jsbind::Undefined>();
}

XRDOMOverlayState XRSession::domOverlayState() const {
    return EventTarget::get("domOverlayState").as<XRDOMOverlayState>();
}

jsbind::Promise XRSession::requestHitTestSource(const XRHitTestOptionsInit& options) {
    return EventTarget::call("requestHitTestSource", options).as<jsbind::Promise>();
}

jsbind::Promise XRSession::requestHitTestSourceForTransientInput(const XRTransientInputHitTestOptionsInit& options) {
    return EventTarget::call("requestHitTestSourceForTransientInput", options).as<jsbind::Promise>();
}

jsbind::Promise XRSession::requestLightProbe(const XRLightProbeInit& options) {
    return EventTarget::call("requestLightProbe", options).as<jsbind::Promise>();
}

XRReflectionFormat XRSession::preferredReflectionFormat() const {
    return EventTarget::get("preferredReflectionFormat").as<XRReflectionFormat>();
}

jsbind::Promise XRSession::initiateRoomCapture() {
    return EventTarget::call("initiateRoomCapture").as<jsbind::Promise>();
}

