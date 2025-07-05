#include <webbind/RTCIceTransport.hpp>
#include <webbind/RTCIceCandidate.hpp>
#include <webbind/RTCIceCandidatePair.hpp>


RTCIceParameters::RTCIceParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIceParameters RTCIceParameters::take_ownership(Handle h) noexcept {
        return RTCIceParameters(h);
    }
RTCIceParameters::RTCIceParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCIceParameters::RTCIceParameters() noexcept: emlite::Val(emlite::Val::object()) {}
RTCIceParameters RTCIceParameters::clone() const noexcept { return *this; }

jsbind::DOMString RTCIceParameters::usernameFragment() const {
    return emlite::Val::get("usernameFragment").as<jsbind::DOMString>();
}

void RTCIceParameters::usernameFragment(const jsbind::DOMString& value) {
    emlite::Val::set("usernameFragment", value);
}

jsbind::DOMString RTCIceParameters::password() const {
    return emlite::Val::get("password").as<jsbind::DOMString>();
}

void RTCIceParameters::password(const jsbind::DOMString& value) {
    emlite::Val::set("password", value);
}

RTCIceGatherOptions::RTCIceGatherOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIceGatherOptions RTCIceGatherOptions::take_ownership(Handle h) noexcept {
        return RTCIceGatherOptions(h);
    }
RTCIceGatherOptions::RTCIceGatherOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCIceGatherOptions::RTCIceGatherOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RTCIceGatherOptions RTCIceGatherOptions::clone() const noexcept { return *this; }

RTCIceTransportPolicy RTCIceGatherOptions::gatherPolicy() const {
    return emlite::Val::get("gatherPolicy").as<RTCIceTransportPolicy>();
}

void RTCIceGatherOptions::gatherPolicy(const RTCIceTransportPolicy& value) {
    emlite::Val::set("gatherPolicy", value);
}

jsbind::Sequence<jsbind::Any> RTCIceGatherOptions::iceServers() const {
    return emlite::Val::get("iceServers").as<jsbind::Sequence<jsbind::Any>>();
}

void RTCIceGatherOptions::iceServers(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("iceServers", value);
}

RTCIceCandidateInit::RTCIceCandidateInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIceCandidateInit RTCIceCandidateInit::take_ownership(Handle h) noexcept {
        return RTCIceCandidateInit(h);
    }
RTCIceCandidateInit::RTCIceCandidateInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCIceCandidateInit::RTCIceCandidateInit() noexcept: emlite::Val(emlite::Val::object()) {}
RTCIceCandidateInit RTCIceCandidateInit::clone() const noexcept { return *this; }

jsbind::DOMString RTCIceCandidateInit::candidate() const {
    return emlite::Val::get("candidate").as<jsbind::DOMString>();
}

void RTCIceCandidateInit::candidate(const jsbind::DOMString& value) {
    emlite::Val::set("candidate", value);
}

jsbind::DOMString RTCIceCandidateInit::sdpMid() const {
    return emlite::Val::get("sdpMid").as<jsbind::DOMString>();
}

void RTCIceCandidateInit::sdpMid(const jsbind::DOMString& value) {
    emlite::Val::set("sdpMid", value);
}

unsigned short RTCIceCandidateInit::sdpMLineIndex() const {
    return emlite::Val::get("sdpMLineIndex").as<unsigned short>();
}

void RTCIceCandidateInit::sdpMLineIndex(unsigned short value) {
    emlite::Val::set("sdpMLineIndex", value);
}

jsbind::DOMString RTCIceCandidateInit::usernameFragment() const {
    return emlite::Val::get("usernameFragment").as<jsbind::DOMString>();
}

void RTCIceCandidateInit::usernameFragment(const jsbind::DOMString& value) {
    emlite::Val::set("usernameFragment", value);
}

RTCIceTransport RTCIceTransport::take_ownership(Handle h) noexcept {
        return RTCIceTransport(h);
    }
