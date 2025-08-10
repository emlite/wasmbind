#include "webbind/RTCRemoteOutboundRtpStreamStats.hpp"

using emlite::Val;
namespace webbind {

RTCRemoteOutboundRtpStreamStats::RTCRemoteOutboundRtpStreamStats(Handle h) noexcept : RTCSentRtpStreamStats(emlite::Val::take_ownership(h)) {}
RTCRemoteOutboundRtpStreamStats RTCRemoteOutboundRtpStreamStats::take_ownership(Handle h) noexcept {
        return RTCRemoteOutboundRtpStreamStats(h);
    }
RTCRemoteOutboundRtpStreamStats::RTCRemoteOutboundRtpStreamStats(const emlite::Val &val) noexcept: RTCSentRtpStreamStats(val) {}
RTCRemoteOutboundRtpStreamStats::RTCRemoteOutboundRtpStreamStats() noexcept: RTCSentRtpStreamStats(emlite::Val::object()) {}
RTCRemoteOutboundRtpStreamStats RTCRemoteOutboundRtpStreamStats::clone() const noexcept { return *this; }

jsbind::String RTCRemoteOutboundRtpStreamStats::localId() const {
    return emlite::Val::get("localId").as<jsbind::String>();
}

void RTCRemoteOutboundRtpStreamStats::localId(const jsbind::String& value) {
    emlite::Val::set("localId", value);
}

jsbind::Any RTCRemoteOutboundRtpStreamStats::remoteTimestamp() const {
    return emlite::Val::get("remoteTimestamp").as<jsbind::Any>();
}

void RTCRemoteOutboundRtpStreamStats::remoteTimestamp(const jsbind::Any& value) {
    emlite::Val::set("remoteTimestamp", value);
}

long long RTCRemoteOutboundRtpStreamStats::reportsSent() const {
    return emlite::Val::get("reportsSent").as<long long>();
}

void RTCRemoteOutboundRtpStreamStats::reportsSent(long long value) {
    emlite::Val::set("reportsSent", value);
}

double RTCRemoteOutboundRtpStreamStats::roundTripTime() const {
    return emlite::Val::get("roundTripTime").as<double>();
}

void RTCRemoteOutboundRtpStreamStats::roundTripTime(double value) {
    emlite::Val::set("roundTripTime", value);
}

double RTCRemoteOutboundRtpStreamStats::totalRoundTripTime() const {
    return emlite::Val::get("totalRoundTripTime").as<double>();
}

void RTCRemoteOutboundRtpStreamStats::totalRoundTripTime(double value) {
    emlite::Val::set("totalRoundTripTime", value);
}

long long RTCRemoteOutboundRtpStreamStats::roundTripTimeMeasurements() const {
    return emlite::Val::get("roundTripTimeMeasurements").as<long long>();
}

void RTCRemoteOutboundRtpStreamStats::roundTripTimeMeasurements(long long value) {
    emlite::Val::set("roundTripTimeMeasurements", value);
}


} // namespace webbind