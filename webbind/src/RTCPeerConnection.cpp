#include <webbind/RTCPeerConnection.hpp>
#include <webbind/RTCSessionDescription.hpp>
#include <webbind/RTCIceTransport.hpp>
#include <webbind/RTCIdentityAssertion.hpp>
#include <webbind/RTCCertificate.hpp>
#include <webbind/RTCRtpSender.hpp>
#include <webbind/RTCRtpReceiver.hpp>
#include <webbind/RTCRtpTransceiver.hpp>
#include <webbind/MediaStreamTrack.hpp>
#include <webbind/MediaStream.hpp>
#include <webbind/RTCSctpTransport.hpp>
#include <webbind/RTCDataChannel.hpp>
#include <webbind/RTCStatsReport.hpp>


RTCOfferOptions::RTCOfferOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCOfferOptions RTCOfferOptions::take_ownership(Handle h) noexcept {
        return RTCOfferOptions(h);
    }
RTCOfferOptions::RTCOfferOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCOfferOptions::RTCOfferOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RTCOfferOptions RTCOfferOptions::clone() const noexcept { return *this; }

bool RTCOfferOptions::offerToReceiveAudio() const {
    return emlite::Val::get("offerToReceiveAudio").as<bool>();
}

void RTCOfferOptions::offerToReceiveAudio(bool value) {
    emlite::Val::set("offerToReceiveAudio", value);
}

bool RTCOfferOptions::offerToReceiveVideo() const {
    return emlite::Val::get("offerToReceiveVideo").as<bool>();
}

void RTCOfferOptions::offerToReceiveVideo(bool value) {
    emlite::Val::set("offerToReceiveVideo", value);
}

RTCLocalSessionDescriptionInit::RTCLocalSessionDescriptionInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCLocalSessionDescriptionInit RTCLocalSessionDescriptionInit::take_ownership(Handle h) noexcept {
        return RTCLocalSessionDescriptionInit(h);
    }
RTCLocalSessionDescriptionInit::RTCLocalSessionDescriptionInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCLocalSessionDescriptionInit::RTCLocalSessionDescriptionInit() noexcept: emlite::Val(emlite::Val::object()) {}
RTCLocalSessionDescriptionInit RTCLocalSessionDescriptionInit::clone() const noexcept { return *this; }

RTCSdpType RTCLocalSessionDescriptionInit::type() const {
    return emlite::Val::get("type").as<RTCSdpType>();
}

void RTCLocalSessionDescriptionInit::type(const RTCSdpType& value) {
    emlite::Val::set("type", value);
}

jsbind::String RTCLocalSessionDescriptionInit::sdp() const {
    return emlite::Val::get("sdp").as<jsbind::String>();
}

void RTCLocalSessionDescriptionInit::sdp(const jsbind::String& value) {
    emlite::Val::set("sdp", value);
}

RTCSessionDescriptionInit::RTCSessionDescriptionInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCSessionDescriptionInit RTCSessionDescriptionInit::take_ownership(Handle h) noexcept {
        return RTCSessionDescriptionInit(h);
    }
RTCSessionDescriptionInit::RTCSessionDescriptionInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCSessionDescriptionInit::RTCSessionDescriptionInit() noexcept: emlite::Val(emlite::Val::object()) {}
RTCSessionDescriptionInit RTCSessionDescriptionInit::clone() const noexcept { return *this; }

RTCSdpType RTCSessionDescriptionInit::type() const {
    return emlite::Val::get("type").as<RTCSdpType>();
}

void RTCSessionDescriptionInit::type(const RTCSdpType& value) {
    emlite::Val::set("type", value);
}

jsbind::String RTCSessionDescriptionInit::sdp() const {
    return emlite::Val::get("sdp").as<jsbind::String>();
}

void RTCSessionDescriptionInit::sdp(const jsbind::String& value) {
    emlite::Val::set("sdp", value);
}

RTCConfiguration::RTCConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCConfiguration RTCConfiguration::take_ownership(Handle h) noexcept {
        return RTCConfiguration(h);
    }
RTCConfiguration::RTCConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCConfiguration::RTCConfiguration() noexcept: emlite::Val(emlite::Val::object()) {}
RTCConfiguration RTCConfiguration::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::Any> RTCConfiguration::iceServers() const {
    return emlite::Val::get("iceServers").as<jsbind::TypedArray<jsbind::Any>>();
}

