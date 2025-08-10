#include <webbind/RTCIceCandidateStats.hpp>

namespace webbind {

RTCIceCandidateStats::RTCIceCandidateStats(Handle h) noexcept : RTCStats(emlite::Val::take_ownership(h)) {}
RTCIceCandidateStats RTCIceCandidateStats::take_ownership(Handle h) noexcept {
    return RTCIceCandidateStats(h);
}

RTCIceCandidateStats::RTCIceCandidateStats(const emlite::Val &val) noexcept: RTCStats(val) {}

RTCIceCandidateStats::RTCIceCandidateStats() noexcept: RTCStats(emlite::Val::object()) {}

RTCIceCandidateStats RTCIceCandidateStats::clone() const noexcept { return *this; }

jsbind::String RTCIceCandidateStats::transportId() const {
    return emlite::Val::get("transportId").as<jsbind::String>();
}

void RTCIceCandidateStats::transportId(const jsbind::String& value) {
    emlite::Val::set("transportId", value);
}

jsbind::String RTCIceCandidateStats::address() const {
    return emlite::Val::get("address").as<jsbind::String>();
}

void RTCIceCandidateStats::address(const jsbind::String& value) {
    emlite::Val::set("address", value);
}

long RTCIceCandidateStats::port() const {
    return emlite::Val::get("port").as<long>();
}

void RTCIceCandidateStats::port(long value) {
    emlite::Val::set("port", value);
}

jsbind::String RTCIceCandidateStats::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

void RTCIceCandidateStats::protocol(const jsbind::String& value) {
    emlite::Val::set("protocol", value);
}

RTCIceCandidateType RTCIceCandidateStats::candidateType() const {
    return emlite::Val::get("candidateType").as<RTCIceCandidateType>();
}

void RTCIceCandidateStats::candidateType(const RTCIceCandidateType& value) {
    emlite::Val::set("candidateType", value);
}

long RTCIceCandidateStats::priority() const {
    return emlite::Val::get("priority").as<long>();
}

void RTCIceCandidateStats::priority(long value) {
    emlite::Val::set("priority", value);
}

jsbind::String RTCIceCandidateStats::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void RTCIceCandidateStats::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}

RTCIceServerTransportProtocol RTCIceCandidateStats::relayProtocol() const {
    return emlite::Val::get("relayProtocol").as<RTCIceServerTransportProtocol>();
}

void RTCIceCandidateStats::relayProtocol(const RTCIceServerTransportProtocol& value) {
    emlite::Val::set("relayProtocol", value);
}

jsbind::String RTCIceCandidateStats::foundation() const {
    return emlite::Val::get("foundation").as<jsbind::String>();
}

void RTCIceCandidateStats::foundation(const jsbind::String& value) {
    emlite::Val::set("foundation", value);
}

jsbind::String RTCIceCandidateStats::relatedAddress() const {
    return emlite::Val::get("relatedAddress").as<jsbind::String>();
}

void RTCIceCandidateStats::relatedAddress(const jsbind::String& value) {
    emlite::Val::set("relatedAddress", value);
}

long RTCIceCandidateStats::relatedPort() const {
    return emlite::Val::get("relatedPort").as<long>();
}

void RTCIceCandidateStats::relatedPort(long value) {
    emlite::Val::set("relatedPort", value);
}

jsbind::String RTCIceCandidateStats::usernameFragment() const {
    return emlite::Val::get("usernameFragment").as<jsbind::String>();
}

void RTCIceCandidateStats::usernameFragment(const jsbind::String& value) {
    emlite::Val::set("usernameFragment", value);
}

RTCIceTcpCandidateType RTCIceCandidateStats::tcpType() const {
    return emlite::Val::get("tcpType").as<RTCIceTcpCandidateType>();
}

void RTCIceCandidateStats::tcpType(const RTCIceTcpCandidateType& value) {
    emlite::Val::set("tcpType", value);
}


} // namespace webbind