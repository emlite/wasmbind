#include "webbind/PAHistogramContribution.hpp"

using emlite::Val;
namespace webbind {

PAHistogramContribution::PAHistogramContribution(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PAHistogramContribution PAHistogramContribution::take_ownership(Handle h) noexcept {
        return PAHistogramContribution(h);
    }
PAHistogramContribution::PAHistogramContribution(const emlite::Val &val) noexcept: emlite::Val(val) {}
PAHistogramContribution::PAHistogramContribution() noexcept: emlite::Val(emlite::Val::object()) {}
PAHistogramContribution PAHistogramContribution::clone() const noexcept { return *this; }

long long PAHistogramContribution::bucket() const {
    return emlite::Val::get("bucket").as<long long>();
}

void PAHistogramContribution::bucket(long long value) {
    emlite::Val::set("bucket", value);
}

long PAHistogramContribution::value() const {
    return emlite::Val::get("value").as<long>();
}

void PAHistogramContribution::value(long value) {
    emlite::Val::set("value", value);
}

long long PAHistogramContribution::filteringId() const {
    return emlite::Val::get("filteringId").as<long long>();
}

void PAHistogramContribution::filteringId(long long value) {
    emlite::Val::set("filteringId", value);
}


} // namespace webbind