void RTCConfiguration::iceServers(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("iceServers", value);
}

RTCIceTransportPolicy RTCConfiguration::iceTransportPolicy() const {
    return emlite::Val::get("iceTransportPolicy").as<RTCIceTransportPolicy>();
}

void RTCConfiguration::iceTransportPolicy(const RTCIceTransportPolicy& value) {
    emlite::Val::set("iceTransportPolicy", value);
}

RTCBundlePolicy RTCConfiguration::bundlePolicy() const {
    return emlite::Val::get("bundlePolicy").as<RTCBundlePolicy>();
}

void RTCConfiguration::bundlePolicy(const RTCBundlePolicy& value) {
    emlite::Val::set("bundlePolicy", value);
}

RTCRtcpMuxPolicy RTCConfiguration::rtcpMuxPolicy() const {
    return emlite::Val::get("rtcpMuxPolicy").as<RTCRtcpMuxPolicy>();
}

void RTCConfiguration::rtcpMuxPolicy(const RTCRtcpMuxPolicy& value) {
    emlite::Val::set("rtcpMuxPolicy", value);
}

jsbind::TypedArray<RTCCertificate> RTCConfiguration::certificates() const {
    return emlite::Val::get("certificates").as<jsbind::TypedArray<RTCCertificate>>();
}

void RTCConfiguration::certificates(const jsbind::TypedArray<RTCCertificate>& value) {
    emlite::Val::set("certificates", value);
}

unsigned char RTCConfiguration::iceCandidatePoolSize() const {
    return emlite::Val::get("iceCandidatePoolSize").as<unsigned char>();
}

void RTCConfiguration::iceCandidatePoolSize(unsigned char value) {
    emlite::Val::set("iceCandidatePoolSize", value);
}

RTCIdentityProviderOptions::RTCIdentityProviderOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIdentityProviderOptions RTCIdentityProviderOptions::take_ownership(Handle h) noexcept {
        return RTCIdentityProviderOptions(h);
    }
RTCIdentityProviderOptions::RTCIdentityProviderOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCIdentityProviderOptions::RTCIdentityProviderOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RTCIdentityProviderOptions RTCIdentityProviderOptions::clone() const noexcept { return *this; }

jsbind::String RTCIdentityProviderOptions::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

void RTCIdentityProviderOptions::protocol(const jsbind::String& value) {
    emlite::Val::set("protocol", value);
}

jsbind::String RTCIdentityProviderOptions::usernameHint() const {
    return emlite::Val::get("usernameHint").as<jsbind::String>();
}

void RTCIdentityProviderOptions::usernameHint(const jsbind::String& value) {
    emlite::Val::set("usernameHint", value);
}

jsbind::String RTCIdentityProviderOptions::peerIdentity() const {
    return emlite::Val::get("peerIdentity").as<jsbind::String>();
}

void RTCIdentityProviderOptions::peerIdentity(const jsbind::String& value) {
    emlite::Val::set("peerIdentity", value);
}

RTCRtpTransceiverInit::RTCRtpTransceiverInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpTransceiverInit RTCRtpTransceiverInit::take_ownership(Handle h) noexcept {
        return RTCRtpTransceiverInit(h);
    }
RTCRtpTransceiverInit::RTCRtpTransceiverInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCRtpTransceiverInit::RTCRtpTransceiverInit() noexcept: emlite::Val(emlite::Val::object()) {}
RTCRtpTransceiverInit RTCRtpTransceiverInit::clone() const noexcept { return *this; }

RTCRtpTransceiverDirection RTCRtpTransceiverInit::direction() const {
    return emlite::Val::get("direction").as<RTCRtpTransceiverDirection>();
}

void RTCRtpTransceiverInit::direction(const RTCRtpTransceiverDirection& value) {
    emlite::Val::set("direction", value);
}

jsbind::TypedArray<MediaStream> RTCRtpTransceiverInit::streams() const {
    return emlite::Val::get("streams").as<jsbind::TypedArray<MediaStream>>();
}

void RTCRtpTransceiverInit::streams(const jsbind::TypedArray<MediaStream>& value) {
    emlite::Val::set("streams", value);
}

jsbind::TypedArray<jsbind::Any> RTCRtpTransceiverInit::sendEncodings() const {
    return emlite::Val::get("sendEncodings").as<jsbind::TypedArray<jsbind::Any>>();
}