RTCIceTransport RTCIceTransport::clone() const noexcept { return *this; }
RTCIceTransport::RTCIceTransport(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
RTCIceTransport::RTCIceTransport(const emlite::Val &val) noexcept: EventTarget(val) {}


RTCIceRole RTCIceTransport::role() const {
    return EventTarget::get("role").as<RTCIceRole>();
}

RTCIceComponent RTCIceTransport::component() const {
    return EventTarget::get("component").as<RTCIceComponent>();
}

RTCIceTransportState RTCIceTransport::state() const {
    return EventTarget::get("state").as<RTCIceTransportState>();
}

RTCIceGathererState RTCIceTransport::gatheringState() const {
    return EventTarget::get("gatheringState").as<RTCIceGathererState>();
}

jsbind::Sequence<RTCIceCandidate> RTCIceTransport::getLocalCandidates() {
    return EventTarget::call("getLocalCandidates").as<jsbind::Sequence<RTCIceCandidate>>();
}

jsbind::Sequence<RTCIceCandidate> RTCIceTransport::getRemoteCandidates() {
    return EventTarget::call("getRemoteCandidates").as<jsbind::Sequence<RTCIceCandidate>>();
}

RTCIceCandidatePair RTCIceTransport::getSelectedCandidatePair() {
    return EventTarget::call("getSelectedCandidatePair").as<RTCIceCandidatePair>();
}

RTCIceParameters RTCIceTransport::getLocalParameters() {
    return EventTarget::call("getLocalParameters").as<RTCIceParameters>();
}

RTCIceParameters RTCIceTransport::getRemoteParameters() {
    return EventTarget::call("getRemoteParameters").as<RTCIceParameters>();
}

jsbind::Any RTCIceTransport::onstatechange() const {
    return EventTarget::get("onstatechange").as<jsbind::Any>();
}

void RTCIceTransport::onstatechange(const jsbind::Any& value) {
    EventTarget::set("onstatechange", value);
}

jsbind::Any RTCIceTransport::ongatheringstatechange() const {
    return EventTarget::get("ongatheringstatechange").as<jsbind::Any>();
}

void RTCIceTransport::ongatheringstatechange(const jsbind::Any& value) {
    EventTarget::set("ongatheringstatechange", value);
}

jsbind::Any RTCIceTransport::onselectedcandidatepairchange() const {
    return EventTarget::get("onselectedcandidatepairchange").as<jsbind::Any>();
}

void RTCIceTransport::onselectedcandidatepairchange(const jsbind::Any& value) {
    EventTarget::set("onselectedcandidatepairchange", value);
}

RTCIceTransport::RTCIceTransport() : EventTarget(emlite::Val::global("RTCIceTransport").new_()) {}

jsbind::Undefined RTCIceTransport::gather() {
    return EventTarget::call("gather").as<jsbind::Undefined>();
}

jsbind::Undefined RTCIceTransport::gather(const RTCIceGatherOptions& options) {
    return EventTarget::call("gather", options).as<jsbind::Undefined>();
}

jsbind::Undefined RTCIceTransport::start() {
    return EventTarget::call("start").as<jsbind::Undefined>();
}

jsbind::Undefined RTCIceTransport::start(const RTCIceParameters& remoteParameters) {
    return EventTarget::call("start", remoteParameters).as<jsbind::Undefined>();
}

jsbind::Undefined RTCIceTransport::start(const RTCIceParameters& remoteParameters, const RTCIceRole& role) {
    return EventTarget::call("start", remoteParameters, role).as<jsbind::Undefined>();
}

jsbind::Undefined RTCIceTransport::stop() {
    return EventTarget::call("stop").as<jsbind::Undefined>();
}

jsbind::Undefined RTCIceTransport::addRemoteCandidate() {
    return EventTarget::call("addRemoteCandidate").as<jsbind::Undefined>();
}

jsbind::Undefined RTCIceTransport::addRemoteCandidate(const RTCIceCandidateInit& remoteCandidate) {
    return EventTarget::call("addRemoteCandidate", remoteCandidate).as<jsbind::Undefined>();
}

jsbind::Any RTCIceTransport::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void RTCIceTransport::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

jsbind::Any RTCIceTransport::onicecandidate() const {
    return EventTarget::get("onicecandidate").as<jsbind::Any>();
}

void RTCIceTransport::onicecandidate(const jsbind::Any& value) {
    EventTarget::set("onicecandidate", value);
}

