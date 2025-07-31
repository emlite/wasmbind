#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class RTCIceCandidate;
class RTCIceCandidatePair;
class RTCIceParameters;
class RTCIceGatherOptions;
class RTCIceCandidateInit;


class RTCIceParameters : public emlite::Val {
  explicit RTCIceParameters(Handle h) noexcept;
public:
    static RTCIceParameters take_ownership(Handle h) noexcept;
    explicit RTCIceParameters(const emlite::Val &val) noexcept;
    RTCIceParameters() noexcept;
    [[nodiscard]] RTCIceParameters clone() const noexcept;
    [[nodiscard]] jsbind::String usernameFragment() const;
    void usernameFragment(const jsbind::String& value);
    [[nodiscard]] jsbind::String password() const;
    void password(const jsbind::String& value);
};

class RTCIceGatherOptions : public emlite::Val {
  explicit RTCIceGatherOptions(Handle h) noexcept;
public:
    static RTCIceGatherOptions take_ownership(Handle h) noexcept;
    explicit RTCIceGatherOptions(const emlite::Val &val) noexcept;
    RTCIceGatherOptions() noexcept;
    [[nodiscard]] RTCIceGatherOptions clone() const noexcept;
    [[nodiscard]] RTCIceTransportPolicy gatherPolicy() const;
    void gatherPolicy(const RTCIceTransportPolicy& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> iceServers() const;
    void iceServers(const jsbind::TypedArray<jsbind::Any>& value);
};

class RTCIceCandidateInit : public emlite::Val {
  explicit RTCIceCandidateInit(Handle h) noexcept;
public:
    static RTCIceCandidateInit take_ownership(Handle h) noexcept;
    explicit RTCIceCandidateInit(const emlite::Val &val) noexcept;
    RTCIceCandidateInit() noexcept;
    [[nodiscard]] RTCIceCandidateInit clone() const noexcept;
    [[nodiscard]] jsbind::String candidate() const;
    void candidate(const jsbind::String& value);
    [[nodiscard]] jsbind::String sdpMid() const;
    void sdpMid(const jsbind::String& value);
    [[nodiscard]] unsigned short sdpMLineIndex() const;
    void sdpMLineIndex(unsigned short value);
    [[nodiscard]] jsbind::String usernameFragment() const;
    void usernameFragment(const jsbind::String& value);
};

/// The RTCIceTransport class.
/// [`RTCIceTransport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport)
class RTCIceTransport : public EventTarget {
    explicit RTCIceTransport(Handle h) noexcept;

public:
    explicit RTCIceTransport(const emlite::Val &val) noexcept;
    static RTCIceTransport take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCIceTransport clone() const noexcept;
    /// Getter of the `role` attribute.
    /// [`RTCIceTransport.role`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/role)
    [[nodiscard]] RTCIceRole role() const;
    /// Getter of the `component` attribute.
    /// [`RTCIceTransport.component`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/component)
    [[nodiscard]] RTCIceComponent component() const;
    /// Getter of the `state` attribute.
    /// [`RTCIceTransport.state`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/state)
    [[nodiscard]] RTCIceTransportState state() const;
    /// Getter of the `gatheringState` attribute.
    /// [`RTCIceTransport.gatheringState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/gatheringState)
    [[nodiscard]] RTCIceGathererState gatheringState() const;
    /// The getLocalCandidates method.
    /// [`RTCIceTransport.getLocalCandidates`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/getLocalCandidates)
    jsbind::TypedArray<RTCIceCandidate> getLocalCandidates();
    /// The getRemoteCandidates method.
    /// [`RTCIceTransport.getRemoteCandidates`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/getRemoteCandidates)
    jsbind::TypedArray<RTCIceCandidate> getRemoteCandidates();
    /// The getSelectedCandidatePair method.
    /// [`RTCIceTransport.getSelectedCandidatePair`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/getSelectedCandidatePair)
    RTCIceCandidatePair getSelectedCandidatePair();
    /// The getLocalParameters method.
    /// [`RTCIceTransport.getLocalParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/getLocalParameters)
    RTCIceParameters getLocalParameters();
    /// The getRemoteParameters method.
    /// [`RTCIceTransport.getRemoteParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/getRemoteParameters)
    RTCIceParameters getRemoteParameters();
    /// Getter of the `onstatechange` attribute.
    /// [`RTCIceTransport.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onstatechange)
    [[nodiscard]] jsbind::Any onstatechange() const;
    /// Setter of the `onstatechange` attribute.
    /// [`RTCIceTransport.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onstatechange)
    void onstatechange(const jsbind::Any& value);
    /// Getter of the `ongatheringstatechange` attribute.
    /// [`RTCIceTransport.ongatheringstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/ongatheringstatechange)
    [[nodiscard]] jsbind::Any ongatheringstatechange() const;
    /// Setter of the `ongatheringstatechange` attribute.
    /// [`RTCIceTransport.ongatheringstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/ongatheringstatechange)
    void ongatheringstatechange(const jsbind::Any& value);
    /// Getter of the `onselectedcandidatepairchange` attribute.
    /// [`RTCIceTransport.onselectedcandidatepairchange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onselectedcandidatepairchange)
    [[nodiscard]] jsbind::Any onselectedcandidatepairchange() const;
    /// Setter of the `onselectedcandidatepairchange` attribute.
    /// [`RTCIceTransport.onselectedcandidatepairchange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onselectedcandidatepairchange)
    void onselectedcandidatepairchange(const jsbind::Any& value);
    /// The `new RTCIceTransport(..)` constructor, creating a new RTCIceTransport instance
    RTCIceTransport();
    /// The gather method.
    /// [`RTCIceTransport.gather`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/gather)
    jsbind::Undefined gather();
    /// The gather method.
    /// [`RTCIceTransport.gather`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/gather)
    jsbind::Undefined gather(const RTCIceGatherOptions& options);
    /// The start method.
    /// [`RTCIceTransport.start`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/start)
    jsbind::Undefined start();
    /// The start method.
    /// [`RTCIceTransport.start`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/start)
    jsbind::Undefined start(const RTCIceParameters& remoteParameters);
    /// The start method.
    /// [`RTCIceTransport.start`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/start)
    jsbind::Undefined start(const RTCIceParameters& remoteParameters, const RTCIceRole& role);
    /// The stop method.
    /// [`RTCIceTransport.stop`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/stop)
    jsbind::Undefined stop();
    /// The addRemoteCandidate method.
    /// [`RTCIceTransport.addRemoteCandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/addRemoteCandidate)
    jsbind::Undefined addRemoteCandidate();
    /// The addRemoteCandidate method.
    /// [`RTCIceTransport.addRemoteCandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/addRemoteCandidate)
    jsbind::Undefined addRemoteCandidate(const RTCIceCandidateInit& remoteCandidate);
    /// Getter of the `onerror` attribute.
    /// [`RTCIceTransport.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`RTCIceTransport.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onerror)
    void onerror(const jsbind::Any& value);
    /// Getter of the `onicecandidate` attribute.
    /// [`RTCIceTransport.onicecandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onicecandidate)
    [[nodiscard]] jsbind::Any onicecandidate() const;
    /// Setter of the `onicecandidate` attribute.
    /// [`RTCIceTransport.onicecandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onicecandidate)
    void onicecandidate(const jsbind::Any& value);
};

