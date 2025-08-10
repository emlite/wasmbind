#include <webbind/RTCRtpStreamStats.hpp>

namespace webbind {

RTCRtpStreamStats::RTCRtpStreamStats(Handle h) noexcept : RTCStats(emlite::Val::take_ownership(h)) {}
RTCRtpStreamStats RTCRtpStreamStats::take_ownership(Handle h) noexcept {
    return RTCRtpStreamStats(h);
}

RTCRtpStreamStats::RTCRtpStreamStats(const emlite::Val &val) noexcept: RTCStats(val) {}

RTCRtpStreamStats::RTCRtpStreamStats() noexcept: RTCStats(emlite::Val::object()) {}

RTCRtpStreamStats RTCRtpStreamStats::clone() const noexcept { return *this; }

unsigned long RTCRtpStreamStats::ssrc() const {
    return emlite::Val::get("ssrc").as<unsigned long>();
}

void RTCRtpStreamStats::ssrc(unsigned long value) {
    emlite::Val::set("ssrc", value);
}

jsbind::String RTCRtpStreamStats::kind() const {
    return emlite::Val::get("kind").as<jsbind::String>();
}

void RTCRtpStreamStats::kind(const jsbind::String& value) {
    emlite::Val::set("kind", value);
}

jsbind::String RTCRtpStreamStats::transportId() const {
    return emlite::Val::get("transportId").as<jsbind::String>();
}

void RTCRtpStreamStats::transportId(const jsbind::String& value) {
    emlite::Val::set("transportId", value);
}

jsbind::String RTCRtpStreamStats::codecId() const {
    return emlite::Val::get("codecId").as<jsbind::String>();
}

void RTCRtpStreamStats::codecId(const jsbind::String& value) {
    emlite::Val::set("codecId", value);
}


} // namespace webbind