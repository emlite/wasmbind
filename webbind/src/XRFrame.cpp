#include <webbind/XRFrame.hpp>
#include <webbind/XRSession.hpp>
#include <webbind/XRViewerPose.hpp>
#include <webbind/XRReferenceSpace.hpp>
#include <webbind/XRPose.hpp>
#include <webbind/XRSpace.hpp>
#include <webbind/XRAnchor.hpp>
#include <webbind/XRRigidTransform.hpp>
#include <webbind/XRAnchorSet.hpp>
#include <webbind/XRMeshSet.hpp>
#include <webbind/XRCPUDepthInformation.hpp>
#include <webbind/XRView.hpp>
#include <webbind/XRJointPose.hpp>
#include <webbind/XRJointSpace.hpp>
#include <webbind/XRHitTestResult.hpp>
#include <webbind/XRHitTestSource.hpp>
#include <webbind/XRTransientInputHitTestResult.hpp>
#include <webbind/XRTransientInputHitTestSource.hpp>
#include <webbind/XRLightEstimate.hpp>
#include <webbind/XRLightProbe.hpp>
#include <webbind/XRPlaneSet.hpp>


XRFrame XRFrame::take_ownership(Handle h) noexcept {
        return XRFrame(h);
    }
XRFrame XRFrame::clone() const noexcept { return *this; }
XRFrame::XRFrame(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRFrame::XRFrame(const emlite::Val &val) noexcept: emlite::Val(val) {}


XRSession XRFrame::session() const {
    return emlite::Val::get("session").as<XRSession>();
}

jsbind::Any XRFrame::predictedDisplayTime() const {
    return emlite::Val::get("predictedDisplayTime").as<jsbind::Any>();
}

XRViewerPose XRFrame::getViewerPose(const XRReferenceSpace& referenceSpace) {
    return emlite::Val::call("getViewerPose", referenceSpace).as<XRViewerPose>();
}

XRPose XRFrame::getPose(const XRSpace& space, const XRSpace& baseSpace) {
    return emlite::Val::call("getPose", space, baseSpace).as<XRPose>();
}

jsbind::Promise<XRAnchor> XRFrame::createAnchor(const XRRigidTransform& pose, const XRSpace& space) {
    return emlite::Val::call("createAnchor", pose, space).as<jsbind::Promise<XRAnchor>>();
}

XRAnchorSet XRFrame::trackedAnchors() const {
    return emlite::Val::get("trackedAnchors").as<XRAnchorSet>();
}

XRMeshSet XRFrame::detectedMeshes() const {
    return emlite::Val::get("detectedMeshes").as<XRMeshSet>();
}

XRCPUDepthInformation XRFrame::getDepthInformation(const XRView& view) {
    return emlite::Val::call("getDepthInformation", view).as<XRCPUDepthInformation>();
}

XRJointPose XRFrame::getJointPose(const XRJointSpace& joint, const XRSpace& baseSpace) {
    return emlite::Val::call("getJointPose", joint, baseSpace).as<XRJointPose>();
}

bool XRFrame::fillJointRadii(const jsbind::TypedArray<XRJointSpace>& jointSpaces, const jsbind::Float32Array& radii) {
    return emlite::Val::call("fillJointRadii", jointSpaces, radii).as<bool>();
}

bool XRFrame::fillPoses(const jsbind::TypedArray<XRSpace>& spaces, const XRSpace& baseSpace, const jsbind::Float32Array& transforms) {
    return emlite::Val::call("fillPoses", spaces, baseSpace, transforms).as<bool>();
}

jsbind::TypedArray<XRHitTestResult> XRFrame::getHitTestResults(const XRHitTestSource& hitTestSource) {
    return emlite::Val::call("getHitTestResults", hitTestSource).as<jsbind::TypedArray<XRHitTestResult>>();
}

jsbind::TypedArray<XRTransientInputHitTestResult> XRFrame::getHitTestResultsForTransientInput(const XRTransientInputHitTestSource& hitTestSource) {
    return emlite::Val::call("getHitTestResultsForTransientInput", hitTestSource).as<jsbind::TypedArray<XRTransientInputHitTestResult>>();
}

XRLightEstimate XRFrame::getLightEstimate(const XRLightProbe& lightProbe) {
    return emlite::Val::call("getLightEstimate", lightProbe).as<XRLightEstimate>();
}

XRPlaneSet XRFrame::detectedPlanes() const {
    return emlite::Val::get("detectedPlanes").as<XRPlaneSet>();
}

