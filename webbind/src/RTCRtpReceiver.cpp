#include <webbind/RTCRtpReceiver.hpp>
#include <webbind/MediaStreamTrack.hpp>
#include <webbind/RTCDtlsTransport.hpp>
#include <webbind/RTCRtpCapabilities.hpp>
#include <webbind/RTCRtpReceiveParameters.hpp>
#include <webbind/RTCRtpContributingSource.hpp>
#include <webbind/RTCRtpSynchronizationSource.hpp>
#include <webbind/RTCStatsReport.hpp>

namespace webbind {

RTCRtpReceiver RTCRtpReceiver::take_ownership(Handle h) noexcept {
        return RTCRtpReceiver(h);
    }
RTCRtpReceiver RTCRtpReceiver::clone() const noexcept { return *this; }
emlite::Val RTCRtpReceiver::instance() noexcept { return emlite::Val::global("RTCRtpReceiver"); }
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


} // namespace webbind