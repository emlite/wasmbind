#include "webbind/XRSession.hpp"
#include "webbind/XRRenderState.hpp"
#include "webbind/XRInputSourceArray.hpp"
#include "webbind/XRRenderStateInit.hpp"
#include "webbind/XRReferenceSpace.hpp"
#include "webbind/XRAnchor.hpp"
#include "webbind/XRDOMOverlayState.hpp"
#include "webbind/XRHitTestSource.hpp"
#include "webbind/XRHitTestOptionsInit.hpp"
#include "webbind/XRTransientInputHitTestSource.hpp"
#include "webbind/XRTransientInputHitTestOptionsInit.hpp"
#include "webbind/XRLightProbe.hpp"
#include "webbind/XRLightProbeInit.hpp"

namespace webbind {

XRSession XRSession::take_ownership(Handle h) noexcept {
        return XRSession(h);
    }
XRSession XRSession::clone() const noexcept { return *this; }
emlite::Val XRSession::instance() noexcept { return emlite::Val::global("XRSession"); }
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

jsbind::TypedArray<jsbind::String> XRSession::enabledFeatures() const {
    return EventTarget::get("enabledFeatures").as<jsbind::TypedArray<jsbind::String>>();
}

bool XRSession::isSystemKeyboardSupported() const {
    return EventTarget::get("isSystemKeyboardSupported").as<bool>();
}

jsbind::Undefined XRSession::updateRenderState() {
    return EventTarget::call("updateRenderState").as<jsbind::Undefined>();
}

jsbind::Undefined XRSession::updateRenderState(const XRRenderStateInit& state) {
    return EventTarget::call("updateRenderState", state).as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> XRSession::updateTargetFrameRate(float rate) {
    return EventTarget::call("updateTargetFrameRate", rate).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<XRReferenceSpace> XRSession::requestReferenceSpace(const XRReferenceSpaceType& type) {
    return EventTarget::call("requestReferenceSpace", type).as<jsbind::Promise<XRReferenceSpace>>();
}

unsigned long XRSession::requestAnimationFrame(const jsbind::Function& callback) {
    return EventTarget::call("requestAnimationFrame", callback).as<unsigned long>();
}

jsbind::Undefined XRSession::cancelAnimationFrame(unsigned long handle) {
    return EventTarget::call("cancelAnimationFrame", handle).as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> XRSession::end() {
    return EventTarget::call("end").as<jsbind::Promise<jsbind::Undefined>>();
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

jsbind::TypedArray<jsbind::String> XRSession::persistentAnchors() const {
    return EventTarget::get("persistentAnchors").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::Promise<XRAnchor> XRSession::restorePersistentAnchor(const jsbind::String& uuid) {
    return EventTarget::call("restorePersistentAnchor", uuid).as<jsbind::Promise<XRAnchor>>();
}

jsbind::Promise<jsbind::Undefined> XRSession::deletePersistentAnchor(const jsbind::String& uuid) {
    return EventTarget::call("deletePersistentAnchor", uuid).as<jsbind::Promise<jsbind::Undefined>>();
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

jsbind::Promise<XRHitTestSource> XRSession::requestHitTestSource(const XRHitTestOptionsInit& options) {
    return EventTarget::call("requestHitTestSource", options).as<jsbind::Promise<XRHitTestSource>>();
}

jsbind::Promise<XRTransientInputHitTestSource> XRSession::requestHitTestSourceForTransientInput(const XRTransientInputHitTestOptionsInit& options) {
    return EventTarget::call("requestHitTestSourceForTransientInput", options).as<jsbind::Promise<XRTransientInputHitTestSource>>();
}

jsbind::Promise<XRLightProbe> XRSession::requestLightProbe() {
    return EventTarget::call("requestLightProbe").as<jsbind::Promise<XRLightProbe>>();
}

jsbind::Promise<XRLightProbe> XRSession::requestLightProbe(const XRLightProbeInit& options) {
    return EventTarget::call("requestLightProbe", options).as<jsbind::Promise<XRLightProbe>>();
}

XRReflectionFormat XRSession::preferredReflectionFormat() const {
    return EventTarget::get("preferredReflectionFormat").as<XRReflectionFormat>();
}

jsbind::Promise<jsbind::Undefined> XRSession::initiateRoomCapture() {
    return EventTarget::call("initiateRoomCapture").as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind