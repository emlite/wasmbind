#include <webbind/RTCRtpSender.hpp>
#include <webbind/MediaStreamTrack.hpp>
#include <webbind/RTCDtlsTransport.hpp>
#include <webbind/MediaStream.hpp>
#include <webbind/RTCStatsReport.hpp>
#include <webbind/RTCDTMFSender.hpp>


RTCRtpCapabilities::RTCRtpCapabilities(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpCapabilities RTCRtpCapabilities::take_ownership(Handle h) noexcept {
        return RTCRtpCapabilities(h);
    }
RTCRtpCapabilities::RTCRtpCapabilities(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCRtpCapabilities::RTCRtpCapabilities() noexcept: emlite::Val(emlite::Val::object()) {}
RTCRtpCapabilities RTCRtpCapabilities::clone() const noexcept { return *this; }

jsbind::Sequence<RTCRtpCodec> RTCRtpCapabilities::codecs() const {
    return emlite::Val::get("codecs").as<jsbind::Sequence<RTCRtpCodec>>();
}

void RTCRtpCapabilities::codecs(const jsbind::Sequence<RTCRtpCodec>& value) {
    emlite::Val::set("codecs", value);
}

jsbind::Sequence<jsbind::Any> RTCRtpCapabilities::headerExtensions() const {
    return emlite::Val::get("headerExtensions").as<jsbind::Sequence<jsbind::Any>>();
}

void RTCRtpCapabilities::headerExtensions(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("headerExtensions", value);
}

RTCRtpSendParameters::RTCRtpSendParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpSendParameters RTCRtpSendParameters::take_ownership(Handle h) noexcept {
        return RTCRtpSendParameters(h);
    }
RTCRtpSendParameters::RTCRtpSendParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCRtpSendParameters::RTCRtpSendParameters() noexcept: emlite::Val(emlite::Val::object()) {}
RTCRtpSendParameters RTCRtpSendParameters::clone() const noexcept { return *this; }

jsbind::DOMString RTCRtpSendParameters::transactionId() const {
    return emlite::Val::get("transactionId").as<jsbind::DOMString>();
}

void RTCRtpSendParameters::transactionId(const jsbind::DOMString& value) {
    emlite::Val::set("transactionId", value);
}

jsbind::Sequence<jsbind::Any> RTCRtpSendParameters::encodings() const {
    return emlite::Val::get("encodings").as<jsbind::Sequence<jsbind::Any>>();
}

void RTCRtpSendParameters::encodings(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("encodings", value);
}

RTCSetParameterOptions::RTCSetParameterOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCSetParameterOptions RTCSetParameterOptions::take_ownership(Handle h) noexcept {
        return RTCSetParameterOptions(h);
    }
RTCSetParameterOptions::RTCSetParameterOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCSetParameterOptions::RTCSetParameterOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RTCSetParameterOptions RTCSetParameterOptions::clone() const noexcept { return *this; }

RTCRtpSender RTCRtpSender::take_ownership(Handle h) noexcept {
        return RTCRtpSender(h);
    }
RTCRtpSender RTCRtpSender::clone() const noexcept { return *this; }
RTCRtpSender::RTCRtpSender(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpSender::RTCRtpSender(const emlite::Val &val) noexcept: emlite::Val(val) {}


MediaStreamTrack RTCRtpSender::track() const {
    return emlite::Val::get("track").as<MediaStreamTrack>();
}

RTCDtlsTransport RTCRtpSender::transport() const {
    return emlite::Val::get("transport").as<RTCDtlsTransport>();
}

RTCRtpCapabilities RTCRtpSender::getCapabilities(const jsbind::DOMString& kind) {
    return emlite::Val::global("rtcrtpsender").call("getCapabilities", kind).as<RTCRtpCapabilities>();
}

jsbind::Promise RTCRtpSender::setParameters(const RTCRtpSendParameters& parameters, const RTCSetParameterOptions& setParameterOptions) {
    return emlite::Val::call("setParameters", parameters, setParameterOptions).as<jsbind::Promise>();
}

RTCRtpSendParameters RTCRtpSender::getParameters() {
    return emlite::Val::call("getParameters").as<RTCRtpSendParameters>();
}

jsbind::Promise RTCRtpSender::replaceTrack(const MediaStreamTrack& withTrack) {
    return emlite::Val::call("replaceTrack", withTrack).as<jsbind::Promise>();
}

jsbind::Undefined RTCRtpSender::setStreams(const MediaStream& streams) {
    return emlite::Val::call("setStreams", streams).as<jsbind::Undefined>();
}

jsbind::Promise RTCRtpSender::getStats() {
    return emlite::Val::call("getStats").as<jsbind::Promise>();
}

jsbind::Any RTCRtpSender::transform() const {
    return emlite::Val::get("transform").as<jsbind::Any>();
}

void RTCRtpSender::transform(const jsbind::Any& value) {
    emlite::Val::set("transform", value);
}

jsbind::Promise RTCRtpSender::generateKeyFrame(const jsbind::Sequence<jsbind::DOMString>& rids) {
    return emlite::Val::call("generateKeyFrame", rids).as<jsbind::Promise>();
}

RTCDTMFSender RTCRtpSender::dtmf() const {
    return emlite::Val::get("dtmf").as<RTCDTMFSender>();
}

