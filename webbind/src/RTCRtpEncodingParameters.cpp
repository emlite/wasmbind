#include "webbind/RTCRtpEncodingParameters.hpp"
#include "webbind/RTCRtpCodec.hpp"

using emlite::Val;
namespace webbind {

RTCRtpEncodingParameters::RTCRtpEncodingParameters(Handle h) noexcept : RTCRtpCodingParameters(emlite::Val::take_ownership(h)) {}
RTCRtpEncodingParameters RTCRtpEncodingParameters::take_ownership(Handle h) noexcept {
        return RTCRtpEncodingParameters(h);
    }
RTCRtpEncodingParameters::RTCRtpEncodingParameters(const emlite::Val &val) noexcept: RTCRtpCodingParameters(val) {}
RTCRtpEncodingParameters::RTCRtpEncodingParameters() noexcept: RTCRtpCodingParameters(emlite::Val::object()) {}
RTCRtpEncodingParameters RTCRtpEncodingParameters::clone() const noexcept { return *this; }

bool RTCRtpEncodingParameters::active() const {
    return emlite::Val::get("active").as<bool>();
}

void RTCRtpEncodingParameters::active(bool value) {
    emlite::Val::set("active", value);
}

RTCRtpCodec RTCRtpEncodingParameters::codec() const {
    return emlite::Val::get("codec").as<RTCRtpCodec>();
}

void RTCRtpEncodingParameters::codec(const RTCRtpCodec& value) {
    emlite::Val::set("codec", value);
}

unsigned long RTCRtpEncodingParameters::maxBitrate() const {
    return emlite::Val::get("maxBitrate").as<unsigned long>();
}

void RTCRtpEncodingParameters::maxBitrate(unsigned long value) {
    emlite::Val::set("maxBitrate", value);
}

double RTCRtpEncodingParameters::maxFramerate() const {
    return emlite::Val::get("maxFramerate").as<double>();
}

void RTCRtpEncodingParameters::maxFramerate(double value) {
    emlite::Val::set("maxFramerate", value);
}

double RTCRtpEncodingParameters::scaleResolutionDownBy() const {
    return emlite::Val::get("scaleResolutionDownBy").as<double>();
}

void RTCRtpEncodingParameters::scaleResolutionDownBy(double value) {
    emlite::Val::set("scaleResolutionDownBy", value);
}


} // namespace webbind