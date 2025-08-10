#include <webbind/RTCStats.hpp>

using emlite::Val;
namespace webbind {

RTCStats::RTCStats(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCStats RTCStats::take_ownership(Handle h) noexcept {
        return RTCStats(h);
    }
RTCStats::RTCStats(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCStats::RTCStats() noexcept: emlite::Val(emlite::Val::object()) {}
RTCStats RTCStats::clone() const noexcept { return *this; }

jsbind::Any RTCStats::timestamp() const {
    return emlite::Val::get("timestamp").as<jsbind::Any>();
}

void RTCStats::timestamp(const jsbind::Any& value) {
    emlite::Val::set("timestamp", value);
}

RTCStatsType RTCStats::type() const {
    return emlite::Val::get("type").as<RTCStatsType>();
}

void RTCStats::type(const RTCStatsType& value) {
    emlite::Val::set("type", value);
}

jsbind::String RTCStats::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void RTCStats::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}


} // namespace webbind