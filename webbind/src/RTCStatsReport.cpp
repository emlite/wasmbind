#include <webbind/RTCStatsReport.hpp>

namespace webbind {

RTCStatsReport RTCStatsReport::take_ownership(Handle h) noexcept {
        return RTCStatsReport(h);
    }
RTCStatsReport RTCStatsReport::clone() const noexcept { return *this; }
emlite::Val RTCStatsReport::instance() noexcept { return emlite::Val::global("RTCStatsReport"); }
RTCStatsReport::RTCStatsReport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCStatsReport::RTCStatsReport(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind