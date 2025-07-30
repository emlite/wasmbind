#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "RTCIceTransport.hpp"
#include "enums.hpp"

class RTCOfferOptions;
class RTCLocalSessionDescriptionInit;
class RTCSessionDescription;
class RTCSessionDescriptionInit;
class RTCConfiguration;
class RTCIdentityProviderOptions;
class RTCIdentityAssertion;
class RTCCertificate;
class RTCRtpSender;
class RTCRtpReceiver;
class RTCRtpTransceiver;
class MediaStreamTrack;
class MediaStream;
class RTCRtpTransceiverInit;
class RTCSctpTransport;
class RTCDataChannel;
class RTCDataChannelInit;
class RTCStatsReport;


class RTCOfferOptions : public emlite::Val {
  explicit RTCOfferOptions(Handle h) noexcept;
public:
    static RTCOfferOptions take_ownership(Handle h) noexcept;
    explicit RTCOfferOptions(const emlite::Val &val) noexcept;
    RTCOfferOptions() noexcept;
    RTCOfferOptions clone() const noexcept;
    bool offerToReceiveAudio() const;
    void offerToReceiveAudio(bool value);
    bool offerToReceiveVideo() const;
    void offerToReceiveVideo(bool value);
};

class RTCLocalSessionDescriptionInit : public emlite::Val {
  explicit RTCLocalSessionDescriptionInit(Handle h) noexcept;
public:
    static RTCLocalSessionDescriptionInit take_ownership(Handle h) noexcept;
    explicit RTCLocalSessionDescriptionInit(const emlite::Val &val) noexcept;
    RTCLocalSessionDescriptionInit() noexcept;
    RTCLocalSessionDescriptionInit clone() const noexcept;
    RTCSdpType type() const;
    void type(const RTCSdpType& value);
    jsbind::String sdp() const;
    void sdp(const jsbind::String& value);
};

class RTCSessionDescriptionInit : public emlite::Val {
  explicit RTCSessionDescriptionInit(Handle h) noexcept;
public:
    static RTCSessionDescriptionInit take_ownership(Handle h) noexcept;
    explicit RTCSessionDescriptionInit(const emlite::Val &val) noexcept;
    RTCSessionDescriptionInit() noexcept;
    RTCSessionDescriptionInit clone() const noexcept;
    RTCSdpType type() const;
    void type(const RTCSdpType& value);
    jsbind::String sdp() const;
    void sdp(const jsbind::String& value);
};

class RTCConfiguration : public emlite::Val {
  explicit RTCConfiguration(Handle h) noexcept;
public:
    static RTCConfiguration take_ownership(Handle h) noexcept;
    explicit RTCConfiguration(const emlite::Val &val) noexcept;
    RTCConfiguration() noexcept;
    RTCConfiguration clone() const noexcept;
    jsbind::TypedArray<jsbind::Any> iceServers() const;
    void iceServers(const jsbind::TypedArray<jsbind::Any>& value);
    RTCIceTransportPolicy iceTransportPolicy() const;
    void iceTransportPolicy(const RTCIceTransportPolicy& value);
    RTCBundlePolicy bundlePolicy() const;
    void bundlePolicy(const RTCBundlePolicy& value);
    RTCRtcpMuxPolicy rtcpMuxPolicy() const;
    void rtcpMuxPolicy(const RTCRtcpMuxPolicy& value);
    jsbind::TypedArray<RTCCertificate> certificates() const;
    void certificates(const jsbind::TypedArray<RTCCertificate>& value);
    unsigned char iceCandidatePoolSize() const;
    void iceCandidatePoolSize(unsigned char value);
};

class RTCIdentityProviderOptions : public emlite::Val {
  explicit RTCIdentityProviderOptions(Handle h) noexcept;
public:
    static RTCIdentityProviderOptions take_ownership(Handle h) noexcept;
    explicit RTCIdentityProviderOptions(const emlite::Val &val) noexcept;
    RTCIdentityProviderOptions() noexcept;
    RTCIdentityProviderOptions clone() const noexcept;
    jsbind::String protocol() const;
    void protocol(const jsbind::String& value);
    jsbind::String usernameHint() const;
    void usernameHint(const jsbind::String& value);
    jsbind::String peerIdentity() const;
    void peerIdentity(const jsbind::String& value);
};

class RTCRtpTransceiverInit : public emlite::Val {
  explicit RTCRtpTransceiverInit(Handle h) noexcept;
public:
    static RTCRtpTransceiverInit take_ownership(Handle h) noexcept;
    explicit RTCRtpTransceiverInit(const emlite::Val &val) noexcept;
    RTCRtpTransceiverInit() noexcept;
    RTCRtpTransceiverInit clone() const noexcept;
    RTCRtpTransceiverDirection direction() const;
    void direction(const RTCRtpTransceiverDirection& value);
    jsbind::TypedArray<MediaStream> streams() const;
    void streams(const jsbind::TypedArray<MediaStream>& value);
    jsbind::TypedArray<jsbind::Any> sendEncodings() const;
    void sendEncodings(const jsbind::TypedArray<jsbind::Any>& value);
};

