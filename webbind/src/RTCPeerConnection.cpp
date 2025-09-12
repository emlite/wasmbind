#include <webbind/RTCPeerConnection.hpp>
#include <webbind/RTCConfiguration.hpp>
#include <webbind/RTCSessionDescriptionInit.hpp>
#include <webbind/RTCOfferOptions.hpp>
#include <webbind/RTCAnswerOptions.hpp>
#include <webbind/RTCLocalSessionDescriptionInit.hpp>
#include <webbind/RTCSessionDescription.hpp>
#include <webbind/RTCIceCandidateInit.hpp>
#include <webbind/RTCIdentityProviderOptions.hpp>
#include <webbind/RTCIdentityAssertion.hpp>
#include <webbind/RTCCertificate.hpp>
#include <webbind/RTCRtpSender.hpp>
#include <webbind/RTCRtpReceiver.hpp>
#include <webbind/RTCRtpTransceiver.hpp>
#include <webbind/MediaStreamTrack.hpp>
#include <webbind/MediaStream.hpp>
#include <webbind/RTCRtpTransceiverInit.hpp>
#include <webbind/RTCSctpTransport.hpp>
#include <webbind/RTCDataChannel.hpp>
#include <webbind/RTCDataChannelInit.hpp>
#include <webbind/RTCStatsReport.hpp>

namespace webbind {

RTCPeerConnection RTCPeerConnection::take_ownership(Handle h) noexcept {
    return RTCPeerConnection(h);
}

RTCPeerConnection RTCPeerConnection::clone() const noexcept { return *this; }

emlite::Val RTCPeerConnection::instance() noexcept { return emlite::Val::global("RTCPeerConnection"); }

RTCPeerConnection::RTCPeerConnection(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

RTCPeerConnection::RTCPeerConnection(const emlite::Val &val) noexcept: EventTarget(val) {}

RTCPeerConnection::RTCPeerConnection() : EventTarget(emlite::Val::global("RTCPeerConnection").new_()) {}

RTCPeerConnection::RTCPeerConnection(const RTCConfiguration& configuration) : EventTarget(emlite::Val::global("RTCPeerConnection").new_(configuration)) {}

jsbind::Promise<RTCSessionDescriptionInit> RTCPeerConnection::createOffer() {
    return EventTarget::call("createOffer").as<jsbind::Promise<RTCSessionDescriptionInit>>();
}

jsbind::Promise<RTCSessionDescriptionInit> RTCPeerConnection::createOffer(const RTCOfferOptions& options) {
    return EventTarget::call("createOffer", options).as<jsbind::Promise<RTCSessionDescriptionInit>>();
}

jsbind::Promise<RTCSessionDescriptionInit> RTCPeerConnection::createAnswer() {
    return EventTarget::call("createAnswer").as<jsbind::Promise<RTCSessionDescriptionInit>>();
}

jsbind::Promise<RTCSessionDescriptionInit> RTCPeerConnection::createAnswer(const RTCAnswerOptions& options) {
    return EventTarget::call("createAnswer", options).as<jsbind::Promise<RTCSessionDescriptionInit>>();
}

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::setLocalDescription() {
    return EventTarget::call("setLocalDescription").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::setLocalDescription(const RTCLocalSessionDescriptionInit& description) {
    return EventTarget::call("setLocalDescription", description).as<jsbind::Promise<jsbind::Undefined>>();
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

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::setRemoteDescription(const RTCSessionDescriptionInit& description) {
    return EventTarget::call("setRemoteDescription", description).as<jsbind::Promise<jsbind::Undefined>>();
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

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::addIceCandidate() {
    return EventTarget::call("addIceCandidate").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::addIceCandidate(const RTCIceCandidateInit& candidate) {
    return EventTarget::call("addIceCandidate", candidate).as<jsbind::Promise<jsbind::Undefined>>();
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

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::createOffer(const jsbind::Function& successCallback, const jsbind::Function& failureCallback) {
    return EventTarget::call("createOffer", successCallback, failureCallback).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::createOffer(const jsbind::Function& successCallback, const jsbind::Function& failureCallback, const RTCOfferOptions& options) {
    return EventTarget::call("createOffer", successCallback, failureCallback, options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::setLocalDescription(const RTCLocalSessionDescriptionInit& description, const jsbind::Function& successCallback, const jsbind::Function& failureCallback) {
    return EventTarget::call("setLocalDescription", description, successCallback, failureCallback).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::createAnswer(const jsbind::Function& successCallback, const jsbind::Function& failureCallback) {
    return EventTarget::call("createAnswer", successCallback, failureCallback).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::setRemoteDescription(const RTCSessionDescriptionInit& description, const jsbind::Function& successCallback, const jsbind::Function& failureCallback) {
    return EventTarget::call("setRemoteDescription", description, successCallback, failureCallback).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> RTCPeerConnection::addIceCandidate(const RTCIceCandidateInit& candidate, const jsbind::Function& successCallback, const jsbind::Function& failureCallback) {
    return EventTarget::call("addIceCandidate", candidate, successCallback, failureCallback).as<jsbind::Promise<jsbind::Undefined>>();
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


} // namespace webbind