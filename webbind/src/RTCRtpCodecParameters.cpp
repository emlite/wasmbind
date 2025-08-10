#include "webbind/RTCRtpCodecParameters.hpp"

using emlite::Val;
namespace webbind {

RTCRtpCodecParameters::RTCRtpCodecParameters(Handle h) noexcept : RTCRtpCodec(emlite::Val::take_ownership(h)) {}
RTCRtpCodecParameters RTCRtpCodecParameters::take_ownership(Handle h) noexcept {
        return RTCRtpCodecParameters(h);
    }
RTCRtpCodecParameters::RTCRtpCodecParameters(const emlite::Val &val) noexcept: RTCRtpCodec(val) {}
RTCRtpCodecParameters::RTCRtpCodecParameters() noexcept: RTCRtpCodec(emlite::Val::object()) {}
RTCRtpCodecParameters RTCRtpCodecParameters::clone() const noexcept { return *this; }

unsigned char RTCRtpCodecParameters::payloadType() const {
    return emlite::Val::get("payloadType").as<unsigned char>();
}

void RTCRtpCodecParameters::payloadType(unsigned char value) {
    emlite::Val::set("payloadType", value);
}


} // namespace webbind