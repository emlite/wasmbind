#include <webbind/RTCRtpCodingParameters.hpp>

namespace webbind {

RTCRtpCodingParameters::RTCRtpCodingParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpCodingParameters RTCRtpCodingParameters::take_ownership(Handle h) noexcept {
    return RTCRtpCodingParameters(h);
}

RTCRtpCodingParameters::RTCRtpCodingParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCRtpCodingParameters::RTCRtpCodingParameters() noexcept: emlite::Val(emlite::Val::object()) {}

RTCRtpCodingParameters RTCRtpCodingParameters::clone() const noexcept { return *this; }

jsbind::String RTCRtpCodingParameters::rid() const {
    return emlite::Val::get("rid").as<jsbind::String>();
}

void RTCRtpCodingParameters::rid(const jsbind::String& value) {
    emlite::Val::set("rid", value);
}


} // namespace webbind