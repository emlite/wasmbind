#include <webbind/TimeRanges.hpp>


TimeRanges TimeRanges::take_ownership(Handle h) noexcept {
        return TimeRanges(h);
    }
TimeRanges TimeRanges::clone() const noexcept { return *this; }
emlite::Val TimeRanges::instance() noexcept { return emlite::Val::global("TimeRanges"); }
TimeRanges::TimeRanges(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TimeRanges::TimeRanges(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long TimeRanges::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

double TimeRanges::start(unsigned long index) {
    return emlite::Val::call("start", index).as<double>();
}

double TimeRanges::end(unsigned long index) {
    return emlite::Val::call("end", index).as<double>();
}

