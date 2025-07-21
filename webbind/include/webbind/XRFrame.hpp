#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

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


class XRFrame : public emlite::Val {
    explicit XRFrame(Handle h) noexcept;

public:
    explicit XRFrame(const emlite::Val &val) noexcept;
    static XRFrame take_ownership(Handle h) noexcept;

    XRFrame clone() const noexcept;
    XRSession session() const;
    jsbind::Any predictedDisplayTime() const;
    XRViewerPose getViewerPose(const XRReferenceSpace& referenceSpace);
    XRPose getPose(const XRSpace& space, const XRSpace& baseSpace);
    jsbind::Promise<XRAnchor> createAnchor(const XRRigidTransform& pose, const XRSpace& space);
    XRAnchorSet trackedAnchors() const;
    XRMeshSet detectedMeshes() const;
    XRCPUDepthInformation getDepthInformation(const XRView& view);
    XRJointPose getJointPose(const XRJointSpace& joint, const XRSpace& baseSpace);
    bool fillJointRadii(const jsbind::Sequence<XRJointSpace>& jointSpaces, const jsbind::Float32Array& radii);
    bool fillPoses(const jsbind::Sequence<XRSpace>& spaces, const XRSpace& baseSpace, const jsbind::Float32Array& transforms);
    jsbind::Sequence<XRHitTestResult> getHitTestResults(const XRHitTestSource& hitTestSource);
    jsbind::Sequence<XRTransientInputHitTestResult> getHitTestResultsForTransientInput(const XRTransientInputHitTestSource& hitTestSource);
    XRLightEstimate getLightEstimate(const XRLightProbe& lightProbe);
    XRPlaneSet detectedPlanes() const;
};

