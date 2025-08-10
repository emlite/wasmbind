#include "webbind/RealTimeReporting.hpp"
#include "webbind/RealTimeContribution.hpp"

namespace webbind {

RealTimeReporting RealTimeReporting::take_ownership(Handle h) noexcept {
        return RealTimeReporting(h);
    }
RealTimeReporting RealTimeReporting::clone() const noexcept { return *this; }
emlite::Val RealTimeReporting::instance() noexcept { return emlite::Val::global("RealTimeReporting"); }
RealTimeReporting::RealTimeReporting(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RealTimeReporting::RealTimeReporting(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined RealTimeReporting::contributeToHistogram(const RealTimeContribution& contribution) {
    return emlite::Val::call("contributeToHistogram", contribution).as<jsbind::Undefined>();
}


} // namespace webbind