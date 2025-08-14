#include <webbind/RTCSentRtpStreamStats.hpp>

namespace webbind {

RTCSentRtpStreamStats::RTCSentRtpStreamStats(Handle h) noexcept : RTCRtpStreamStats(emlite::Val::take_ownership(h)) {}
RTCSentRtpStreamStats RTCSentRtpStreamStats::take_ownership(Handle h) noexcept {
    return RTCSentRtpStreamStats(h);
}

RTCSentRtpStreamStats::RTCSentRtpStreamStats(const emlite::Val &val) noexcept: RTCRtpStreamStats(val) {}

RTCSentRtpStreamStats::RTCSentRtpStreamStats() noexcept: RTCRtpStreamStats(emlite::Val::object()) {}

RTCSentRtpStreamStats RTCSentRtpStreamStats::clone() const noexcept { return *this; }

long long RTCSentRtpStreamStats::packetsSent() const {
    return emlite::Val::get("packetsSent").as<long long>();
}

void RTCSentRtpStreamStats::packetsSent(long long value) {
    emlite::Val::set("packetsSent", value);
}

long long RTCSentRtpStreamStats::bytesSent() const {
    return emlite::Val::get("bytesSent").as<long long>();
}

void RTCSentRtpStreamStats::bytesSent(long long value) {
    emlite::Val::set("bytesSent", value);
}


} // namespace webbind