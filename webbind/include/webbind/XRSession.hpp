#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "XRRenderStateInit.hpp"
#include "XRDOMOverlayState.hpp"
#include "XRHitTestOptionsInit.hpp"
#include "XRTransientInputHitTestOptionsInit.hpp"
#include "XRLightProbeInit.hpp"
#include "enums.hpp"

namespace webbind {

class XRRenderState;
class XRInputSourceArray;
class XRReferenceSpace;
class XRAnchor;
class XRHitTestSource;
class XRTransientInputHitTestSource;
class XRLightProbe;

/// Interface XRSession
/// [`XRSession`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession)
class XRSession : public EventTarget {
    explicit XRSession(Handle h) noexcept;
public:
    explicit XRSession(const emlite::Val &val) noexcept;
    static XRSession take_ownership(Handle h) noexcept;
    [[nodiscard]] XRSession clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `visibilityState` attribute.
    /// [`XRSession.visibilityState`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/visibilityState)
    [[nodiscard]] XRVisibilityState visibilityState() const;
    /// Getter of the `frameRate` attribute.
    /// [`XRSession.frameRate`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/frameRate)
    [[nodiscard]] float frameRate() const;
    /// Getter of the `supportedFrameRates` attribute.
    /// [`XRSession.supportedFrameRates`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/supportedFrameRates)
    [[nodiscard]] jsbind::Float32Array supportedFrameRates() const;
    /// Getter of the `renderState` attribute.
    /// [`XRSession.renderState`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/renderState)
    [[nodiscard]] XRRenderState renderState() const;
    /// Getter of the `inputSources` attribute.
    /// [`XRSession.inputSources`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/inputSources)
    [[nodiscard]] XRInputSourceArray inputSources() const;
    /// Getter of the `trackedSources` attribute.
    /// [`XRSession.trackedSources`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/trackedSources)
    [[nodiscard]] XRInputSourceArray trackedSources() const;
    /// Getter of the `enabledFeatures` attribute.
    /// [`XRSession.enabledFeatures`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/enabledFeatures)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> enabledFeatures() const;
    /// Getter of the `isSystemKeyboardSupported` attribute.
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
    /// Getter of the `onend` attribute.
    /// [`XRSession.onend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onend)
    [[nodiscard]] jsbind::Any onend() const;
    /// Setter of the `onend` attribute.
    /// [`XRSession.onend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onend)
    void onend(const jsbind::Any& value);
    /// Getter of the `oninputsourceschange` attribute.
    /// [`XRSession.oninputsourceschange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/oninputsourceschange)
    [[nodiscard]] jsbind::Any oninputsourceschange() const;
    /// Setter of the `oninputsourceschange` attribute.
    /// [`XRSession.oninputsourceschange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/oninputsourceschange)
    void oninputsourceschange(const jsbind::Any& value);
    /// Getter of the `onselect` attribute.
    /// [`XRSession.onselect`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselect)
    [[nodiscard]] jsbind::Any onselect() const;
    /// Setter of the `onselect` attribute.
    /// [`XRSession.onselect`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselect)
    void onselect(const jsbind::Any& value);
    /// Getter of the `onselectstart` attribute.
    /// [`XRSession.onselectstart`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselectstart)
    [[nodiscard]] jsbind::Any onselectstart() const;
    /// Setter of the `onselectstart` attribute.
    /// [`XRSession.onselectstart`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselectstart)
    void onselectstart(const jsbind::Any& value);
    /// Getter of the `onselectend` attribute.
    /// [`XRSession.onselectend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselectend)
    [[nodiscard]] jsbind::Any onselectend() const;
    /// Setter of the `onselectend` attribute.
    /// [`XRSession.onselectend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onselectend)
    void onselectend(const jsbind::Any& value);
    /// Getter of the `onsqueeze` attribute.
    /// [`XRSession.onsqueeze`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueeze)
    [[nodiscard]] jsbind::Any onsqueeze() const;
    /// Setter of the `onsqueeze` attribute.
    /// [`XRSession.onsqueeze`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueeze)
    void onsqueeze(const jsbind::Any& value);
    /// Getter of the `onsqueezestart` attribute.
    /// [`XRSession.onsqueezestart`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueezestart)
    [[nodiscard]] jsbind::Any onsqueezestart() const;
    /// Setter of the `onsqueezestart` attribute.
    /// [`XRSession.onsqueezestart`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueezestart)
    void onsqueezestart(const jsbind::Any& value);
    /// Getter of the `onsqueezeend` attribute.
    /// [`XRSession.onsqueezeend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueezeend)
    [[nodiscard]] jsbind::Any onsqueezeend() const;
    /// Setter of the `onsqueezeend` attribute.
    /// [`XRSession.onsqueezeend`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onsqueezeend)
    void onsqueezeend(const jsbind::Any& value);
    /// Getter of the `onvisibilitychange` attribute.
    /// [`XRSession.onvisibilitychange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onvisibilitychange)
    [[nodiscard]] jsbind::Any onvisibilitychange() const;
    /// Setter of the `onvisibilitychange` attribute.
    /// [`XRSession.onvisibilitychange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onvisibilitychange)
    void onvisibilitychange(const jsbind::Any& value);
    /// Getter of the `onframeratechange` attribute.
    /// [`XRSession.onframeratechange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onframeratechange)
    [[nodiscard]] jsbind::Any onframeratechange() const;
    /// Setter of the `onframeratechange` attribute.
    /// [`XRSession.onframeratechange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/onframeratechange)
    void onframeratechange(const jsbind::Any& value);
    /// Getter of the `persistentAnchors` attribute.
    /// [`XRSession.persistentAnchors`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/persistentAnchors)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> persistentAnchors() const;
    /// The restorePersistentAnchor method.
    /// [`XRSession.restorePersistentAnchor`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/restorePersistentAnchor)
    jsbind::Promise<XRAnchor> restorePersistentAnchor(const jsbind::String& uuid);
    /// The deletePersistentAnchor method.
    /// [`XRSession.deletePersistentAnchor`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/deletePersistentAnchor)
    jsbind::Promise<jsbind::Undefined> deletePersistentAnchor(const jsbind::String& uuid);
    /// Getter of the `environmentBlendMode` attribute.
    /// [`XRSession.environmentBlendMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/environmentBlendMode)
    [[nodiscard]] XREnvironmentBlendMode environmentBlendMode() const;
    /// Getter of the `interactionMode` attribute.
    /// [`XRSession.interactionMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/interactionMode)
    [[nodiscard]] XRInteractionMode interactionMode() const;
    /// Getter of the `depthUsage` attribute.
    /// [`XRSession.depthUsage`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/depthUsage)
    [[nodiscard]] XRDepthUsage depthUsage() const;
    /// Getter of the `depthDataFormat` attribute.
    /// [`XRSession.depthDataFormat`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/depthDataFormat)
    [[nodiscard]] XRDepthDataFormat depthDataFormat() const;
    /// Getter of the `depthType` attribute.
    /// [`XRSession.depthType`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/depthType)
    [[nodiscard]] XRDepthType depthType() const;
    /// Getter of the `depthActive` attribute.
    /// [`XRSession.depthActive`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/depthActive)
    [[nodiscard]] bool depthActive() const;
    /// The pauseDepthSensing method.
    /// [`XRSession.pauseDepthSensing`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/pauseDepthSensing)
    jsbind::Undefined pauseDepthSensing();
    /// The resumeDepthSensing method.
    /// [`XRSession.resumeDepthSensing`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/resumeDepthSensing)
    jsbind::Undefined resumeDepthSensing();
    /// Getter of the `domOverlayState` attribute.
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
    /// Getter of the `preferredReflectionFormat` attribute.
    /// [`XRSession.preferredReflectionFormat`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/preferredReflectionFormat)
    [[nodiscard]] XRReflectionFormat preferredReflectionFormat() const;
    /// The initiateRoomCapture method.
    /// [`XRSession.initiateRoomCapture`](https://developer.mozilla.org/en-US/docs/Web/API/XRSession/initiateRoomCapture)
    jsbind::Promise<jsbind::Undefined> initiateRoomCapture();
};

} // namespace webbind