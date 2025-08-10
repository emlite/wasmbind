#include <webbind/RTCRtpHeaderExtensionCapability.hpp>

namespace webbind {

RTCRtpHeaderExtensionCapability::RTCRtpHeaderExtensionCapability(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpHeaderExtensionCapability RTCRtpHeaderExtensionCapability::take_ownership(Handle h) noexcept {
    return RTCRtpHeaderExtensionCapability(h);
}

RTCRtpHeaderExtensionCapability::RTCRtpHeaderExtensionCapability(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCRtpHeaderExtensionCapability::RTCRtpHeaderExtensionCapability() noexcept: emlite::Val(emlite::Val::object()) {}

RTCRtpHeaderExtensionCapability RTCRtpHeaderExtensionCapability::clone() const noexcept { return *this; }

jsbind::String RTCRtpHeaderExtensionCapability::uri() const {
    return emlite::Val::get("uri").as<jsbind::String>();
}

void RTCRtpHeaderExtensionCapability::uri(const jsbind::String& value) {
    emlite::Val::set("uri", value);
}


} // namespace webbind