#include <webbind/RTCRtpSendParameters.hpp>
#include <webbind/RTCRtpEncodingParameters.hpp>

using emlite::Val;
namespace webbind {

RTCRtpSendParameters::RTCRtpSendParameters(Handle h) noexcept : RTCRtpParameters(emlite::Val::take_ownership(h)) {}
RTCRtpSendParameters RTCRtpSendParameters::take_ownership(Handle h) noexcept {
        return RTCRtpSendParameters(h);
    }
RTCRtpSendParameters::RTCRtpSendParameters(const emlite::Val &val) noexcept: RTCRtpParameters(val) {}
RTCRtpSendParameters::RTCRtpSendParameters() noexcept: RTCRtpParameters(emlite::Val::object()) {}
RTCRtpSendParameters RTCRtpSendParameters::clone() const noexcept { return *this; }

jsbind::String RTCRtpSendParameters::transactionId() const {
    return emlite::Val::get("transactionId").as<jsbind::String>();
}

void RTCRtpSendParameters::transactionId(const jsbind::String& value) {
    emlite::Val::set("transactionId", value);
}

jsbind::TypedArray<RTCRtpEncodingParameters> RTCRtpSendParameters::encodings() const {
    return emlite::Val::get("encodings").as<jsbind::TypedArray<RTCRtpEncodingParameters>>();
}

void RTCRtpSendParameters::encodings(const jsbind::TypedArray<RTCRtpEncodingParameters>& value) {
    emlite::Val::set("encodings", value);
}


} // namespace webbind