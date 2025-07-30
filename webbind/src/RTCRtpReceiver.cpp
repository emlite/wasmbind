#include <webbind/RTCRtpReceiver.hpp>
#include <webbind/MediaStreamTrack.hpp>
#include <webbind/RTCDtlsTransport.hpp>
#include <webbind/RTCRtpSender.hpp>
#include <webbind/RTCStatsReport.hpp>


RTCRtpReceiveParameters::RTCRtpReceiveParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpReceiveParameters RTCRtpReceiveParameters::take_ownership(Handle h) noexcept {
        return RTCRtpReceiveParameters(h);
    }
RTCRtpReceiveParameters::RTCRtpReceiveParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCRtpReceiveParameters::RTCRtpReceiveParameters() noexcept: emlite::Val(emlite::Val::object()) {}
RTCRtpReceiveParameters RTCRtpReceiveParameters::clone() const noexcept { return *this; }

RTCRtpContributingSource::RTCRtpContributingSource(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpContributingSource RTCRtpContributingSource::take_ownership(Handle h) noexcept {
        return RTCRtpContributingSource(h);
    }
RTCRtpContributingSource::RTCRtpContributingSource(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCRtpContributingSource::RTCRtpContributingSource() noexcept: emlite::Val(emlite::Val::object()) {}
RTCRtpContributingSource RTCRtpContributingSource::clone() const noexcept { return *this; }

jsbind::Any RTCRtpContributingSource::timestamp() const {
    return emlite::Val::get("timestamp").as<jsbind::Any>();
}

void RTCRtpContributingSource::timestamp(const jsbind::Any& value) {
    emlite::Val::set("timestamp", value);
}

unsigned long RTCRtpContributingSource::source() const {
    return emlite::Val::get("source").as<unsigned long>();
}

void RTCRtpContributingSource::source(unsigned long value) {
    emlite::Val::set("source", value);
}

double RTCRtpContributingSource::audioLevel() const {
    return emlite::Val::get("audioLevel").as<double>();
}

void RTCRtpContributingSource::audioLevel(double value) {
    emlite::Val::set("audioLevel", value);
}

unsigned long RTCRtpContributingSource::rtpTimestamp() const {
    return emlite::Val::get("rtpTimestamp").as<unsigned long>();
}

void RTCRtpContributingSource::rtpTimestamp(unsigned long value) {
    emlite::Val::set("rtpTimestamp", value);
}

RTCRtpSynchronizationSource::RTCRtpSynchronizationSource(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpSynchronizationSource RTCRtpSynchronizationSource::take_ownership(Handle h) noexcept {
        return RTCRtpSynchronizationSource(h);
    }
RTCRtpSynchronizationSource::RTCRtpSynchronizationSource(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCRtpSynchronizationSource::RTCRtpSynchronizationSource() noexcept: emlite::Val(emlite::Val::object()) {}
RTCRtpSynchronizationSource RTCRtpSynchronizationSource::clone() const noexcept { return *this; }

RTCRtpReceiver RTCRtpReceiver::take_ownership(Handle h) noexcept {
        return RTCRtpReceiver(h);
    }
RTCRtpReceiver RTCRtpReceiver::clone() const noexcept { return *this; }
RTCRtpReceiver::RTCRtpReceiver(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpReceiver::RTCRtpReceiver(const emlite::Val &val) noexcept: emlite::Val(val) {}


MediaStreamTrack RTCRtpReceiver::track() const {
    return emlite::Val::get("track").as<MediaStreamTrack>();
}

RTCDtlsTransport RTCRtpReceiver::transport() const {
    return emlite::Val::get("transport").as<RTCDtlsTransport>();
}

RTCRtpCapabilities RTCRtpReceiver::getCapabilities(const jsbind::String& kind) {
    return emlite::Val::global("rtcrtpreceiver").call("getCapabilities", kind).as<RTCRtpCapabilities>();
}

RTCRtpReceiveParameters RTCRtpReceiver::getParameters() {
    return emlite::Val::call("getParameters").as<RTCRtpReceiveParameters>();
}

jsbind::TypedArray<RTCRtpContributingSource> RTCRtpReceiver::getContributingSources() {
    return emlite::Val::call("getContributingSources").as<jsbind::TypedArray<RTCRtpContributingSource>>();
}

jsbind::TypedArray<RTCRtpSynchronizationSource> RTCRtpReceiver::getSynchronizationSources() {
    return emlite::Val::call("getSynchronizationSources").as<jsbind::TypedArray<RTCRtpSynchronizationSource>>();
}

jsbind::Promise<RTCStatsReport> RTCRtpReceiver::getStats() {
    return emlite::Val::call("getStats").as<jsbind::Promise<RTCStatsReport>>();
}

jsbind::Any RTCRtpReceiver::jitterBufferTarget() const {
    return emlite::Val::get("jitterBufferTarget").as<jsbind::Any>();
}

void RTCRtpReceiver::jitterBufferTarget(const jsbind::Any& value) {
    emlite::Val::set("jitterBufferTarget", value);
}

jsbind::Any RTCRtpReceiver::transform() const {
    return emlite::Val::get("transform").as<jsbind::Any>();
}

void RTCRtpReceiver::transform(const jsbind::Any& value) {
    emlite::Val::set("transform", value);
}

