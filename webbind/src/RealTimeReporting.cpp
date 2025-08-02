#include <webbind/RealTimeReporting.hpp>


RealTimeContribution::RealTimeContribution(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RealTimeContribution RealTimeContribution::take_ownership(Handle h) noexcept {
        return RealTimeContribution(h);
    }
RealTimeContribution::RealTimeContribution(const emlite::Val &val) noexcept: emlite::Val(val) {}
RealTimeContribution::RealTimeContribution() noexcept: emlite::Val(emlite::Val::object()) {}
RealTimeContribution RealTimeContribution::clone() const noexcept { return *this; }

long RealTimeContribution::bucket() const {
    return emlite::Val::get("bucket").as<long>();
}

void RealTimeContribution::bucket(long value) {
    emlite::Val::set("bucket", value);
}

double RealTimeContribution::priorityWeight() const {
    return emlite::Val::get("priorityWeight").as<double>();
}

void RealTimeContribution::priorityWeight(double value) {
    emlite::Val::set("priorityWeight", value);
}

long RealTimeContribution::latencyThreshold() const {
    return emlite::Val::get("latencyThreshold").as<long>();
}

void RealTimeContribution::latencyThreshold(long value) {
    emlite::Val::set("latencyThreshold", value);
}

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

