#include "webbind/RTCRtpSender.hpp"
#include "webbind/MediaStreamTrack.hpp"
#include "webbind/RTCDtlsTransport.hpp"
#include "webbind/RTCRtpCapabilities.hpp"
#include "webbind/RTCRtpSendParameters.hpp"
#include "webbind/RTCSetParameterOptions.hpp"
#include "webbind/MediaStream.hpp"
#include "webbind/RTCStatsReport.hpp"
#include "webbind/RTCDTMFSender.hpp"

namespace webbind {

RTCRtpSender RTCRtpSender::take_ownership(Handle h) noexcept {
        return RTCRtpSender(h);
    }
RTCRtpSender RTCRtpSender::clone() const noexcept { return *this; }
emlite::Val RTCRtpSender::instance() noexcept { return emlite::Val::global("RTCRtpSender"); }
RTCRtpSender::RTCRtpSender(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpSender::RTCRtpSender(const emlite::Val &val) noexcept: emlite::Val(val) {}

MediaStreamTrack RTCRtpSender::track() const {
    return emlite::Val::get("track").as<MediaStreamTrack>();
}

RTCDtlsTransport RTCRtpSender::transport() const {
    return emlite::Val::get("transport").as<RTCDtlsTransport>();
}

RTCRtpCapabilities RTCRtpSender::getCapabilities(const jsbind::String& kind) {
    return emlite::Val::global("rtcrtpsender").call("getCapabilities", kind).as<RTCRtpCapabilities>();
}

jsbind::Promise<jsbind::Undefined> RTCRtpSender::setParameters(const RTCRtpSendParameters& parameters) {
    return emlite::Val::call("setParameters", parameters).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> RTCRtpSender::setParameters(const RTCRtpSendParameters& parameters, const RTCSetParameterOptions& setParameterOptions) {
    return emlite::Val::call("setParameters", parameters, setParameterOptions).as<jsbind::Promise<jsbind::Undefined>>();
}

RTCRtpSendParameters RTCRtpSender::getParameters() {
    return emlite::Val::call("getParameters").as<RTCRtpSendParameters>();
}

jsbind::Promise<jsbind::Undefined> RTCRtpSender::replaceTrack(const MediaStreamTrack& withTrack) {
    return emlite::Val::call("replaceTrack", withTrack).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined RTCRtpSender::setStreams(const MediaStream& streams) {
    return emlite::Val::call("setStreams", streams).as<jsbind::Undefined>();
}

jsbind::Promise<RTCStatsReport> RTCRtpSender::getStats() {
    return emlite::Val::call("getStats").as<jsbind::Promise<RTCStatsReport>>();
}

jsbind::Any RTCRtpSender::transform() const {
    return emlite::Val::get("transform").as<jsbind::Any>();
}

void RTCRtpSender::transform(const jsbind::Any& value) {
    emlite::Val::set("transform", value);
}

jsbind::Promise<jsbind::Undefined> RTCRtpSender::generateKeyFrame() {
    return emlite::Val::call("generateKeyFrame").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> RTCRtpSender::generateKeyFrame(const jsbind::TypedArray<jsbind::String>& rids) {
    return emlite::Val::call("generateKeyFrame", rids).as<jsbind::Promise<jsbind::Undefined>>();
}

RTCDTMFSender RTCRtpSender::dtmf() const {
    return emlite::Val::get("dtmf").as<RTCDTMFSender>();
}


} // namespace webbind