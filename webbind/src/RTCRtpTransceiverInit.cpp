#include <webbind/RTCRtpTransceiverInit.hpp>
#include <webbind/MediaStream.hpp>
#include <webbind/RTCRtpEncodingParameters.hpp>

using emlite::Val;
namespace webbind {

RTCRtpTransceiverInit::RTCRtpTransceiverInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpTransceiverInit RTCRtpTransceiverInit::take_ownership(Handle h) noexcept {
        return RTCRtpTransceiverInit(h);
    }
RTCRtpTransceiverInit::RTCRtpTransceiverInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCRtpTransceiverInit::RTCRtpTransceiverInit() noexcept: emlite::Val(emlite::Val::object()) {}
RTCRtpTransceiverInit RTCRtpTransceiverInit::clone() const noexcept { return *this; }

RTCRtpTransceiverDirection RTCRtpTransceiverInit::direction() const {
    return emlite::Val::get("direction").as<RTCRtpTransceiverDirection>();
}

void RTCRtpTransceiverInit::direction(const RTCRtpTransceiverDirection& value) {
    emlite::Val::set("direction", value);
}

jsbind::TypedArray<MediaStream> RTCRtpTransceiverInit::streams() const {
    return emlite::Val::get("streams").as<jsbind::TypedArray<MediaStream>>();
}

void RTCRtpTransceiverInit::streams(const jsbind::TypedArray<MediaStream>& value) {
    emlite::Val::set("streams", value);
}

jsbind::TypedArray<RTCRtpEncodingParameters> RTCRtpTransceiverInit::sendEncodings() const {
    return emlite::Val::get("sendEncodings").as<jsbind::TypedArray<RTCRtpEncodingParameters>>();
}

void RTCRtpTransceiverInit::sendEncodings(const jsbind::TypedArray<RTCRtpEncodingParameters>& value) {
    emlite::Val::set("sendEncodings", value);
}


} // namespace webbind