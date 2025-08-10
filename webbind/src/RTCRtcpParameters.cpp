#include <webbind/RTCRtcpParameters.hpp>

namespace webbind {

RTCRtcpParameters::RTCRtcpParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtcpParameters RTCRtcpParameters::take_ownership(Handle h) noexcept {
    return RTCRtcpParameters(h);
}

RTCRtcpParameters::RTCRtcpParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCRtcpParameters::RTCRtcpParameters() noexcept: emlite::Val(emlite::Val::object()) {}

RTCRtcpParameters RTCRtcpParameters::clone() const noexcept { return *this; }

jsbind::String RTCRtcpParameters::cname() const {
    return emlite::Val::get("cname").as<jsbind::String>();
}

void RTCRtcpParameters::cname(const jsbind::String& value) {
    emlite::Val::set("cname", value);
}

bool RTCRtcpParameters::reducedSize() const {
    return emlite::Val::get("reducedSize").as<bool>();
}

void RTCRtcpParameters::reducedSize(bool value) {
    emlite::Val::set("reducedSize", value);
}


} // namespace webbind