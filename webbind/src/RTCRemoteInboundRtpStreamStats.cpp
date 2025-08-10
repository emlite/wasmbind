#include <webbind/RTCRemoteInboundRtpStreamStats.hpp>

namespace webbind {

RTCRemoteInboundRtpStreamStats::RTCRemoteInboundRtpStreamStats(Handle h) noexcept : RTCReceivedRtpStreamStats(emlite::Val::take_ownership(h)) {}
RTCRemoteInboundRtpStreamStats RTCRemoteInboundRtpStreamStats::take_ownership(Handle h) noexcept {
    return RTCRemoteInboundRtpStreamStats(h);
}

RTCRemoteInboundRtpStreamStats::RTCRemoteInboundRtpStreamStats(const emlite::Val &val) noexcept: RTCReceivedRtpStreamStats(val) {}

RTCRemoteInboundRtpStreamStats::RTCRemoteInboundRtpStreamStats() noexcept: RTCReceivedRtpStreamStats(emlite::Val::object()) {}

RTCRemoteInboundRtpStreamStats RTCRemoteInboundRtpStreamStats::clone() const noexcept { return *this; }

jsbind::String RTCRemoteInboundRtpStreamStats::localId() const {
    return emlite::Val::get("localId").as<jsbind::String>();
}

void RTCRemoteInboundRtpStreamStats::localId(const jsbind::String& value) {
    emlite::Val::set("localId", value);
}

double RTCRemoteInboundRtpStreamStats::roundTripTime() const {
    return emlite::Val::get("roundTripTime").as<double>();
}

void RTCRemoteInboundRtpStreamStats::roundTripTime(double value) {
    emlite::Val::set("roundTripTime", value);
}

double RTCRemoteInboundRtpStreamStats::totalRoundTripTime() const {
    return emlite::Val::get("totalRoundTripTime").as<double>();
}

void RTCRemoteInboundRtpStreamStats::totalRoundTripTime(double value) {
    emlite::Val::set("totalRoundTripTime", value);
}

double RTCRemoteInboundRtpStreamStats::fractionLost() const {
    return emlite::Val::get("fractionLost").as<double>();
}

void RTCRemoteInboundRtpStreamStats::fractionLost(double value) {
    emlite::Val::set("fractionLost", value);
}

long long RTCRemoteInboundRtpStreamStats::roundTripTimeMeasurements() const {
    return emlite::Val::get("roundTripTimeMeasurements").as<long long>();
}

void RTCRemoteInboundRtpStreamStats::roundTripTimeMeasurements(long long value) {
    emlite::Val::set("roundTripTimeMeasurements", value);
}

long long RTCRemoteInboundRtpStreamStats::packetsWithBleachedEct1Marking() const {
    return emlite::Val::get("packetsWithBleachedEct1Marking").as<long long>();
}

void RTCRemoteInboundRtpStreamStats::packetsWithBleachedEct1Marking(long long value) {
    emlite::Val::set("packetsWithBleachedEct1Marking", value);
}


} // namespace webbind