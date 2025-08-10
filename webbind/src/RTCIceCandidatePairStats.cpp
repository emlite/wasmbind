#include "webbind/RTCIceCandidatePairStats.hpp"

using emlite::Val;
namespace webbind {

RTCIceCandidatePairStats::RTCIceCandidatePairStats(Handle h) noexcept : RTCStats(emlite::Val::take_ownership(h)) {}
RTCIceCandidatePairStats RTCIceCandidatePairStats::take_ownership(Handle h) noexcept {
        return RTCIceCandidatePairStats(h);
    }
RTCIceCandidatePairStats::RTCIceCandidatePairStats(const emlite::Val &val) noexcept: RTCStats(val) {}
RTCIceCandidatePairStats::RTCIceCandidatePairStats() noexcept: RTCStats(emlite::Val::object()) {}
RTCIceCandidatePairStats RTCIceCandidatePairStats::clone() const noexcept { return *this; }

jsbind::String RTCIceCandidatePairStats::transportId() const {
    return emlite::Val::get("transportId").as<jsbind::String>();
}

void RTCIceCandidatePairStats::transportId(const jsbind::String& value) {
    emlite::Val::set("transportId", value);
}

jsbind::String RTCIceCandidatePairStats::localCandidateId() const {
    return emlite::Val::get("localCandidateId").as<jsbind::String>();
}

void RTCIceCandidatePairStats::localCandidateId(const jsbind::String& value) {
    emlite::Val::set("localCandidateId", value);
}

jsbind::String RTCIceCandidatePairStats::remoteCandidateId() const {
    return emlite::Val::get("remoteCandidateId").as<jsbind::String>();
}

void RTCIceCandidatePairStats::remoteCandidateId(const jsbind::String& value) {
    emlite::Val::set("remoteCandidateId", value);
}

RTCStatsIceCandidatePairState RTCIceCandidatePairStats::state() const {
    return emlite::Val::get("state").as<RTCStatsIceCandidatePairState>();
}

void RTCIceCandidatePairStats::state(const RTCStatsIceCandidatePairState& value) {
    emlite::Val::set("state", value);
}

bool RTCIceCandidatePairStats::nominated() const {
    return emlite::Val::get("nominated").as<bool>();
}

void RTCIceCandidatePairStats::nominated(bool value) {
    emlite::Val::set("nominated", value);
}

long long RTCIceCandidatePairStats::packetsSent() const {
    return emlite::Val::get("packetsSent").as<long long>();
}

void RTCIceCandidatePairStats::packetsSent(long long value) {
    emlite::Val::set("packetsSent", value);
}

long long RTCIceCandidatePairStats::packetsReceived() const {
    return emlite::Val::get("packetsReceived").as<long long>();
}

void RTCIceCandidatePairStats::packetsReceived(long long value) {
    emlite::Val::set("packetsReceived", value);
}

long long RTCIceCandidatePairStats::bytesSent() const {
    return emlite::Val::get("bytesSent").as<long long>();
}

void RTCIceCandidatePairStats::bytesSent(long long value) {
    emlite::Val::set("bytesSent", value);
}

long long RTCIceCandidatePairStats::bytesReceived() const {
    return emlite::Val::get("bytesReceived").as<long long>();
}

void RTCIceCandidatePairStats::bytesReceived(long long value) {
    emlite::Val::set("bytesReceived", value);
}

jsbind::Any RTCIceCandidatePairStats::lastPacketSentTimestamp() const {
    return emlite::Val::get("lastPacketSentTimestamp").as<jsbind::Any>();
}

void RTCIceCandidatePairStats::lastPacketSentTimestamp(const jsbind::Any& value) {
    emlite::Val::set("lastPacketSentTimestamp", value);
}

jsbind::Any RTCIceCandidatePairStats::lastPacketReceivedTimestamp() const {
    return emlite::Val::get("lastPacketReceivedTimestamp").as<jsbind::Any>();
}

void RTCIceCandidatePairStats::lastPacketReceivedTimestamp(const jsbind::Any& value) {
    emlite::Val::set("lastPacketReceivedTimestamp", value);
}

double RTCIceCandidatePairStats::totalRoundTripTime() const {
    return emlite::Val::get("totalRoundTripTime").as<double>();
}

void RTCIceCandidatePairStats::totalRoundTripTime(double value) {
    emlite::Val::set("totalRoundTripTime", value);
}

double RTCIceCandidatePairStats::currentRoundTripTime() const {
    return emlite::Val::get("currentRoundTripTime").as<double>();
}

void RTCIceCandidatePairStats::currentRoundTripTime(double value) {
    emlite::Val::set("currentRoundTripTime", value);
}

double RTCIceCandidatePairStats::availableOutgoingBitrate() const {
    return emlite::Val::get("availableOutgoingBitrate").as<double>();
}

void RTCIceCandidatePairStats::availableOutgoingBitrate(double value) {
    emlite::Val::set("availableOutgoingBitrate", value);
}

double RTCIceCandidatePairStats::availableIncomingBitrate() const {
    return emlite::Val::get("availableIncomingBitrate").as<double>();
}

void RTCIceCandidatePairStats::availableIncomingBitrate(double value) {
    emlite::Val::set("availableIncomingBitrate", value);
}

long long RTCIceCandidatePairStats::requestsReceived() const {
    return emlite::Val::get("requestsReceived").as<long long>();
}

void RTCIceCandidatePairStats::requestsReceived(long long value) {
    emlite::Val::set("requestsReceived", value);
}

long long RTCIceCandidatePairStats::requestsSent() const {
    return emlite::Val::get("requestsSent").as<long long>();
}

void RTCIceCandidatePairStats::requestsSent(long long value) {
    emlite::Val::set("requestsSent", value);
}

long long RTCIceCandidatePairStats::responsesReceived() const {
    return emlite::Val::get("responsesReceived").as<long long>();
}

void RTCIceCandidatePairStats::responsesReceived(long long value) {
    emlite::Val::set("responsesReceived", value);
}

long long RTCIceCandidatePairStats::responsesSent() const {
    return emlite::Val::get("responsesSent").as<long long>();
}

void RTCIceCandidatePairStats::responsesSent(long long value) {
    emlite::Val::set("responsesSent", value);
}

long long RTCIceCandidatePairStats::consentRequestsSent() const {
    return emlite::Val::get("consentRequestsSent").as<long long>();
}

void RTCIceCandidatePairStats::consentRequestsSent(long long value) {
    emlite::Val::set("consentRequestsSent", value);
}

unsigned long RTCIceCandidatePairStats::packetsDiscardedOnSend() const {
    return emlite::Val::get("packetsDiscardedOnSend").as<unsigned long>();
}

void RTCIceCandidatePairStats::packetsDiscardedOnSend(unsigned long value) {
    emlite::Val::set("packetsDiscardedOnSend", value);
}

long long RTCIceCandidatePairStats::bytesDiscardedOnSend() const {
    return emlite::Val::get("bytesDiscardedOnSend").as<long long>();
}

void RTCIceCandidatePairStats::bytesDiscardedOnSend(long long value) {
    emlite::Val::set("bytesDiscardedOnSend", value);
}


} // namespace webbind