void RTCRtpTransceiverInit::sendEncodings(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("sendEncodings", value);
}

RTCDataChannelInit::RTCDataChannelInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCDataChannelInit RTCDataChannelInit::take_ownership(Handle h) noexcept {
        return RTCDataChannelInit(h);
    }
RTCDataChannelInit::RTCDataChannelInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCDataChannelInit::RTCDataChannelInit() noexcept: emlite::Val(emlite::Val::object()) {}
RTCDataChannelInit RTCDataChannelInit::clone() const noexcept { return *this; }

bool RTCDataChannelInit::ordered() const {
    return emlite::Val::get("ordered").as<bool>();
}

void RTCDataChannelInit::ordered(bool value) {
    emlite::Val::set("ordered", value);
}

unsigned short RTCDataChannelInit::maxPacketLifeTime() const {
    return emlite::Val::get("maxPacketLifeTime").as<unsigned short>();
}

void RTCDataChannelInit::maxPacketLifeTime(unsigned short value) {
    emlite::Val::set("maxPacketLifeTime", value);
}

unsigned short RTCDataChannelInit::maxRetransmits() const {
    return emlite::Val::get("maxRetransmits").as<unsigned short>();
}

void RTCDataChannelInit::maxRetransmits(unsigned short value) {
    emlite::Val::set("maxRetransmits", value);
}

jsbind::String RTCDataChannelInit::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

void RTCDataChannelInit::protocol(const jsbind::String& value) {
    emlite::Val::set("protocol", value);
}

bool RTCDataChannelInit::negotiated() const {
    return emlite::Val::get("negotiated").as<bool>();
}

void RTCDataChannelInit::negotiated(bool value) {
    emlite::Val::set("negotiated", value);
}

unsigned short RTCDataChannelInit::id() const {
    return emlite::Val::get("id").as<unsigned short>();
}

void RTCDataChannelInit::id(unsigned short value) {
    emlite::Val::set("id", value);
}

RTCPeerConnection RTCPeerConnection::take_ownership(Handle h) noexcept {
        return RTCPeerConnection(h);
    }
