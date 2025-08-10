#include <webbind/RTCRtpHeaderExtensionParameters.hpp>

namespace webbind {

RTCRtpHeaderExtensionParameters::RTCRtpHeaderExtensionParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpHeaderExtensionParameters RTCRtpHeaderExtensionParameters::take_ownership(Handle h) noexcept {
    return RTCRtpHeaderExtensionParameters(h);
}

RTCRtpHeaderExtensionParameters::RTCRtpHeaderExtensionParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCRtpHeaderExtensionParameters::RTCRtpHeaderExtensionParameters() noexcept: emlite::Val(emlite::Val::object()) {}

RTCRtpHeaderExtensionParameters RTCRtpHeaderExtensionParameters::clone() const noexcept { return *this; }

jsbind::String RTCRtpHeaderExtensionParameters::uri() const {
    return emlite::Val::get("uri").as<jsbind::String>();
}

void RTCRtpHeaderExtensionParameters::uri(const jsbind::String& value) {
    emlite::Val::set("uri", value);
}

unsigned short RTCRtpHeaderExtensionParameters::id() const {
    return emlite::Val::get("id").as<unsigned short>();
}

void RTCRtpHeaderExtensionParameters::id(unsigned short value) {
    emlite::Val::set("id", value);
}

bool RTCRtpHeaderExtensionParameters::encrypted() const {
    return emlite::Val::get("encrypted").as<bool>();
}

void RTCRtpHeaderExtensionParameters::encrypted(bool value) {
    emlite::Val::set("encrypted", value);
}


} // namespace webbind