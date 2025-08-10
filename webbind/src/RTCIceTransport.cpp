#include <webbind/RTCIceTransport.hpp>
#include <webbind/RTCIceCandidate.hpp>
#include <webbind/RTCIceCandidatePair.hpp>
#include <webbind/RTCIceParameters.hpp>
#include <webbind/RTCIceGatherOptions.hpp>
#include <webbind/RTCIceCandidateInit.hpp>

namespace webbind {

RTCIceTransport RTCIceTransport::take_ownership(Handle h) noexcept {
    return RTCIceTransport(h);
}

RTCIceTransport RTCIceTransport::clone() const noexcept { return *this; }

emlite::Val RTCIceTransport::instance() noexcept { return emlite::Val::global("RTCIceTransport"); }

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

jsbind::TypedArray<RTCIceCandidate> RTCIceTransport::getLocalCandidates() {
    return EventTarget::call("getLocalCandidates").as<jsbind::TypedArray<RTCIceCandidate>>();
}

jsbind::TypedArray<RTCIceCandidate> RTCIceTransport::getRemoteCandidates() {
    return EventTarget::call("getRemoteCandidates").as<jsbind::TypedArray<RTCIceCandidate>>();
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


} // namespace webbind