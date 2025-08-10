#include <webbind/RTCReceivedRtpStreamStats.hpp>

namespace webbind {

RTCReceivedRtpStreamStats::RTCReceivedRtpStreamStats(Handle h) noexcept : RTCRtpStreamStats(emlite::Val::take_ownership(h)) {}
RTCReceivedRtpStreamStats RTCReceivedRtpStreamStats::take_ownership(Handle h) noexcept {
    return RTCReceivedRtpStreamStats(h);
}

RTCReceivedRtpStreamStats::RTCReceivedRtpStreamStats(const emlite::Val &val) noexcept: RTCRtpStreamStats(val) {}

RTCReceivedRtpStreamStats::RTCReceivedRtpStreamStats() noexcept: RTCRtpStreamStats(emlite::Val::object()) {}

RTCReceivedRtpStreamStats RTCReceivedRtpStreamStats::clone() const noexcept { return *this; }

long long RTCReceivedRtpStreamStats::packetsReceived() const {
    return emlite::Val::get("packetsReceived").as<long long>();
}

void RTCReceivedRtpStreamStats::packetsReceived(long long value) {
    emlite::Val::set("packetsReceived", value);
}

long long RTCReceivedRtpStreamStats::packetsReceivedWithEct1() const {
    return emlite::Val::get("packetsReceivedWithEct1").as<long long>();
}

void RTCReceivedRtpStreamStats::packetsReceivedWithEct1(long long value) {
    emlite::Val::set("packetsReceivedWithEct1", value);
}

long long RTCReceivedRtpStreamStats::packetsReceivedWithCe() const {
    return emlite::Val::get("packetsReceivedWithCe").as<long long>();
}

void RTCReceivedRtpStreamStats::packetsReceivedWithCe(long long value) {
    emlite::Val::set("packetsReceivedWithCe", value);
}

long long RTCReceivedRtpStreamStats::packetsReportedAsLost() const {
    return emlite::Val::get("packetsReportedAsLost").as<long long>();
}

void RTCReceivedRtpStreamStats::packetsReportedAsLost(long long value) {
    emlite::Val::set("packetsReportedAsLost", value);
}

long long RTCReceivedRtpStreamStats::packetsReportedAsLostButRecovered() const {
    return emlite::Val::get("packetsReportedAsLostButRecovered").as<long long>();
}

void RTCReceivedRtpStreamStats::packetsReportedAsLostButRecovered(long long value) {
    emlite::Val::set("packetsReportedAsLostButRecovered", value);
}

long long RTCReceivedRtpStreamStats::packetsLost() const {
    return emlite::Val::get("packetsLost").as<long long>();
}

void RTCReceivedRtpStreamStats::packetsLost(long long value) {
    emlite::Val::set("packetsLost", value);
}

double RTCReceivedRtpStreamStats::jitter() const {
    return emlite::Val::get("jitter").as<double>();
}

void RTCReceivedRtpStreamStats::jitter(double value) {
    emlite::Val::set("jitter", value);
}


} // namespace webbind