class RTCDataChannelInit : public emlite::Val {
  explicit RTCDataChannelInit(Handle h) noexcept;
public:
    static RTCDataChannelInit take_ownership(Handle h) noexcept;
    explicit RTCDataChannelInit(const emlite::Val &val) noexcept;
    RTCDataChannelInit() noexcept;
    RTCDataChannelInit clone() const noexcept;
    bool ordered() const;
    void ordered(bool value);
    unsigned short maxPacketLifeTime() const;
    void maxPacketLifeTime(unsigned short value);
    unsigned short maxRetransmits() const;
    void maxRetransmits(unsigned short value);
    jsbind::String protocol() const;
    void protocol(const jsbind::String& value);
    bool negotiated() const;
    void negotiated(bool value);
    unsigned short id() const;
    void id(unsigned short value);
};

class RTCPeerConnection : public EventTarget {
    explicit RTCPeerConnection(Handle h) noexcept;

public:
    explicit RTCPeerConnection(const emlite::Val &val) noexcept;
    static RTCPeerConnection take_ownership(Handle h) noexcept;

    RTCPeerConnection clone() const noexcept;
    RTCPeerConnection();
    RTCPeerConnection(const RTCConfiguration& configuration);
    jsbind::Promise<jsbind::Undefined> createOffer(const jsbind::Function& successCallback, const jsbind::Function& failureCallback);
    jsbind::Promise<jsbind::Undefined> createOffer(const jsbind::Function& successCallback, const jsbind::Function& failureCallback, const RTCOfferOptions& options);
    jsbind::Promise<jsbind::Undefined> createAnswer(const jsbind::Function& successCallback, const jsbind::Function& failureCallback);
    jsbind::Promise<jsbind::Undefined> setLocalDescription(const RTCLocalSessionDescriptionInit& description, const jsbind::Any& successCallback, const jsbind::Function& failureCallback);
    RTCSessionDescription localDescription() const;
    RTCSessionDescription currentLocalDescription() const;
    RTCSessionDescription pendingLocalDescription() const;
    jsbind::Promise<jsbind::Undefined> setRemoteDescription(const RTCSessionDescriptionInit& description, const jsbind::Any& successCallback, const jsbind::Function& failureCallback);
    RTCSessionDescription remoteDescription() const;
    RTCSessionDescription currentRemoteDescription() const;
    RTCSessionDescription pendingRemoteDescription() const;
    jsbind::Promise<jsbind::Undefined> addIceCandidate(const RTCIceCandidateInit& candidate, const jsbind::Any& successCallback, const jsbind::Function& failureCallback);
    RTCSignalingState signalingState() const;
    RTCIceGatheringState iceGatheringState() const;
    RTCIceConnectionState iceConnectionState() const;
    RTCPeerConnectionState connectionState() const;
    bool canTrickleIceCandidates() const;
    jsbind::Undefined restartIce();
    RTCConfiguration getConfiguration();
    jsbind::Undefined setConfiguration();
    jsbind::Undefined setConfiguration(const RTCConfiguration& configuration);
    jsbind::Undefined close();
    jsbind::Any onnegotiationneeded() const;
    void onnegotiationneeded(const jsbind::Any& value);
    jsbind::Any onicecandidate() const;
    void onicecandidate(const jsbind::Any& value);
    jsbind::Any onicecandidateerror() const;
    void onicecandidateerror(const jsbind::Any& value);
    jsbind::Any onsignalingstatechange() const;
    void onsignalingstatechange(const jsbind::Any& value);
    jsbind::Any oniceconnectionstatechange() const;
    void oniceconnectionstatechange(const jsbind::Any& value);
    jsbind::Any onicegatheringstatechange() const;
    void onicegatheringstatechange(const jsbind::Any& value);
    jsbind::Any onconnectionstatechange() const;
    void onconnectionstatechange(const jsbind::Any& value);
    jsbind::Undefined setIdentityProvider(const jsbind::String& provider);
    jsbind::Undefined setIdentityProvider(const jsbind::String& provider, const RTCIdentityProviderOptions& options);
    jsbind::Promise<jsbind::String> getIdentityAssertion();
    jsbind::Promise<RTCIdentityAssertion> peerIdentity() const;
    jsbind::String idpLoginUrl() const;
    jsbind::String idpErrorInfo() const;
    static jsbind::Promise<RTCCertificate> generateCertificate(const jsbind::Any& keygenAlgorithm);
    jsbind::TypedArray<RTCRtpSender> getSenders();
    jsbind::TypedArray<RTCRtpReceiver> getReceivers();
    jsbind::TypedArray<RTCRtpTransceiver> getTransceivers();
    RTCRtpSender addTrack(const MediaStreamTrack& track, const MediaStream& streams);
    jsbind::Undefined removeTrack(const RTCRtpSender& sender);
    RTCRtpTransceiver addTransceiver(const jsbind::Any& trackOrKind);
    RTCRtpTransceiver addTransceiver(const jsbind::Any& trackOrKind, const RTCRtpTransceiverInit& init);
    jsbind::Any ontrack() const;
    void ontrack(const jsbind::Any& value);
    RTCSctpTransport sctp() const;
    RTCDataChannel createDataChannel(const jsbind::String& label);
    RTCDataChannel createDataChannel(const jsbind::String& label, const RTCDataChannelInit& dataChannelDict);
    jsbind::Any ondatachannel() const;
    void ondatachannel(const jsbind::Any& value);
    jsbind::Promise<RTCStatsReport> getStats();
    jsbind::Promise<RTCStatsReport> getStats(const MediaStreamTrack& selector);
};

