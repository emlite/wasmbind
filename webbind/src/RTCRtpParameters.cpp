#include <webbind/RTCRtpParameters.hpp>
#include <webbind/RTCRtpHeaderExtensionParameters.hpp>
#include <webbind/RTCRtcpParameters.hpp>
#include <webbind/RTCRtpCodecParameters.hpp>

namespace webbind {

RTCRtpParameters::RTCRtpParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpParameters RTCRtpParameters::take_ownership(Handle h) noexcept {
    return RTCRtpParameters(h);
}

RTCRtpParameters::RTCRtpParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCRtpParameters::RTCRtpParameters() noexcept: emlite::Val(emlite::Val::object()) {}

RTCRtpParameters RTCRtpParameters::clone() const noexcept { return *this; }

jsbind::TypedArray<RTCRtpHeaderExtensionParameters> RTCRtpParameters::headerExtensions() const {
    return emlite::Val::get("headerExtensions").as<jsbind::TypedArray<RTCRtpHeaderExtensionParameters>>();
}

void RTCRtpParameters::headerExtensions(const jsbind::TypedArray<RTCRtpHeaderExtensionParameters>& value) {
    emlite::Val::set("headerExtensions", value);
}

RTCRtcpParameters RTCRtpParameters::rtcp() const {
    return emlite::Val::get("rtcp").as<RTCRtcpParameters>();
}

void RTCRtpParameters::rtcp(const RTCRtcpParameters& value) {
    emlite::Val::set("rtcp", value);
}

jsbind::TypedArray<RTCRtpCodecParameters> RTCRtpParameters::codecs() const {
    return emlite::Val::get("codecs").as<jsbind::TypedArray<RTCRtpCodecParameters>>();
}

void RTCRtpParameters::codecs(const jsbind::TypedArray<RTCRtpCodecParameters>& value) {
    emlite::Val::set("codecs", value);
}


} // namespace webbind