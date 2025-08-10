#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRSession;
class XRViewerPose;
class XRReferenceSpace;
class XRPose;
class XRSpace;
class XRAnchor;
class XRRigidTransform;
class XRAnchorSet;
class XRMeshSet;
class XRCPUDepthInformation;
class XRView;
class XRJointPose;
class XRJointSpace;
class XRHitTestResult;
class XRHitTestSource;
class XRTransientInputHitTestResult;
class XRTransientInputHitTestSource;
class XRLightEstimate;
class XRLightProbe;
class XRPlaneSet;

/// Interface XRFrame
/// [`XRFrame`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame)
class XRFrame : public emlite::Val {
    explicit XRFrame(Handle h) noexcept;
public:
    explicit XRFrame(const emlite::Val &val) noexcept;
    static XRFrame take_ownership(Handle h) noexcept;
    [[nodiscard]] XRFrame clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRFrame.session`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/session)
    /// [`XRFrame.session`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/session)
    [[nodiscard]] XRSession session() const;
    /// [`XRFrame.predictedDisplayTime`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/predictedDisplayTime)
    /// [`XRFrame.predictedDisplayTime`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/predictedDisplayTime)
    [[nodiscard]] jsbind::Any predictedDisplayTime() const;
    /// The getViewerPose method.
    /// [`XRFrame.getViewerPose`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/getViewerPose)
    XRViewerPose getViewerPose(const XRReferenceSpace& referenceSpace);
    /// The getPose method.
    /// [`XRFrame.getPose`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/getPose)
    XRPose getPose(const XRSpace& space, const XRSpace& baseSpace);
    /// The createAnchor method.
    /// [`XRFrame.createAnchor`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/createAnchor)
    jsbind::Promise<XRAnchor> createAnchor(const XRRigidTransform& pose, const XRSpace& space);
    /// [`XRFrame.trackedAnchors`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/trackedAnchors)
    /// [`XRFrame.trackedAnchors`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/trackedAnchors)
    [[nodiscard]] XRAnchorSet trackedAnchors() const;
    /// [`XRFrame.detectedMeshes`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/detectedMeshes)
    /// [`XRFrame.detectedMeshes`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/detectedMeshes)
    [[nodiscard]] XRMeshSet detectedMeshes() const;
    /// The getDepthInformation method.
    /// [`XRFrame.getDepthInformation`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/getDepthInformation)
    XRCPUDepthInformation getDepthInformation(const XRView& view);
    /// The getJointPose method.
    /// [`XRFrame.getJointPose`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/getJointPose)
    XRJointPose getJointPose(const XRJointSpace& joint, const XRSpace& baseSpace);
    /// The fillJointRadii method.
    /// [`XRFrame.fillJointRadii`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/fillJointRadii)
    bool fillJointRadii(const jsbind::TypedArray<XRJointSpace>& jointSpaces, const jsbind::Float32Array& radii);
    /// The fillPoses method.
    /// [`XRFrame.fillPoses`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/fillPoses)
    bool fillPoses(const jsbind::TypedArray<XRSpace>& spaces, const XRSpace& baseSpace, const jsbind::Float32Array& transforms);
    /// The getHitTestResults method.
    /// [`XRFrame.getHitTestResults`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/getHitTestResults)
    jsbind::TypedArray<XRHitTestResult> getHitTestResults(const XRHitTestSource& hitTestSource);
    /// The getHitTestResultsForTransientInput method.
    /// [`XRFrame.getHitTestResultsForTransientInput`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/getHitTestResultsForTransientInput)
    jsbind::TypedArray<XRTransientInputHitTestResult> getHitTestResultsForTransientInput(const XRTransientInputHitTestSource& hitTestSource);
    /// The getLightEstimate method.
    /// [`XRFrame.getLightEstimate`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/getLightEstimate)
    XRLightEstimate getLightEstimate(const XRLightProbe& lightProbe);
    /// [`XRFrame.detectedPlanes`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/detectedPlanes)
    /// [`XRFrame.detectedPlanes`](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame/detectedPlanes)
    [[nodiscard]] XRPlaneSet detectedPlanes() const;
};

} // namespace webbind