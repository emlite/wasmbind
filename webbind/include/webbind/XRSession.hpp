#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class XRRenderState;
class XRInputSourceArray;
class XRRenderStateInit;
class XRReferenceSpace;
class XRAnchor;
class XRDOMOverlayState;
class XRHitTestSource;
class XRHitTestOptionsInit;
class XRTransientInputHitTestSource;
class XRTransientInputHitTestOptionsInit;
class XRLightProbe;
class XRLightProbeInit;
class XRRay;
class XRLayer;
class XRSpace;
class XRWebGLLayer;


class XRRenderStateInit : public emlite::Val {
  explicit XRRenderStateInit(Handle h) noexcept;
public:
    static XRRenderStateInit take_ownership(Handle h) noexcept;
    explicit XRRenderStateInit(const emlite::Val &val) noexcept;
    XRRenderStateInit() noexcept;
    XRRenderStateInit clone() const noexcept;
    double depthNear() const;
    void depthNear(double value);
    double depthFar() const;
    void depthFar(double value);
    bool passthroughFullyObscured() const;
    void passthroughFullyObscured(bool value);
    double inlineVerticalFieldOfView() const;
    void inlineVerticalFieldOfView(double value);
    XRWebGLLayer baseLayer() const;
    void baseLayer(const XRWebGLLayer& value);
    jsbind::TypedArray<XRLayer> layers() const;
    void layers(const jsbind::TypedArray<XRLayer>& value);
};

class XRDOMOverlayState : public emlite::Val {
  explicit XRDOMOverlayState(Handle h) noexcept;
public:
    static XRDOMOverlayState take_ownership(Handle h) noexcept;
    explicit XRDOMOverlayState(const emlite::Val &val) noexcept;
    XRDOMOverlayState() noexcept;
    XRDOMOverlayState clone() const noexcept;
    XRDOMOverlayType type() const;
    void type(const XRDOMOverlayType& value);
};

class XRHitTestOptionsInit : public emlite::Val {
  explicit XRHitTestOptionsInit(Handle h) noexcept;
public:
    static XRHitTestOptionsInit take_ownership(Handle h) noexcept;
    explicit XRHitTestOptionsInit(const emlite::Val &val) noexcept;
    XRHitTestOptionsInit() noexcept;
    XRHitTestOptionsInit clone() const noexcept;
    XRSpace space() const;
    void space(const XRSpace& value);
    jsbind::TypedArray<XRHitTestTrackableType> entityTypes() const;
    void entityTypes(const jsbind::TypedArray<XRHitTestTrackableType>& value);
    XRRay offsetRay() const;
    void offsetRay(const XRRay& value);
};

class XRTransientInputHitTestOptionsInit : public emlite::Val {
  explicit XRTransientInputHitTestOptionsInit(Handle h) noexcept;
public:
    static XRTransientInputHitTestOptionsInit take_ownership(Handle h) noexcept;
    explicit XRTransientInputHitTestOptionsInit(const emlite::Val &val) noexcept;
    XRTransientInputHitTestOptionsInit() noexcept;
    XRTransientInputHitTestOptionsInit clone() const noexcept;
    jsbind::String profile() const;
    void profile(const jsbind::String& value);
    jsbind::TypedArray<XRHitTestTrackableType> entityTypes() const;
    void entityTypes(const jsbind::TypedArray<XRHitTestTrackableType>& value);
    XRRay offsetRay() const;
    void offsetRay(const XRRay& value);
};

class XRLightProbeInit : public emlite::Val {
  explicit XRLightProbeInit(Handle h) noexcept;
public:
    static XRLightProbeInit take_ownership(Handle h) noexcept;
    explicit XRLightProbeInit(const emlite::Val &val) noexcept;
    XRLightProbeInit() noexcept;
    XRLightProbeInit clone() const noexcept;
    XRReflectionFormat reflectionFormat() const;
    void reflectionFormat(const XRReflectionFormat& value);
};

class XRSession : public EventTarget {
    explicit XRSession(Handle h) noexcept;

public:
    explicit XRSession(const emlite::Val &val) noexcept;
    static XRSession take_ownership(Handle h) noexcept;

    XRSession clone() const noexcept;
    XRVisibilityState visibilityState() const;
    float frameRate() const;
    jsbind::Float32Array supportedFrameRates() const;
    XRRenderState renderState() const;
    XRInputSourceArray inputSources() const;
    XRInputSourceArray trackedSources() const;
    jsbind::TypedArray<jsbind::String> enabledFeatures() const;
    bool isSystemKeyboardSupported() const;
    jsbind::Undefined updateRenderState();
    jsbind::Undefined updateRenderState(const XRRenderStateInit& state);
    jsbind::Promise<jsbind::Undefined> updateTargetFrameRate(float rate);
    jsbind::Promise<XRReferenceSpace> requestReferenceSpace(const XRReferenceSpaceType& type);
    unsigned long requestAnimationFrame(const jsbind::Function& callback);
    jsbind::Undefined cancelAnimationFrame(unsigned long handle);
    jsbind::Promise<jsbind::Undefined> end();
    jsbind::Any onend() const;
    void onend(const jsbind::Any& value);
    jsbind::Any oninputsourceschange() const;
    void oninputsourceschange(const jsbind::Any& value);
    jsbind::Any onselect() const;
    void onselect(const jsbind::Any& value);
    jsbind::Any onselectstart() const;
    void onselectstart(const jsbind::Any& value);
    jsbind::Any onselectend() const;
    void onselectend(const jsbind::Any& value);
    jsbind::Any onsqueeze() const;
    void onsqueeze(const jsbind::Any& value);
    jsbind::Any onsqueezestart() const;
    void onsqueezestart(const jsbind::Any& value);
    jsbind::Any onsqueezeend() const;
    void onsqueezeend(const jsbind::Any& value);
    jsbind::Any onvisibilitychange() const;
    void onvisibilitychange(const jsbind::Any& value);
    jsbind::Any onframeratechange() const;
    void onframeratechange(const jsbind::Any& value);
    jsbind::TypedArray<jsbind::String> persistentAnchors() const;
    jsbind::Promise<XRAnchor> restorePersistentAnchor(const jsbind::String& uuid);
    jsbind::Promise<jsbind::Undefined> deletePersistentAnchor(const jsbind::String& uuid);
    XREnvironmentBlendMode environmentBlendMode() const;
    XRInteractionMode interactionMode() const;
    XRDepthUsage depthUsage() const;
    XRDepthDataFormat depthDataFormat() const;
    XRDepthType depthType() const;
    bool depthActive() const;
    jsbind::Undefined pauseDepthSensing();
    jsbind::Undefined resumeDepthSensing();
    XRDOMOverlayState domOverlayState() const;
    jsbind::Promise<XRHitTestSource> requestHitTestSource(const XRHitTestOptionsInit& options);
    jsbind::Promise<XRTransientInputHitTestSource> requestHitTestSourceForTransientInput(const XRTransientInputHitTestOptionsInit& options);
    jsbind::Promise<XRLightProbe> requestLightProbe();
    jsbind::Promise<XRLightProbe> requestLightProbe(const XRLightProbeInit& options);
    XRReflectionFormat preferredReflectionFormat() const;
    jsbind::Promise<jsbind::Undefined> initiateRoomCapture();
};

