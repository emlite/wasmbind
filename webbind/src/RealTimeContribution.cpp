#include <webbind/RealTimeContribution.hpp>

using emlite::Val;
namespace webbind {

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


} // namespace webbind