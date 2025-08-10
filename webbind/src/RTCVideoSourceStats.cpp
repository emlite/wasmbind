#include <webbind/RTCVideoSourceStats.hpp>

namespace webbind {

RTCVideoSourceStats::RTCVideoSourceStats(Handle h) noexcept : RTCMediaSourceStats(emlite::Val::take_ownership(h)) {}
RTCVideoSourceStats RTCVideoSourceStats::take_ownership(Handle h) noexcept {
    return RTCVideoSourceStats(h);
}

RTCVideoSourceStats::RTCVideoSourceStats(const emlite::Val &val) noexcept: RTCMediaSourceStats(val) {}

RTCVideoSourceStats::RTCVideoSourceStats() noexcept: RTCMediaSourceStats(emlite::Val::object()) {}

RTCVideoSourceStats RTCVideoSourceStats::clone() const noexcept { return *this; }

unsigned long RTCVideoSourceStats::width() const {
    return emlite::Val::get("width").as<unsigned long>();
}

void RTCVideoSourceStats::width(unsigned long value) {
    emlite::Val::set("width", value);
}

unsigned long RTCVideoSourceStats::height() const {
    return emlite::Val::get("height").as<unsigned long>();
}

void RTCVideoSourceStats::height(unsigned long value) {
    emlite::Val::set("height", value);
}

unsigned long RTCVideoSourceStats::frames() const {
    return emlite::Val::get("frames").as<unsigned long>();
}

void RTCVideoSourceStats::frames(unsigned long value) {
    emlite::Val::set("frames", value);
}

double RTCVideoSourceStats::framesPerSecond() const {
    return emlite::Val::get("framesPerSecond").as<double>();
}

void RTCVideoSourceStats::framesPerSecond(double value) {
    emlite::Val::set("framesPerSecond", value);
}


} // namespace webbind