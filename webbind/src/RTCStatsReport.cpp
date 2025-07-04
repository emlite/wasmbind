#include <webbind/RTCStatsReport.hpp>


RTCStatsReport RTCStatsReport::take_ownership(Handle h) noexcept {
        return RTCStatsReport(h);
    }
RTCStatsReport RTCStatsReport::clone() const noexcept { return *this; }
RTCStatsReport::RTCStatsReport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCStatsReport::RTCStatsReport(const emlite::Val &val) noexcept: emlite::Val(val) {}


