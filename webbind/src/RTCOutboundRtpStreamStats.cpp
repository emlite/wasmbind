#include <webbind/RTCOutboundRtpStreamStats.hpp>

namespace webbind {

RTCOutboundRtpStreamStats::RTCOutboundRtpStreamStats(Handle h) noexcept : RTCSentRtpStreamStats(emlite::Val::take_ownership(h)) {}
RTCOutboundRtpStreamStats RTCOutboundRtpStreamStats::take_ownership(Handle h) noexcept {
    return RTCOutboundRtpStreamStats(h);
}

RTCOutboundRtpStreamStats::RTCOutboundRtpStreamStats(const emlite::Val &val) noexcept: RTCSentRtpStreamStats(val) {}

RTCOutboundRtpStreamStats::RTCOutboundRtpStreamStats() noexcept: RTCSentRtpStreamStats(emlite::Val::object()) {}

RTCOutboundRtpStreamStats RTCOutboundRtpStreamStats::clone() const noexcept { return *this; }

jsbind::String RTCOutboundRtpStreamStats::mid() const {
    return emlite::Val::get("mid").as<jsbind::String>();
}

void RTCOutboundRtpStreamStats::mid(const jsbind::String& value) {
    emlite::Val::set("mid", value);
}

jsbind::String RTCOutboundRtpStreamStats::mediaSourceId() const {
    return emlite::Val::get("mediaSourceId").as<jsbind::String>();
}

void RTCOutboundRtpStreamStats::mediaSourceId(const jsbind::String& value) {
    emlite::Val::set("mediaSourceId", value);
}

jsbind::String RTCOutboundRtpStreamStats::remoteId() const {
    return emlite::Val::get("remoteId").as<jsbind::String>();
}

void RTCOutboundRtpStreamStats::remoteId(const jsbind::String& value) {
    emlite::Val::set("remoteId", value);
}

jsbind::String RTCOutboundRtpStreamStats::rid() const {
    return emlite::Val::get("rid").as<jsbind::String>();
}

void RTCOutboundRtpStreamStats::rid(const jsbind::String& value) {
    emlite::Val::set("rid", value);
}

unsigned long RTCOutboundRtpStreamStats::encodingIndex() const {
    return emlite::Val::get("encodingIndex").as<unsigned long>();
}

void RTCOutboundRtpStreamStats::encodingIndex(unsigned long value) {
    emlite::Val::set("encodingIndex", value);
}

long long RTCOutboundRtpStreamStats::headerBytesSent() const {
    return emlite::Val::get("headerBytesSent").as<long long>();
}

void RTCOutboundRtpStreamStats::headerBytesSent(long long value) {
    emlite::Val::set("headerBytesSent", value);
}

long long RTCOutboundRtpStreamStats::retransmittedPacketsSent() const {
    return emlite::Val::get("retransmittedPacketsSent").as<long long>();
}

void RTCOutboundRtpStreamStats::retransmittedPacketsSent(long long value) {
    emlite::Val::set("retransmittedPacketsSent", value);
}

long long RTCOutboundRtpStreamStats::retransmittedBytesSent() const {
    return emlite::Val::get("retransmittedBytesSent").as<long long>();
}

void RTCOutboundRtpStreamStats::retransmittedBytesSent(long long value) {
    emlite::Val::set("retransmittedBytesSent", value);
}

unsigned long RTCOutboundRtpStreamStats::rtxSsrc() const {
    return emlite::Val::get("rtxSsrc").as<unsigned long>();
}

void RTCOutboundRtpStreamStats::rtxSsrc(unsigned long value) {
    emlite::Val::set("rtxSsrc", value);
}

double RTCOutboundRtpStreamStats::targetBitrate() const {
    return emlite::Val::get("targetBitrate").as<double>();
}

void RTCOutboundRtpStreamStats::targetBitrate(double value) {
    emlite::Val::set("targetBitrate", value);
}

long long RTCOutboundRtpStreamStats::totalEncodedBytesTarget() const {
    return emlite::Val::get("totalEncodedBytesTarget").as<long long>();
}

void RTCOutboundRtpStreamStats::totalEncodedBytesTarget(long long value) {
    emlite::Val::set("totalEncodedBytesTarget", value);
}

unsigned long RTCOutboundRtpStreamStats::frameWidth() const {
    return emlite::Val::get("frameWidth").as<unsigned long>();
}

void RTCOutboundRtpStreamStats::frameWidth(unsigned long value) {
    emlite::Val::set("frameWidth", value);
}

unsigned long RTCOutboundRtpStreamStats::frameHeight() const {
    return emlite::Val::get("frameHeight").as<unsigned long>();
}

void RTCOutboundRtpStreamStats::frameHeight(unsigned long value) {
    emlite::Val::set("frameHeight", value);
}

double RTCOutboundRtpStreamStats::framesPerSecond() const {
    return emlite::Val::get("framesPerSecond").as<double>();
}

void RTCOutboundRtpStreamStats::framesPerSecond(double value) {
    emlite::Val::set("framesPerSecond", value);
}

unsigned long RTCOutboundRtpStreamStats::framesSent() const {
    return emlite::Val::get("framesSent").as<unsigned long>();
}

void RTCOutboundRtpStreamStats::framesSent(unsigned long value) {
    emlite::Val::set("framesSent", value);
}

unsigned long RTCOutboundRtpStreamStats::hugeFramesSent() const {
    return emlite::Val::get("hugeFramesSent").as<unsigned long>();
}

void RTCOutboundRtpStreamStats::hugeFramesSent(unsigned long value) {
    emlite::Val::set("hugeFramesSent", value);
}

unsigned long RTCOutboundRtpStreamStats::framesEncoded() const {
    return emlite::Val::get("framesEncoded").as<unsigned long>();
}

void RTCOutboundRtpStreamStats::framesEncoded(unsigned long value) {
    emlite::Val::set("framesEncoded", value);
}

unsigned long RTCOutboundRtpStreamStats::keyFramesEncoded() const {
    return emlite::Val::get("keyFramesEncoded").as<unsigned long>();
}

void RTCOutboundRtpStreamStats::keyFramesEncoded(unsigned long value) {
    emlite::Val::set("keyFramesEncoded", value);
}

long long RTCOutboundRtpStreamStats::qpSum() const {
    return emlite::Val::get("qpSum").as<long long>();
}

void RTCOutboundRtpStreamStats::qpSum(long long value) {
    emlite::Val::set("qpSum", value);
}

jsbind::Record<jsbind::String, double> RTCOutboundRtpStreamStats::psnrSum() const {
    return emlite::Val::get("psnrSum").as<jsbind::Record<jsbind::String, double>>();
}

void RTCOutboundRtpStreamStats::psnrSum(jsbind::Record<jsbind::String, double> value) {
    emlite::Val::set("psnrSum", value);
}

long long RTCOutboundRtpStreamStats::psnrMeasurements() const {
    return emlite::Val::get("psnrMeasurements").as<long long>();
}

void RTCOutboundRtpStreamStats::psnrMeasurements(long long value) {
    emlite::Val::set("psnrMeasurements", value);
}

double RTCOutboundRtpStreamStats::totalEncodeTime() const {
    return emlite::Val::get("totalEncodeTime").as<double>();
}

void RTCOutboundRtpStreamStats::totalEncodeTime(double value) {
    emlite::Val::set("totalEncodeTime", value);
}

double RTCOutboundRtpStreamStats::totalPacketSendDelay() const {
    return emlite::Val::get("totalPacketSendDelay").as<double>();
}

void RTCOutboundRtpStreamStats::totalPacketSendDelay(double value) {
    emlite::Val::set("totalPacketSendDelay", value);
}

RTCQualityLimitationReason RTCOutboundRtpStreamStats::qualityLimitationReason() const {
    return emlite::Val::get("qualityLimitationReason").as<RTCQualityLimitationReason>();
}

void RTCOutboundRtpStreamStats::qualityLimitationReason(const RTCQualityLimitationReason& value) {
    emlite::Val::set("qualityLimitationReason", value);
}

jsbind::Record<jsbind::String, double> RTCOutboundRtpStreamStats::qualityLimitationDurations() const {
    return emlite::Val::get("qualityLimitationDurations").as<jsbind::Record<jsbind::String, double>>();
}

void RTCOutboundRtpStreamStats::qualityLimitationDurations(jsbind::Record<jsbind::String, double> value) {
    emlite::Val::set("qualityLimitationDurations", value);
}

unsigned long RTCOutboundRtpStreamStats::qualityLimitationResolutionChanges() const {
    return emlite::Val::get("qualityLimitationResolutionChanges").as<unsigned long>();
}

void RTCOutboundRtpStreamStats::qualityLimitationResolutionChanges(unsigned long value) {
    emlite::Val::set("qualityLimitationResolutionChanges", value);
}

unsigned long RTCOutboundRtpStreamStats::nackCount() const {
    return emlite::Val::get("nackCount").as<unsigned long>();
}

void RTCOutboundRtpStreamStats::nackCount(unsigned long value) {
    emlite::Val::set("nackCount", value);
}

unsigned long RTCOutboundRtpStreamStats::firCount() const {
    return emlite::Val::get("firCount").as<unsigned long>();
}

void RTCOutboundRtpStreamStats::firCount(unsigned long value) {
    emlite::Val::set("firCount", value);
}

unsigned long RTCOutboundRtpStreamStats::pliCount() const {
    return emlite::Val::get("pliCount").as<unsigned long>();
}

void RTCOutboundRtpStreamStats::pliCount(unsigned long value) {
    emlite::Val::set("pliCount", value);
}

jsbind::String RTCOutboundRtpStreamStats::encoderImplementation() const {
    return emlite::Val::get("encoderImplementation").as<jsbind::String>();
}

void RTCOutboundRtpStreamStats::encoderImplementation(const jsbind::String& value) {
    emlite::Val::set("encoderImplementation", value);
}

bool RTCOutboundRtpStreamStats::powerEfficientEncoder() const {
    return emlite::Val::get("powerEfficientEncoder").as<bool>();
}

void RTCOutboundRtpStreamStats::powerEfficientEncoder(bool value) {
    emlite::Val::set("powerEfficientEncoder", value);
}

bool RTCOutboundRtpStreamStats::active() const {
    return emlite::Val::get("active").as<bool>();
}

void RTCOutboundRtpStreamStats::active(bool value) {
    emlite::Val::set("active", value);
}

jsbind::String RTCOutboundRtpStreamStats::scalabilityMode() const {
    return emlite::Val::get("scalabilityMode").as<jsbind::String>();
}

void RTCOutboundRtpStreamStats::scalabilityMode(const jsbind::String& value) {
    emlite::Val::set("scalabilityMode", value);
}

long long RTCOutboundRtpStreamStats::packetsSentWithEct1() const {
    return emlite::Val::get("packetsSentWithEct1").as<long long>();
}

void RTCOutboundRtpStreamStats::packetsSentWithEct1(long long value) {
    emlite::Val::set("packetsSentWithEct1", value);
}


} // namespace webbind