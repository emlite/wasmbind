#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

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

/// Interface XRSession
/// [`XRSession`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession)
class XRSession : public EventTarget {
    explicit XRSession(Handle h) noexcept;
public:
    explicit XRSession(const emlite::Val &val) noexcept;
    static XRSession take_ownership(Handle h) noexcept;
    [[nodiscard]] XRSession clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRSession.visibilityState`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/visibilityState)
    /// [`XRSession.visibilityState`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/visibilityState)
    [[nodiscard]] XRVisibilityState visibilityState() const;
    /// [`XRSession.frameRate`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/frameRate)
    /// [`XRSession.frameRate`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/frameRate)
    [[nodiscard]] float frameRate() const;
    /// [`XRSession.supportedFrameRates`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/supportedFrameRates)
    /// [`XRSession.supportedFrameRates`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/supportedFrameRates)
    [[nodiscard]] jsbind::Float32Array supportedFrameRates() const;
    /// [`XRSession.renderState`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/renderState)
    /// [`XRSession.renderState`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/renderState)
    [[nodiscard]] XRRenderState renderState() const;
    /// [`XRSession.inputSources`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/inputSources)
    /// [`XRSession.inputSources`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/inputSources)
    [[nodiscard]] XRInputSourceArray inputSources() const;
    /// [`XRSession.trackedSources`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/trackedSources)
    /// [`XRSession.trackedSources`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/trackedSources)
    [[nodiscard]] XRInputSourceArray trackedSources() const;
    /// [`XRSession.enabledFeatures`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/enabledFeatures)
    /// [`XRSession.enabledFeatures`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/enabledFeatures)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> enabledFeatures() const;
    /// [`XRSession.isSystemKeyboardSupported`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/isSystemKeyboardSupported)
    /// [`XRSession.isSystemKeyboardSupported`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/isSystemKeyboardSupported)
    [[nodiscard]] bool isSystemKeyboardSupported() const;
    /// The updateRenderState method.
    /// [`XRSession.updateRenderState`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/updateRenderState)
    jsbind::Undefined updateRenderState();
    /// The updateRenderState method.
    /// [`XRSession.updateRenderState`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/updateRenderState)
    jsbind::Undefined updateRenderState(const XRRenderStateInit& state);
    /// The updateTargetFrameRate method.
    /// [`XRSession.updateTargetFrameRate`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/updateTargetFrameRate)
    jsbind::Promise<jsbind::Undefined> updateTargetFrameRate(float rate);
    /// The requestReferenceSpace method.
    /// [`XRSession.requestReferenceSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/requestReferenceSpace)
    jsbind::Promise<XRReferenceSpace> requestReferenceSpace(const XRReferenceSpaceType& type);
    /// The requestAnimationFrame method.
    /// [`XRSession.requestAnimationFrame`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/requestAnimationFrame)
    unsigned long requestAnimationFrame(const jsbind::Function& callback);
    /// The cancelAnimationFrame method.
    /// [`XRSession.cancelAnimationFrame`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/cancelAnimationFrame)
    jsbind::Undefined cancelAnimationFrame(unsigned long handle);
    /// The end method.
    /// [`XRSession.end`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/end)
    jsbind::Promise<jsbind::Undefined> end();
    /// [`XRSession.onend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onend)
    /// [`XRSession.onend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onend)
    [[nodiscard]] jsbind::Any onend() const;
    /// Setter of the `onend` attribute.
    /// [`XRSession.onend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onend)
    void onend(const jsbind::Any& value);
    /// [`XRSession.oninputsourceschange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/oninputsourceschange)
    /// [`XRSession.oninputsourceschange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/oninputsourceschange)
    [[nodiscard]] jsbind::Any oninputsourceschange() const;
    /// Setter of the `oninputsourceschange` attribute.
    /// [`XRSession.oninputsourceschange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/oninputsourceschange)
    void oninputsourceschange(const jsbind::Any& value);
    /// [`XRSession.onselect`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselect)
    /// [`XRSession.onselect`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselect)
    [[nodiscard]] jsbind::Any onselect() const;
    /// Setter of the `onselect` attribute.
    /// [`XRSession.onselect`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselect)
    void onselect(const jsbind::Any& value);
    /// [`XRSession.onselectstart`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselectstart)
    /// [`XRSession.onselectstart`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselectstart)
    [[nodiscard]] jsbind::Any onselectstart() const;
    /// Setter of the `onselectstart` attribute.
    /// [`XRSession.onselectstart`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselectstart)
    void onselectstart(const jsbind::Any& value);
    /// [`XRSession.onselectend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselectend)
    /// [`XRSession.onselectend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselectend)
    [[nodiscard]] jsbind::Any onselectend() const;
    /// Setter of the `onselectend` attribute.
    /// [`XRSession.onselectend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselectend)
    void onselectend(const jsbind::Any& value);
    /// [`XRSession.onsqueeze`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueeze)
    /// [`XRSession.onsqueeze`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueeze)
    [[nodiscard]] jsbind::Any onsqueeze() const;
    /// Setter of the `onsqueeze` attribute.
    /// [`XRSession.onsqueeze`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueeze)
    void onsqueeze(const jsbind::Any& value);
    /// [`XRSession.onsqueezestart`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueezestart)
    /// [`XRSession.onsqueezestart`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueezestart)
    [[nodiscard]] jsbind::Any onsqueezestart() const;
    /// Setter of the `onsqueezestart` attribute.
    /// [`XRSession.onsqueezestart`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueezestart)
    void onsqueezestart(const jsbind::Any& value);
    /// [`XRSession.onsqueezeend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueezeend)
    /// [`XRSession.onsqueezeend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueezeend)
    [[nodiscard]] jsbind::Any onsqueezeend() const;
    /// Setter of the `onsqueezeend` attribute.
    /// [`XRSession.onsqueezeend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueezeend)
    void onsqueezeend(const jsbind::Any& value);
    /// [`XRSession.onvisibilitychange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onvisibilitychange)
    /// [`XRSession.onvisibilitychange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onvisibilitychange)
    [[nodiscard]] jsbind::Any onvisibilitychange() const;
    /// Setter of the `onvisibilitychange` attribute.
    /// [`XRSession.onvisibilitychange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onvisibilitychange)
    void onvisibilitychange(const jsbind::Any& value);
    /// [`XRSession.onframeratechange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onframeratechange)
    /// [`XRSession.onframeratechange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onframeratechange)
    [[nodiscard]] jsbind::Any onframeratechange() const;
    /// Setter of the `onframeratechange` attribute.
    /// [`XRSession.onframeratechange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onframeratechange)
    void onframeratechange(const jsbind::Any& value);
    /// [`XRSession.persistentAnchors`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/persistentAnchors)
    /// [`XRSession.persistentAnchors`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/persistentAnchors)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> persistentAnchors() const;
    /// The restorePersistentAnchor method.
    /// [`XRSession.restorePersistentAnchor`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/restorePersistentAnchor)
    jsbind::Promise<XRAnchor> restorePersistentAnchor(const jsbind::String& uuid);
    /// The deletePersistentAnchor method.
    /// [`XRSession.deletePersistentAnchor`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/deletePersistentAnchor)
    jsbind::Promise<jsbind::Undefined> deletePersistentAnchor(const jsbind::String& uuid);
    /// [`XRSession.environmentBlendMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/environmentBlendMode)
    /// [`XRSession.environmentBlendMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/environmentBlendMode)
    [[nodiscard]] XREnvironmentBlendMode environmentBlendMode() const;
    /// [`XRSession.interactionMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/interactionMode)
    /// [`XRSession.interactionMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/interactionMode)
    [[nodiscard]] XRInteractionMode interactionMode() const;
    /// [`XRSession.depthUsage`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/depthUsage)
    /// [`XRSession.depthUsage`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/depthUsage)
    [[nodiscard]] XRDepthUsage depthUsage() const;
    /// [`XRSession.depthDataFormat`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/depthDataFormat)
    /// [`XRSession.depthDataFormat`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/depthDataFormat)
    [[nodiscard]] XRDepthDataFormat depthDataFormat() const;
    /// [`XRSession.depthType`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/depthType)
    /// [`XRSession.depthType`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/depthType)
    [[nodiscard]] XRDepthType depthType() const;
    /// [`XRSession.depthActive`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/depthActive)
    /// [`XRSession.depthActive`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/depthActive)
    [[nodiscard]] bool depthActive() const;
    /// The pauseDepthSensing method.
    /// [`XRSession.pauseDepthSensing`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/pauseDepthSensing)
    jsbind::Undefined pauseDepthSensing();
    /// The resumeDepthSensing method.
    /// [`XRSession.resumeDepthSensing`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/resumeDepthSensing)
    jsbind::Undefined resumeDepthSensing();
    /// [`XRSession.domOverlayState`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/domOverlayState)
    /// [`XRSession.domOverlayState`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/domOverlayState)
    [[nodiscard]] XRDOMOverlayState domOverlayState() const;
    /// The requestHitTestSource method.
    /// [`XRSession.requestHitTestSource`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/requestHitTestSource)
    jsbind::Promise<XRHitTestSource> requestHitTestSource(const XRHitTestOptionsInit& options);
    /// The requestHitTestSourceForTransientInput method.
    /// [`XRSession.requestHitTestSourceForTransientInput`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/requestHitTestSourceForTransientInput)
    jsbind::Promise<XRTransientInputHitTestSource> requestHitTestSourceForTransientInput(const XRTransientInputHitTestOptionsInit& options);
    /// The requestLightProbe method.
    /// [`XRSession.requestLightProbe`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/requestLightProbe)
    jsbind::Promise<XRLightProbe> requestLightProbe();
    /// The requestLightProbe method.
    /// [`XRSession.requestLightProbe`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/requestLightProbe)
    jsbind::Promise<XRLightProbe> requestLightProbe(const XRLightProbeInit& options);
    /// [`XRSession.preferredReflectionFormat`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/preferredReflectionFormat)
    /// [`XRSession.preferredReflectionFormat`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/preferredReflectionFormat)
    [[nodiscard]] XRReflectionFormat preferredReflectionFormat() const;
    /// The initiateRoomCapture method.
    /// [`XRSession.initiateRoomCapture`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/initiateRoomCapture)
    jsbind::Promise<jsbind::Undefined> initiateRoomCapture();
};

} // namespace webbind