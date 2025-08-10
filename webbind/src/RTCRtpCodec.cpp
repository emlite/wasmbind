#include <webbind/RTCRtpCodec.hpp>

using emlite::Val;
namespace webbind {

RTCRtpCodec::RTCRtpCodec(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCRtpCodec RTCRtpCodec::take_ownership(Handle h) noexcept {
        return RTCRtpCodec(h);
    }
RTCRtpCodec::RTCRtpCodec(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCRtpCodec::RTCRtpCodec() noexcept: emlite::Val(emlite::Val::object()) {}
RTCRtpCodec RTCRtpCodec::clone() const noexcept { return *this; }

jsbind::String RTCRtpCodec::mimeType() const {
    return emlite::Val::get("mimeType").as<jsbind::String>();
}

void RTCRtpCodec::mimeType(const jsbind::String& value) {
    emlite::Val::set("mimeType", value);
}

unsigned long RTCRtpCodec::clockRate() const {
    return emlite::Val::get("clockRate").as<unsigned long>();
}

void RTCRtpCodec::clockRate(unsigned long value) {
    emlite::Val::set("clockRate", value);
}

unsigned short RTCRtpCodec::channels() const {
    return emlite::Val::get("channels").as<unsigned short>();
}

void RTCRtpCodec::channels(unsigned short value) {
    emlite::Val::set("channels", value);
}

jsbind::String RTCRtpCodec::sdpFmtpLine() const {
    return emlite::Val::get("sdpFmtpLine").as<jsbind::String>();
}

void RTCRtpCodec::sdpFmtpLine(const jsbind::String& value) {
    emlite::Val::set("sdpFmtpLine", value);
}


} // namespace webbind