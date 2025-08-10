#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "RTCConfiguration.hpp"
#include "RTCOfferOptions.hpp"
#include "RTCLocalSessionDescriptionInit.hpp"
#include "RTCSessionDescriptionInit.hpp"
#include "RTCIceCandidateInit.hpp"
#include "RTCIdentityProviderOptions.hpp"
#include "RTCRtpTransceiverInit.hpp"
#include "RTCDataChannelInit.hpp"
#include "enums.hpp"

namespace webbind {

class RTCSessionDescription;
class RTCIdentityAssertion;
class RTCCertificate;
class RTCRtpSender;
class RTCRtpReceiver;
class RTCRtpTransceiver;
class MediaStreamTrack;
class MediaStream;
class RTCSctpTransport;
class RTCDataChannel;
class RTCStatsReport;

/// Interface RTCPeerConnection
/// [`RTCPeerConnection`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection)
class RTCPeerConnection : public EventTarget {
    explicit RTCPeerConnection(Handle h) noexcept;
public:
    explicit RTCPeerConnection(const emlite::Val &val) noexcept;
    static RTCPeerConnection take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCPeerConnection clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RTCPeerConnection(..)` constructor, creating a new RTCPeerConnection instance
    RTCPeerConnection();
    /// The `new RTCPeerConnection(..)` constructor, creating a new RTCPeerConnection instance
    RTCPeerConnection(const RTCConfiguration& configuration);
    /// The createOffer method.
    /// [`RTCPeerConnection.createOffer`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/createOffer)
    jsbind::Promise<jsbind::Undefined> createOffer(const jsbind::Function& successCallback, const jsbind::Function& failureCallback);
    /// The createOffer method.
    /// [`RTCPeerConnection.createOffer`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/createOffer)
    jsbind::Promise<jsbind::Undefined> createOffer(const jsbind::Function& successCallback, const jsbind::Function& failureCallback, const RTCOfferOptions& options);
    /// The createAnswer method.
    /// [`RTCPeerConnection.createAnswer`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/createAnswer)
    jsbind::Promise<jsbind::Undefined> createAnswer(const jsbind::Function& successCallback, const jsbind::Function& failureCallback);
    /// The setLocalDescription method.
    /// [`RTCPeerConnection.setLocalDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/setLocalDescription)
    jsbind::Promise<jsbind::Undefined> setLocalDescription(const RTCLocalSessionDescriptionInit& description, const jsbind::Function& successCallback, const jsbind::Function& failureCallback);
    /// [`RTCPeerConnection.localDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/localDescription)
    /// [`RTCPeerConnection.localDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/localDescription)
    [[nodiscard]] RTCSessionDescription localDescription() const;
    /// [`RTCPeerConnection.currentLocalDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/currentLocalDescription)
    /// [`RTCPeerConnection.currentLocalDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/currentLocalDescription)
    [[nodiscard]] RTCSessionDescription currentLocalDescription() const;
    /// [`RTCPeerConnection.pendingLocalDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/pendingLocalDescription)
    /// [`RTCPeerConnection.pendingLocalDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/pendingLocalDescription)
    [[nodiscard]] RTCSessionDescription pendingLocalDescription() const;
    /// The setRemoteDescription method.
    /// [`RTCPeerConnection.setRemoteDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/setRemoteDescription)
    jsbind::Promise<jsbind::Undefined> setRemoteDescription(const RTCSessionDescriptionInit& description, const jsbind::Function& successCallback, const jsbind::Function& failureCallback);
    /// [`RTCPeerConnection.remoteDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/remoteDescription)
    /// [`RTCPeerConnection.remoteDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/remoteDescription)
    [[nodiscard]] RTCSessionDescription remoteDescription() const;
    /// [`RTCPeerConnection.currentRemoteDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/currentRemoteDescription)
    /// [`RTCPeerConnection.currentRemoteDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/currentRemoteDescription)
    [[nodiscard]] RTCSessionDescription currentRemoteDescription() const;
    /// [`RTCPeerConnection.pendingRemoteDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/pendingRemoteDescription)
    /// [`RTCPeerConnection.pendingRemoteDescription`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/pendingRemoteDescription)
    [[nodiscard]] RTCSessionDescription pendingRemoteDescription() const;
    /// The addIceCandidate method.
    /// [`RTCPeerConnection.addIceCandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/addIceCandidate)
    jsbind::Promise<jsbind::Undefined> addIceCandidate(const RTCIceCandidateInit& candidate, const jsbind::Function& successCallback, const jsbind::Function& failureCallback);
    /// [`RTCPeerConnection.signalingState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/signalingState)
    /// [`RTCPeerConnection.signalingState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/signalingState)
    [[nodiscard]] RTCSignalingState signalingState() const;
    /// [`RTCPeerConnection.iceGatheringState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/iceGatheringState)
    /// [`RTCPeerConnection.iceGatheringState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/iceGatheringState)
    [[nodiscard]] RTCIceGatheringState iceGatheringState() const;
    /// [`RTCPeerConnection.iceConnectionState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/iceConnectionState)
    /// [`RTCPeerConnection.iceConnectionState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/iceConnectionState)
    [[nodiscard]] RTCIceConnectionState iceConnectionState() const;
    /// [`RTCPeerConnection.connectionState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/connectionState)
    /// [`RTCPeerConnection.connectionState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/connectionState)
    [[nodiscard]] RTCPeerConnectionState connectionState() const;
    /// [`RTCPeerConnection.canTrickleIceCandidates`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/canTrickleIceCandidates)
    /// [`RTCPeerConnection.canTrickleIceCandidates`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/canTrickleIceCandidates)
    [[nodiscard]] bool canTrickleIceCandidates() const;
    /// The restartIce method.
    /// [`RTCPeerConnection.restartIce`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/restartIce)
    jsbind::Undefined restartIce();
    /// The getConfiguration method.
    /// [`RTCPeerConnection.getConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/getConfiguration)
    RTCConfiguration getConfiguration();
    /// The setConfiguration method.
    /// [`RTCPeerConnection.setConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/setConfiguration)
    jsbind::Undefined setConfiguration();
    /// The setConfiguration method.
    /// [`RTCPeerConnection.setConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/setConfiguration)
    jsbind::Undefined setConfiguration(const RTCConfiguration& configuration);
    /// The close method.
    /// [`RTCPeerConnection.close`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/close)
    jsbind::Undefined close();
    /// [`RTCPeerConnection.onnegotiationneeded`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onnegotiationneeded)
    /// [`RTCPeerConnection.onnegotiationneeded`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onnegotiationneeded)
    [[nodiscard]] jsbind::Any onnegotiationneeded() const;
    /// Setter of the `onnegotiationneeded` attribute.
    /// [`RTCPeerConnection.onnegotiationneeded`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onnegotiationneeded)
    void onnegotiationneeded(const jsbind::Any& value);
    /// [`RTCPeerConnection.onicecandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onicecandidate)
    /// [`RTCPeerConnection.onicecandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onicecandidate)
    [[nodiscard]] jsbind::Any onicecandidate() const;
    /// Setter of the `onicecandidate` attribute.
    /// [`RTCPeerConnection.onicecandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onicecandidate)
    void onicecandidate(const jsbind::Any& value);
    /// [`RTCPeerConnection.onicecandidateerror`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onicecandidateerror)
    /// [`RTCPeerConnection.onicecandidateerror`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onicecandidateerror)
    [[nodiscard]] jsbind::Any onicecandidateerror() const;
    /// Setter of the `onicecandidateerror` attribute.
    /// [`RTCPeerConnection.onicecandidateerror`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onicecandidateerror)
    void onicecandidateerror(const jsbind::Any& value);
    /// [`RTCPeerConnection.onsignalingstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onsignalingstatechange)
    /// [`RTCPeerConnection.onsignalingstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onsignalingstatechange)
    [[nodiscard]] jsbind::Any onsignalingstatechange() const;
    /// Setter of the `onsignalingstatechange` attribute.
    /// [`RTCPeerConnection.onsignalingstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onsignalingstatechange)
    void onsignalingstatechange(const jsbind::Any& value);
    /// [`RTCPeerConnection.oniceconnectionstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/oniceconnectionstatechange)
    /// [`RTCPeerConnection.oniceconnectionstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/oniceconnectionstatechange)
    [[nodiscard]] jsbind::Any oniceconnectionstatechange() const;
    /// Setter of the `oniceconnectionstatechange` attribute.
    /// [`RTCPeerConnection.oniceconnectionstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/oniceconnectionstatechange)
    void oniceconnectionstatechange(const jsbind::Any& value);
    /// [`RTCPeerConnection.onicegatheringstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onicegatheringstatechange)
    /// [`RTCPeerConnection.onicegatheringstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onicegatheringstatechange)
    [[nodiscard]] jsbind::Any onicegatheringstatechange() const;
    /// Setter of the `onicegatheringstatechange` attribute.
    /// [`RTCPeerConnection.onicegatheringstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onicegatheringstatechange)
    void onicegatheringstatechange(const jsbind::Any& value);
    /// [`RTCPeerConnection.onconnectionstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onconnectionstatechange)
    /// [`RTCPeerConnection.onconnectionstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onconnectionstatechange)
    [[nodiscard]] jsbind::Any onconnectionstatechange() const;
    /// Setter of the `onconnectionstatechange` attribute.
    /// [`RTCPeerConnection.onconnectionstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/onconnectionstatechange)
    void onconnectionstatechange(const jsbind::Any& value);
    /// The setIdentityProvider method.
    /// [`RTCPeerConnection.setIdentityProvider`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/setIdentityProvider)
    jsbind::Undefined setIdentityProvider(const jsbind::String& provider);
    /// The setIdentityProvider method.
    /// [`RTCPeerConnection.setIdentityProvider`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/setIdentityProvider)
    jsbind::Undefined setIdentityProvider(const jsbind::String& provider, const RTCIdentityProviderOptions& options);
    /// The getIdentityAssertion method.
    /// [`RTCPeerConnection.getIdentityAssertion`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/getIdentityAssertion)
    jsbind::Promise<jsbind::String> getIdentityAssertion();
    /// [`RTCPeerConnection.peerIdentity`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/peerIdentity)
    /// [`RTCPeerConnection.peerIdentity`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/peerIdentity)
    [[nodiscard]] jsbind::Promise<RTCIdentityAssertion> peerIdentity() const;
    /// [`RTCPeerConnection.idpLoginUrl`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/idpLoginUrl)
    /// [`RTCPeerConnection.idpLoginUrl`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/idpLoginUrl)
    [[nodiscard]] jsbind::String idpLoginUrl() const;
    /// [`RTCPeerConnection.idpErrorInfo`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/idpErrorInfo)
    /// [`RTCPeerConnection.idpErrorInfo`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/idpErrorInfo)
    [[nodiscard]] jsbind::String idpErrorInfo() const;
    /// The generateCertificate method.
    /// [`RTCPeerConnection.generateCertificate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/generateCertificate)
    static jsbind::Promise<RTCCertificate> generateCertificate(const jsbind::Any& keygenAlgorithm);
    /// The getSenders method.
    /// [`RTCPeerConnection.getSenders`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/getSenders)
    jsbind::TypedArray<RTCRtpSender> getSenders();
    /// The getReceivers method.
    /// [`RTCPeerConnection.getReceivers`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/getReceivers)
    jsbind::TypedArray<RTCRtpReceiver> getReceivers();
    /// The getTransceivers method.
    /// [`RTCPeerConnection.getTransceivers`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/getTransceivers)
    jsbind::TypedArray<RTCRtpTransceiver> getTransceivers();
    /// The addTrack method.
    /// [`RTCPeerConnection.addTrack`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/addTrack)
    RTCRtpSender addTrack(const MediaStreamTrack& track, const MediaStream& streams);
    /// The removeTrack method.
    /// [`RTCPeerConnection.removeTrack`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/removeTrack)
    jsbind::Undefined removeTrack(const RTCRtpSender& sender);
    /// The addTransceiver method.
    /// [`RTCPeerConnection.addTransceiver`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/addTransceiver)
    RTCRtpTransceiver addTransceiver(const jsbind::Any& trackOrKind);
    /// The addTransceiver method.
    /// [`RTCPeerConnection.addTransceiver`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/addTransceiver)
    RTCRtpTransceiver addTransceiver(const jsbind::Any& trackOrKind, const RTCRtpTransceiverInit& init);
    /// [`RTCPeerConnection.ontrack`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/ontrack)
    /// [`RTCPeerConnection.ontrack`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/ontrack)
    [[nodiscard]] jsbind::Any ontrack() const;
    /// Setter of the `ontrack` attribute.
    /// [`RTCPeerConnection.ontrack`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/ontrack)
    void ontrack(const jsbind::Any& value);
    /// [`RTCPeerConnection.sctp`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/sctp)
    /// [`RTCPeerConnection.sctp`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/sctp)
    [[nodiscard]] RTCSctpTransport sctp() const;
    /// The createDataChannel method.
    /// [`RTCPeerConnection.createDataChannel`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/createDataChannel)
    RTCDataChannel createDataChannel(const jsbind::String& label);
    /// The createDataChannel method.
    /// [`RTCPeerConnection.createDataChannel`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/createDataChannel)
    RTCDataChannel createDataChannel(const jsbind::String& label, const RTCDataChannelInit& dataChannelDict);
    /// [`RTCPeerConnection.ondatachannel`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/ondatachannel)
    /// [`RTCPeerConnection.ondatachannel`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/ondatachannel)
    [[nodiscard]] jsbind::Any ondatachannel() const;
    /// Setter of the `ondatachannel` attribute.
    /// [`RTCPeerConnection.ondatachannel`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/ondatachannel)
    void ondatachannel(const jsbind::Any& value);
    /// The getStats method.
    /// [`RTCPeerConnection.getStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/getStats)
    jsbind::Promise<RTCStatsReport> getStats();
    /// The getStats method.
    /// [`RTCPeerConnection.getStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection/getStats)
    jsbind::Promise<RTCStatsReport> getStats(const MediaStreamTrack& selector);
};

} // namespace webbind