RTCPeerConnection RTCPeerConnection::clone() const noexcept { return *this; }
emlite::Val RTCPeerConnection::instance() noexcept { return emlite::Val::global("RTCPeerConnection"); }
RTCPeerConnection::RTCPeerConnection(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
RTCPeerConnection::RTCPeerConnection(const emlite::Val &val) noexcept: EventTarget(val) {}


RTCPeerConnection::RTCPeerConnection() : EventTarget(emlite::Val::global("RTCPeerConnection").new_()) {}

RTCPeerConnection::RTCPeerConnection(const RTCConfiguration& configuration) : EventTarget(emlite::Val::global("RTCPeerConnection").new_(configuration)) {}

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::createOffer(const jsbind::Function& successCallback, const jsbind::Function& failureCallback) {
    return EventTarget::call("createOffer", successCallback, failureCallback).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::createOffer(const jsbind::Function& successCallback, const jsbind::Function& failureCallback, const RTCOfferOptions& options) {
    return EventTarget::call("createOffer", successCallback, failureCallback, options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::createAnswer(const jsbind::Function& successCallback, const jsbind::Function& failureCallback) {
    return EventTarget::call("createAnswer", successCallback, failureCallback).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::setLocalDescription(const RTCLocalSessionDescriptionInit& description, const jsbind::Any& successCallback, const jsbind::Function& failureCallback) {
    return EventTarget::call("setLocalDescription", description, successCallback, failureCallback).as<jsbind::Promise<jsbind::Undefined>>();
}

RTCSessionDescription RTCPeerConnection::localDescription() const {
    return EventTarget::get("localDescription").as<RTCSessionDescription>();
}

RTCSessionDescription RTCPeerConnection::currentLocalDescription() const {
    return EventTarget::get("currentLocalDescription").as<RTCSessionDescription>();
}

RTCSessionDescription RTCPeerConnection::pendingLocalDescription() const {
    return EventTarget::get("pendingLocalDescription").as<RTCSessionDescription>();
}

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::setRemoteDescription(const RTCSessionDescriptionInit& description, const jsbind::Any& successCallback, const jsbind::Function& failureCallback) {
    return EventTarget::call("setRemoteDescription", description, successCallback, failureCallback).as<jsbind::Promise<jsbind::Undefined>>();
}

RTCSessionDescription RTCPeerConnection::remoteDescription() const {
    return EventTarget::get("remoteDescription").as<RTCSessionDescription>();
}

RTCSessionDescription RTCPeerConnection::currentRemoteDescription() const {
    return EventTarget::get("currentRemoteDescription").as<RTCSessionDescription>();
}

RTCSessionDescription RTCPeerConnection::pendingRemoteDescription() const {
    return EventTarget::get("pendingRemoteDescription").as<RTCSessionDescription>();
}

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::addIceCandidate(const RTCIceCandidateInit& candidate, const jsbind::Any& successCallback, const jsbind::Function& failureCallback) {
    return EventTarget::call("addIceCandidate", candidate, successCallback, failureCallback).as<jsbind::Promise<jsbind::Undefined>>();
}

RTCSignalingState RTCPeerConnection::signalingState() const {
    return EventTarget::get("signalingState").as<RTCSignalingState>();
}

RTCIceGatheringState RTCPeerConnection::iceGatheringState() const {
    return EventTarget::get("iceGatheringState").as<RTCIceGatheringState>();
}

RTCIceConnectionState RTCPeerConnection::iceConnectionState() const {
    return EventTarget::get("iceConnectionState").as<RTCIceConnectionState>();
}

RTCPeerConnectionState RTCPeerConnection::connectionState() const {
    return EventTarget::get("connectionState").as<RTCPeerConnectionState>();
}

bool RTCPeerConnection::canTrickleIceCandidates() const {
    return EventTarget::get("canTrickleIceCandidates").as<bool>();
}

jsbind::Undefined RTCPeerConnection::restartIce() {
    return EventTarget::call("restartIce").as<jsbind::Undefined>();
}

RTCConfiguration RTCPeerConnection::getConfiguration() {
    return EventTarget::call("getConfiguration").as<RTCConfiguration>();
}

jsbind::Undefined RTCPeerConnection::setConfiguration() {
    return EventTarget::call("setConfiguration").as<jsbind::Undefined>();
}

jsbind::Undefined RTCPeerConnection::setConfiguration(const RTCConfiguration& configuration) {
    return EventTarget::call("setConfiguration", configuration).as<jsbind::Undefined>();
}

jsbind::Undefined RTCPeerConnection::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

jsbind::Any RTCPeerConnection::onnegotiationneeded() const {
    return EventTarget::get("onnegotiationneeded").as<jsbind::Any>();
}

void RTCPeerConnection::onnegotiationneeded(const jsbind::Any& value) {
    EventTarget::set("onnegotiationneeded", value);
}

jsbind::Any RTCPeerConnection::onicecandidate() const {
    return EventTarget::get("onicecandidate").as<jsbind::Any>();
}

void RTCPeerConnection::onicecandidate(const jsbind::Any& value) {
    EventTarget::set("onicecandidate", value);
}

jsbind::Any RTCPeerConnection::onicecandidateerror() const {
    return EventTarget::get("onicecandidateerror").as<jsbind::Any>();
}

void RTCPeerConnection::onicecandidateerror(const jsbind::Any& value) {
    EventTarget::set("onicecandidateerror", value);
}

jsbind::Any RTCPeerConnection::onsignalingstatechange() const {
    return EventTarget::get("onsignalingstatechange").as<jsbind::Any>();
}

void RTCPeerConnection::onsignalingstatechange(const jsbind::Any& value) {
    EventTarget::set("onsignalingstatechange", value);
}

jsbind::Any RTCPeerConnection::oniceconnectionstatechange() const {
    return EventTarget::get("oniceconnectionstatechange").as<jsbind::Any>();
}

void RTCPeerConnection::oniceconnectionstatechange(const jsbind::Any& value) {
    EventTarget::set("oniceconnectionstatechange", value);
}

jsbind::Any RTCPeerConnection::onicegatheringstatechange() const {
    return EventTarget::get("onicegatheringstatechange").as<jsbind::Any>();
}

void RTCPeerConnection::onicegatheringstatechange(const jsbind::Any& value) {
    EventTarget::set("onicegatheringstatechange", value);
}

jsbind::Any RTCPeerConnection::onconnectionstatechange() const {
    return EventTarget::get("onconnectionstatechange").as<jsbind::Any>();
}

void RTCPeerConnection::onconnectionstatechange(const jsbind::Any& value) {
    EventTarget::set("onconnectionstatechange", value);
}

jsbind::Undefined RTCPeerConnection::setIdentityProvider(const jsbind::String& provider) {
    return EventTarget::call("setIdentityProvider", provider).as<jsbind::Undefined>();
}

jsbind::Undefined RTCPeerConnection::setIdentityProvider(const jsbind::String& provider, const RTCIdentityProviderOptions& options) {
    return EventTarget::call("setIdentityProvider", provider, options).as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::String> RTCPeerConnection::getIdentityAssertion() {
    return EventTarget::call("getIdentityAssertion").as<jsbind::Promise<jsbind::String>>();
}

jsbind::Promise<RTCIdentityAssertion> RTCPeerConnection::peerIdentity() const {
    return EventTarget::get("peerIdentity").as<jsbind::Promise<RTCIdentityAssertion>>();
}

jsbind::String RTCPeerConnection::idpLoginUrl() const {
    return EventTarget::get("idpLoginUrl").as<jsbind::String>();
}

jsbind::String RTCPeerConnection::idpErrorInfo() const {
    return EventTarget::get("idpErrorInfo").as<jsbind::String>();
}

jsbind::Promise<RTCCertificate> RTCPeerConnection::generateCertificate(const jsbind::Any& keygenAlgorithm) {
    return emlite::Val::global("rtcpeerconnection").call("generateCertificate", keygenAlgorithm).as<jsbind::Promise<RTCCertificate>>();
}

jsbind::TypedArray<RTCRtpSender> RTCPeerConnection::getSenders() {
    return EventTarget::call("getSenders").as<jsbind::TypedArray<RTCRtpSender>>();
}

jsbind::TypedArray<RTCRtpReceiver> RTCPeerConnection::getReceivers() {
    return EventTarget::call("getReceivers").as<jsbind::TypedArray<RTCRtpReceiver>>();
}

jsbind::TypedArray<RTCRtpTransceiver> RTCPeerConnection::getTransceivers() {
    return EventTarget::call("getTransceivers").as<jsbind::TypedArray<RTCRtpTransceiver>>();
}

RTCRtpSender RTCPeerConnection::addTrack(const MediaStreamTrack& track, const MediaStream& streams) {
    return EventTarget::call("addTrack", track, streams).as<RTCRtpSender>();
}

jsbind::Undefined RTCPeerConnection::removeTrack(const RTCRtpSender& sender) {
    return EventTarget::call("removeTrack", sender).as<jsbind::Undefined>();
}

RTCRtpTransceiver RTCPeerConnection::addTransceiver(const jsbind::Any& trackOrKind) {
    return EventTarget::call("addTransceiver", trackOrKind).as<RTCRtpTransceiver>();
}

RTCRtpTransceiver RTCPeerConnection::addTransceiver(const jsbind::Any& trackOrKind, const RTCRtpTransceiverInit& init) {
    return EventTarget::call("addTransceiver", trackOrKind, init).as<RTCRtpTransceiver>();
}

jsbind::Any RTCPeerConnection::ontrack() const {
    return EventTarget::get("ontrack").as<jsbind::Any>();
}

void RTCPeerConnection::ontrack(const jsbind::Any& value) {
    EventTarget::set("ontrack", value);
}

RTCSctpTransport RTCPeerConnection::sctp() const {
    return EventTarget::get("sctp").as<RTCSctpTransport>();
}

RTCDataChannel RTCPeerConnection::createDataChannel(const jsbind::String& label) {
    return EventTarget::call("createDataChannel", label).as<RTCDataChannel>();
}

RTCDataChannel RTCPeerConnection::createDataChannel(const jsbind::String& label, const RTCDataChannelInit& dataChannelDict) {
    return EventTarget::call("createDataChannel", label, dataChannelDict).as<RTCDataChannel>();
}

jsbind::Any RTCPeerConnection::ondatachannel() const {
    return EventTarget::get("ondatachannel").as<jsbind::Any>();
}

void RTCPeerConnection::ondatachannel(const jsbind::Any& value) {
    EventTarget::set("ondatachannel", value);
}

jsbind::Promise<RTCStatsReport> RTCPeerConnection::getStats() {
    return EventTarget::call("getStats").as<jsbind::Promise<RTCStatsReport>>();
}

jsbind::Promise<RTCStatsReport> RTCPeerConnection::getStats(const MediaStreamTrack& selector) {
    return EventTarget::call("getStats", selector).as<jsbind::Promise<RTCStatsReport>>();
}

