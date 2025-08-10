#include <webbind/RTCConfiguration.hpp>
#include <webbind/RTCIceServer.hpp>
#include <webbind/RTCCertificate.hpp>

namespace webbind {

RTCConfiguration::RTCConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCConfiguration RTCConfiguration::take_ownership(Handle h) noexcept {
    return RTCConfiguration(h);
}

RTCConfiguration::RTCConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCConfiguration::RTCConfiguration() noexcept: emlite::Val(emlite::Val::object()) {}

RTCConfiguration RTCConfiguration::clone() const noexcept { return *this; }

jsbind::TypedArray<RTCIceServer> RTCConfiguration::iceServers() const {
    return emlite::Val::get("iceServers").as<jsbind::TypedArray<RTCIceServer>>();
}

void RTCConfiguration::iceServers(const jsbind::TypedArray<RTCIceServer>& value) {
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


} // namespace webbind