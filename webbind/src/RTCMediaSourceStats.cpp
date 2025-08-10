#include <webbind/RTCMediaSourceStats.hpp>

using emlite::Val;
namespace webbind {

RTCMediaSourceStats::RTCMediaSourceStats(Handle h) noexcept : RTCStats(emlite::Val::take_ownership(h)) {}
RTCMediaSourceStats RTCMediaSourceStats::take_ownership(Handle h) noexcept {
        return RTCMediaSourceStats(h);
    }
RTCMediaSourceStats::RTCMediaSourceStats(const emlite::Val &val) noexcept: RTCStats(val) {}
RTCMediaSourceStats::RTCMediaSourceStats() noexcept: RTCStats(emlite::Val::object()) {}
RTCMediaSourceStats RTCMediaSourceStats::clone() const noexcept { return *this; }

jsbind::String RTCMediaSourceStats::trackIdentifier() const {
    return emlite::Val::get("trackIdentifier").as<jsbind::String>();
}

void RTCMediaSourceStats::trackIdentifier(const jsbind::String& value) {
    emlite::Val::set("trackIdentifier", value);
}

jsbind::String RTCMediaSourceStats::kind() const {
    return emlite::Val::get("kind").as<jsbind::String>();
}

void RTCMediaSourceStats::kind(const jsbind::String& value) {
    emlite::Val::set("kind", value);
}


} // namespace webbind