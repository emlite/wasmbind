#include "webbind/WebTransportConnectionStats.hpp"
#include "webbind/WebTransportDatagramStats.hpp"

using emlite::Val;
namespace webbind {

WebTransportConnectionStats::WebTransportConnectionStats(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransportConnectionStats WebTransportConnectionStats::take_ownership(Handle h) noexcept {
        return WebTransportConnectionStats(h);
    }
WebTransportConnectionStats::WebTransportConnectionStats(const emlite::Val &val) noexcept: emlite::Val(val) {}
WebTransportConnectionStats::WebTransportConnectionStats() noexcept: emlite::Val(emlite::Val::object()) {}
WebTransportConnectionStats WebTransportConnectionStats::clone() const noexcept { return *this; }

long long WebTransportConnectionStats::bytesSent() const {
    return emlite::Val::get("bytesSent").as<long long>();
}

void WebTransportConnectionStats::bytesSent(long long value) {
    emlite::Val::set("bytesSent", value);
}

long long WebTransportConnectionStats::packetsSent() const {
    return emlite::Val::get("packetsSent").as<long long>();
}

void WebTransportConnectionStats::packetsSent(long long value) {
    emlite::Val::set("packetsSent", value);
}

long long WebTransportConnectionStats::bytesLost() const {
    return emlite::Val::get("bytesLost").as<long long>();
}

void WebTransportConnectionStats::bytesLost(long long value) {
    emlite::Val::set("bytesLost", value);
}

long long WebTransportConnectionStats::packetsLost() const {
    return emlite::Val::get("packetsLost").as<long long>();
}

void WebTransportConnectionStats::packetsLost(long long value) {
    emlite::Val::set("packetsLost", value);
}

long long WebTransportConnectionStats::bytesReceived() const {
    return emlite::Val::get("bytesReceived").as<long long>();
}

void WebTransportConnectionStats::bytesReceived(long long value) {
    emlite::Val::set("bytesReceived", value);
}

long long WebTransportConnectionStats::packetsReceived() const {
    return emlite::Val::get("packetsReceived").as<long long>();
}

void WebTransportConnectionStats::packetsReceived(long long value) {
    emlite::Val::set("packetsReceived", value);
}

jsbind::Any WebTransportConnectionStats::smoothedRtt() const {
    return emlite::Val::get("smoothedRtt").as<jsbind::Any>();
}

void WebTransportConnectionStats::smoothedRtt(const jsbind::Any& value) {
    emlite::Val::set("smoothedRtt", value);
}

jsbind::Any WebTransportConnectionStats::rttVariation() const {
    return emlite::Val::get("rttVariation").as<jsbind::Any>();
}

void WebTransportConnectionStats::rttVariation(const jsbind::Any& value) {
    emlite::Val::set("rttVariation", value);
}

jsbind::Any WebTransportConnectionStats::minRtt() const {
    return emlite::Val::get("minRtt").as<jsbind::Any>();
}

void WebTransportConnectionStats::minRtt(const jsbind::Any& value) {
    emlite::Val::set("minRtt", value);
}

WebTransportDatagramStats WebTransportConnectionStats::datagrams() const {
    return emlite::Val::get("datagrams").as<WebTransportDatagramStats>();
}

void WebTransportConnectionStats::datagrams(const WebTransportDatagramStats& value) {
    emlite::Val::set("datagrams", value);
}

long long WebTransportConnectionStats::estimatedSendRate() const {
    return emlite::Val::get("estimatedSendRate").as<long long>();
}

void WebTransportConnectionStats::estimatedSendRate(long long value) {
    emlite::Val::set("estimatedSendRate", value);
}

bool WebTransportConnectionStats::atSendCapacity() const {
    return emlite::Val::get("atSendCapacity").as<bool>();
}

void WebTransportConnectionStats::atSendCapacity(bool value) {
    emlite::Val::set("atSendCapacity", value);
}


} // namespace webbind