#include <webbind/RTCCodecStats.hpp>

using emlite::Val;
namespace webbind {

RTCCodecStats::RTCCodecStats(Handle h) noexcept : RTCStats(emlite::Val::take_ownership(h)) {}
RTCCodecStats RTCCodecStats::take_ownership(Handle h) noexcept {
        return RTCCodecStats(h);
    }
RTCCodecStats::RTCCodecStats(const emlite::Val &val) noexcept: RTCStats(val) {}
RTCCodecStats::RTCCodecStats() noexcept: RTCStats(emlite::Val::object()) {}
RTCCodecStats RTCCodecStats::clone() const noexcept { return *this; }

unsigned long RTCCodecStats::payloadType() const {
    return emlite::Val::get("payloadType").as<unsigned long>();
}

void RTCCodecStats::payloadType(unsigned long value) {
    emlite::Val::set("payloadType", value);
}

jsbind::String RTCCodecStats::transportId() const {
    return emlite::Val::get("transportId").as<jsbind::String>();
}

void RTCCodecStats::transportId(const jsbind::String& value) {
    emlite::Val::set("transportId", value);
}

jsbind::String RTCCodecStats::mimeType() const {
    return emlite::Val::get("mimeType").as<jsbind::String>();
}

void RTCCodecStats::mimeType(const jsbind::String& value) {
    emlite::Val::set("mimeType", value);
}

unsigned long RTCCodecStats::clockRate() const {
    return emlite::Val::get("clockRate").as<unsigned long>();
}

void RTCCodecStats::clockRate(unsigned long value) {
    emlite::Val::set("clockRate", value);
}

unsigned long RTCCodecStats::channels() const {
    return emlite::Val::get("channels").as<unsigned long>();
}

void RTCCodecStats::channels(unsigned long value) {
    emlite::Val::set("channels", value);
}

jsbind::String RTCCodecStats::sdpFmtpLine() const {
    return emlite::Val::get("sdpFmtpLine").as<jsbind::String>();
}

void RTCCodecStats::sdpFmtpLine(const jsbind::String& value) {
    emlite::Val::set("sdpFmtpLine", value);
}


} // namespace webbind