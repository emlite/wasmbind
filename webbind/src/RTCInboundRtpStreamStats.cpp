#include <webbind/RTCInboundRtpStreamStats.hpp>

namespace webbind {

RTCInboundRtpStreamStats::RTCInboundRtpStreamStats(Handle h) noexcept : RTCReceivedRtpStreamStats(emlite::Val::take_ownership(h)) {}
RTCInboundRtpStreamStats RTCInboundRtpStreamStats::take_ownership(Handle h) noexcept {
    return RTCInboundRtpStreamStats(h);
}

RTCInboundRtpStreamStats::RTCInboundRtpStreamStats(const emlite::Val &val) noexcept: RTCReceivedRtpStreamStats(val) {}

RTCInboundRtpStreamStats::RTCInboundRtpStreamStats() noexcept: RTCReceivedRtpStreamStats(emlite::Val::object()) {}

RTCInboundRtpStreamStats RTCInboundRtpStreamStats::clone() const noexcept { return *this; }

jsbind::String RTCInboundRtpStreamStats::trackIdentifier() const {
    return emlite::Val::get("trackIdentifier").as<jsbind::String>();
}

void RTCInboundRtpStreamStats::trackIdentifier(const jsbind::String& value) {
    emlite::Val::set("trackIdentifier", value);
}

jsbind::String RTCInboundRtpStreamStats::mid() const {
    return emlite::Val::get("mid").as<jsbind::String>();
}

void RTCInboundRtpStreamStats::mid(const jsbind::String& value) {
    emlite::Val::set("mid", value);
}

jsbind::String RTCInboundRtpStreamStats::remoteId() const {
    return emlite::Val::get("remoteId").as<jsbind::String>();
}

void RTCInboundRtpStreamStats::remoteId(const jsbind::String& value) {
    emlite::Val::set("remoteId", value);
}

unsigned long RTCInboundRtpStreamStats::framesDecoded() const {
    return emlite::Val::get("framesDecoded").as<unsigned long>();
}

void RTCInboundRtpStreamStats::framesDecoded(unsigned long value) {
    emlite::Val::set("framesDecoded", value);
}

unsigned long RTCInboundRtpStreamStats::keyFramesDecoded() const {
    return emlite::Val::get("keyFramesDecoded").as<unsigned long>();
}

void RTCInboundRtpStreamStats::keyFramesDecoded(unsigned long value) {
    emlite::Val::set("keyFramesDecoded", value);
}

unsigned long RTCInboundRtpStreamStats::framesRendered() const {
    return emlite::Val::get("framesRendered").as<unsigned long>();
}

void RTCInboundRtpStreamStats::framesRendered(unsigned long value) {
    emlite::Val::set("framesRendered", value);
}

unsigned long RTCInboundRtpStreamStats::framesDropped() const {
    return emlite::Val::get("framesDropped").as<unsigned long>();
}

void RTCInboundRtpStreamStats::framesDropped(unsigned long value) {
    emlite::Val::set("framesDropped", value);
}

unsigned long RTCInboundRtpStreamStats::frameWidth() const {
    return emlite::Val::get("frameWidth").as<unsigned long>();
}

void RTCInboundRtpStreamStats::frameWidth(unsigned long value) {
    emlite::Val::set("frameWidth", value);
}

unsigned long RTCInboundRtpStreamStats::frameHeight() const {
    return emlite::Val::get("frameHeight").as<unsigned long>();
}

void RTCInboundRtpStreamStats::frameHeight(unsigned long value) {
    emlite::Val::set("frameHeight", value);
}

double RTCInboundRtpStreamStats::framesPerSecond() const {
    return emlite::Val::get("framesPerSecond").as<double>();
}

void RTCInboundRtpStreamStats::framesPerSecond(double value) {
    emlite::Val::set("framesPerSecond", value);
}

long long RTCInboundRtpStreamStats::qpSum() const {
    return emlite::Val::get("qpSum").as<long long>();
}

void RTCInboundRtpStreamStats::qpSum(long long value) {
    emlite::Val::set("qpSum", value);
}

double RTCInboundRtpStreamStats::totalDecodeTime() const {
    return emlite::Val::get("totalDecodeTime").as<double>();
}

void RTCInboundRtpStreamStats::totalDecodeTime(double value) {
    emlite::Val::set("totalDecodeTime", value);
}

double RTCInboundRtpStreamStats::totalInterFrameDelay() const {
    return emlite::Val::get("totalInterFrameDelay").as<double>();
}

void RTCInboundRtpStreamStats::totalInterFrameDelay(double value) {
    emlite::Val::set("totalInterFrameDelay", value);
}

double RTCInboundRtpStreamStats::totalSquaredInterFrameDelay() const {
    return emlite::Val::get("totalSquaredInterFrameDelay").as<double>();
}

void RTCInboundRtpStreamStats::totalSquaredInterFrameDelay(double value) {
    emlite::Val::set("totalSquaredInterFrameDelay", value);
}

unsigned long RTCInboundRtpStreamStats::pauseCount() const {
    return emlite::Val::get("pauseCount").as<unsigned long>();
}

void RTCInboundRtpStreamStats::pauseCount(unsigned long value) {
    emlite::Val::set("pauseCount", value);
}

double RTCInboundRtpStreamStats::totalPausesDuration() const {
    return emlite::Val::get("totalPausesDuration").as<double>();
}

void RTCInboundRtpStreamStats::totalPausesDuration(double value) {
    emlite::Val::set("totalPausesDuration", value);
}

unsigned long RTCInboundRtpStreamStats::freezeCount() const {
    return emlite::Val::get("freezeCount").as<unsigned long>();
}

void RTCInboundRtpStreamStats::freezeCount(unsigned long value) {
    emlite::Val::set("freezeCount", value);
}

double RTCInboundRtpStreamStats::totalFreezesDuration() const {
    return emlite::Val::get("totalFreezesDuration").as<double>();
}

void RTCInboundRtpStreamStats::totalFreezesDuration(double value) {
    emlite::Val::set("totalFreezesDuration", value);
}

jsbind::Any RTCInboundRtpStreamStats::lastPacketReceivedTimestamp() const {
    return emlite::Val::get("lastPacketReceivedTimestamp").as<jsbind::Any>();
}

void RTCInboundRtpStreamStats::lastPacketReceivedTimestamp(const jsbind::Any& value) {
    emlite::Val::set("lastPacketReceivedTimestamp", value);
}

long long RTCInboundRtpStreamStats::headerBytesReceived() const {
    return emlite::Val::get("headerBytesReceived").as<long long>();
}

void RTCInboundRtpStreamStats::headerBytesReceived(long long value) {
    emlite::Val::set("headerBytesReceived", value);
}

long long RTCInboundRtpStreamStats::packetsDiscarded() const {
    return emlite::Val::get("packetsDiscarded").as<long long>();
}

void RTCInboundRtpStreamStats::packetsDiscarded(long long value) {
    emlite::Val::set("packetsDiscarded", value);
}

long long RTCInboundRtpStreamStats::fecBytesReceived() const {
    return emlite::Val::get("fecBytesReceived").as<long long>();
}

void RTCInboundRtpStreamStats::fecBytesReceived(long long value) {
    emlite::Val::set("fecBytesReceived", value);
}

long long RTCInboundRtpStreamStats::fecPacketsReceived() const {
    return emlite::Val::get("fecPacketsReceived").as<long long>();
}

void RTCInboundRtpStreamStats::fecPacketsReceived(long long value) {
    emlite::Val::set("fecPacketsReceived", value);
}

long long RTCInboundRtpStreamStats::fecPacketsDiscarded() const {
    return emlite::Val::get("fecPacketsDiscarded").as<long long>();
}

void RTCInboundRtpStreamStats::fecPacketsDiscarded(long long value) {
    emlite::Val::set("fecPacketsDiscarded", value);
}

long long RTCInboundRtpStreamStats::bytesReceived() const {
    return emlite::Val::get("bytesReceived").as<long long>();
}

void RTCInboundRtpStreamStats::bytesReceived(long long value) {
    emlite::Val::set("bytesReceived", value);
}

unsigned long RTCInboundRtpStreamStats::nackCount() const {
    return emlite::Val::get("nackCount").as<unsigned long>();
}

void RTCInboundRtpStreamStats::nackCount(unsigned long value) {
    emlite::Val::set("nackCount", value);
}

unsigned long RTCInboundRtpStreamStats::firCount() const {
    return emlite::Val::get("firCount").as<unsigned long>();
}

void RTCInboundRtpStreamStats::firCount(unsigned long value) {
    emlite::Val::set("firCount", value);
}

unsigned long RTCInboundRtpStreamStats::pliCount() const {
    return emlite::Val::get("pliCount").as<unsigned long>();
}

void RTCInboundRtpStreamStats::pliCount(unsigned long value) {
    emlite::Val::set("pliCount", value);
}

double RTCInboundRtpStreamStats::totalProcessingDelay() const {
    return emlite::Val::get("totalProcessingDelay").as<double>();
}

void RTCInboundRtpStreamStats::totalProcessingDelay(double value) {
    emlite::Val::set("totalProcessingDelay", value);
}

jsbind::Any RTCInboundRtpStreamStats::estimatedPlayoutTimestamp() const {
    return emlite::Val::get("estimatedPlayoutTimestamp").as<jsbind::Any>();
}

void RTCInboundRtpStreamStats::estimatedPlayoutTimestamp(const jsbind::Any& value) {
    emlite::Val::set("estimatedPlayoutTimestamp", value);
}

double RTCInboundRtpStreamStats::jitterBufferDelay() const {
    return emlite::Val::get("jitterBufferDelay").as<double>();
}

void RTCInboundRtpStreamStats::jitterBufferDelay(double value) {
    emlite::Val::set("jitterBufferDelay", value);
}

double RTCInboundRtpStreamStats::jitterBufferTargetDelay() const {
    return emlite::Val::get("jitterBufferTargetDelay").as<double>();
}

void RTCInboundRtpStreamStats::jitterBufferTargetDelay(double value) {
    emlite::Val::set("jitterBufferTargetDelay", value);
}

long long RTCInboundRtpStreamStats::jitterBufferEmittedCount() const {
    return emlite::Val::get("jitterBufferEmittedCount").as<long long>();
}

void RTCInboundRtpStreamStats::jitterBufferEmittedCount(long long value) {
    emlite::Val::set("jitterBufferEmittedCount", value);
}

double RTCInboundRtpStreamStats::jitterBufferMinimumDelay() const {
    return emlite::Val::get("jitterBufferMinimumDelay").as<double>();
}

void RTCInboundRtpStreamStats::jitterBufferMinimumDelay(double value) {
    emlite::Val::set("jitterBufferMinimumDelay", value);
}

long long RTCInboundRtpStreamStats::totalSamplesReceived() const {
    return emlite::Val::get("totalSamplesReceived").as<long long>();
}

void RTCInboundRtpStreamStats::totalSamplesReceived(long long value) {
    emlite::Val::set("totalSamplesReceived", value);
}

long long RTCInboundRtpStreamStats::concealedSamples() const {
    return emlite::Val::get("concealedSamples").as<long long>();
}

void RTCInboundRtpStreamStats::concealedSamples(long long value) {
    emlite::Val::set("concealedSamples", value);
}

long long RTCInboundRtpStreamStats::silentConcealedSamples() const {
    return emlite::Val::get("silentConcealedSamples").as<long long>();
}

void RTCInboundRtpStreamStats::silentConcealedSamples(long long value) {
    emlite::Val::set("silentConcealedSamples", value);
}

long long RTCInboundRtpStreamStats::concealmentEvents() const {
    return emlite::Val::get("concealmentEvents").as<long long>();
}

void RTCInboundRtpStreamStats::concealmentEvents(long long value) {
    emlite::Val::set("concealmentEvents", value);
}

long long RTCInboundRtpStreamStats::insertedSamplesForDeceleration() const {
    return emlite::Val::get("insertedSamplesForDeceleration").as<long long>();
}

void RTCInboundRtpStreamStats::insertedSamplesForDeceleration(long long value) {
    emlite::Val::set("insertedSamplesForDeceleration", value);
}

long long RTCInboundRtpStreamStats::removedSamplesForAcceleration() const {
    return emlite::Val::get("removedSamplesForAcceleration").as<long long>();
}

void RTCInboundRtpStreamStats::removedSamplesForAcceleration(long long value) {
    emlite::Val::set("removedSamplesForAcceleration", value);
}

double RTCInboundRtpStreamStats::audioLevel() const {
    return emlite::Val::get("audioLevel").as<double>();
}

void RTCInboundRtpStreamStats::audioLevel(double value) {
    emlite::Val::set("audioLevel", value);
}

double RTCInboundRtpStreamStats::totalAudioEnergy() const {
    return emlite::Val::get("totalAudioEnergy").as<double>();
}

void RTCInboundRtpStreamStats::totalAudioEnergy(double value) {
    emlite::Val::set("totalAudioEnergy", value);
}

double RTCInboundRtpStreamStats::totalSamplesDuration() const {
    return emlite::Val::get("totalSamplesDuration").as<double>();
}

void RTCInboundRtpStreamStats::totalSamplesDuration(double value) {
    emlite::Val::set("totalSamplesDuration", value);
}

unsigned long RTCInboundRtpStreamStats::framesReceived() const {
    return emlite::Val::get("framesReceived").as<unsigned long>();
}

void RTCInboundRtpStreamStats::framesReceived(unsigned long value) {
    emlite::Val::set("framesReceived", value);
}

jsbind::String RTCInboundRtpStreamStats::decoderImplementation() const {
    return emlite::Val::get("decoderImplementation").as<jsbind::String>();
}

void RTCInboundRtpStreamStats::decoderImplementation(const jsbind::String& value) {
    emlite::Val::set("decoderImplementation", value);
}

jsbind::String RTCInboundRtpStreamStats::playoutId() const {
    return emlite::Val::get("playoutId").as<jsbind::String>();
}

void RTCInboundRtpStreamStats::playoutId(const jsbind::String& value) {
    emlite::Val::set("playoutId", value);
}

bool RTCInboundRtpStreamStats::powerEfficientDecoder() const {
    return emlite::Val::get("powerEfficientDecoder").as<bool>();
}

void RTCInboundRtpStreamStats::powerEfficientDecoder(bool value) {
    emlite::Val::set("powerEfficientDecoder", value);
}

unsigned long RTCInboundRtpStreamStats::framesAssembledFromMultiplePackets() const {
    return emlite::Val::get("framesAssembledFromMultiplePackets").as<unsigned long>();
}

void RTCInboundRtpStreamStats::framesAssembledFromMultiplePackets(unsigned long value) {
    emlite::Val::set("framesAssembledFromMultiplePackets", value);
}

double RTCInboundRtpStreamStats::totalAssemblyTime() const {
    return emlite::Val::get("totalAssemblyTime").as<double>();
}

void RTCInboundRtpStreamStats::totalAssemblyTime(double value) {
    emlite::Val::set("totalAssemblyTime", value);
}

long long RTCInboundRtpStreamStats::retransmittedPacketsReceived() const {
    return emlite::Val::get("retransmittedPacketsReceived").as<long long>();
}

void RTCInboundRtpStreamStats::retransmittedPacketsReceived(long long value) {
    emlite::Val::set("retransmittedPacketsReceived", value);
}

long long RTCInboundRtpStreamStats::retransmittedBytesReceived() const {
    return emlite::Val::get("retransmittedBytesReceived").as<long long>();
}

void RTCInboundRtpStreamStats::retransmittedBytesReceived(long long value) {
    emlite::Val::set("retransmittedBytesReceived", value);
}

unsigned long RTCInboundRtpStreamStats::rtxSsrc() const {
    return emlite::Val::get("rtxSsrc").as<unsigned long>();
}

void RTCInboundRtpStreamStats::rtxSsrc(unsigned long value) {
    emlite::Val::set("rtxSsrc", value);
}

unsigned long RTCInboundRtpStreamStats::fecSsrc() const {
    return emlite::Val::get("fecSsrc").as<unsigned long>();
}

void RTCInboundRtpStreamStats::fecSsrc(unsigned long value) {
    emlite::Val::set("fecSsrc", value);
}

double RTCInboundRtpStreamStats::totalCorruptionProbability() const {
    return emlite::Val::get("totalCorruptionProbability").as<double>();
}

void RTCInboundRtpStreamStats::totalCorruptionProbability(double value) {
    emlite::Val::set("totalCorruptionProbability", value);
}

double RTCInboundRtpStreamStats::totalSquaredCorruptionProbability() const {
    return emlite::Val::get("totalSquaredCorruptionProbability").as<double>();
}

void RTCInboundRtpStreamStats::totalSquaredCorruptionProbability(double value) {
    emlite::Val::set("totalSquaredCorruptionProbability", value);
}

long long RTCInboundRtpStreamStats::corruptionMeasurements() const {
    return emlite::Val::get("corruptionMeasurements").as<long long>();
}

void RTCInboundRtpStreamStats::corruptionMeasurements(long long value) {
    emlite::Val::set("corruptionMeasurements", value);
}


} // namespace webbind