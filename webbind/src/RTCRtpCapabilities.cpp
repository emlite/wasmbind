#include "webbind/RTCRtpCapabilities.hpp"
#include "webbind/RTCRtpCodec.hpp"
#include "webbind/RTCRtpHeaderExtensionCapability.hpp"

using emlite::Val;
namespace webbind {

RTCRtpCapabilities::RTCRtpCapabilities(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpCapabilities RTCRtpCapabilities::take_ownership(Handle h) noexcept {
        return RTCRtpCapabilities(h);
    }
RTCRtpCapabilities::RTCRtpCapabilities(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCRtpCapabilities::RTCRtpCapabilities() noexcept: emlite::Val(emlite::Val::object()) {}
RTCRtpCapabilities RTCRtpCapabilities::clone() const noexcept { return *this; }

jsbind::TypedArray<RTCRtpCodec> RTCRtpCapabilities::codecs() const {
    return emlite::Val::get("codecs").as<jsbind::TypedArray<RTCRtpCodec>>();
}

void RTCRtpCapabilities::codecs(const jsbind::TypedArray<RTCRtpCodec>& value) {
    emlite::Val::set("codecs", value);
}

jsbind::TypedArray<RTCRtpHeaderExtensionCapability> RTCRtpCapabilities::headerExtensions() const {
    return emlite::Val::get("headerExtensions").as<jsbind::TypedArray<RTCRtpHeaderExtensionCapability>>();
}

void RTCRtpCapabilities::headerExtensions(const jsbind::TypedArray<RTCRtpHeaderExtensionCapability>& value) {
    emlite::Val::set("headerExtensions", value);
}


} // namespace webbind