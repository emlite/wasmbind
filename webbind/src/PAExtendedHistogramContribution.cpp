#include <webbind/PAExtendedHistogramContribution.hpp>

using emlite::Val;
namespace webbind {

PAExtendedHistogramContribution::PAExtendedHistogramContribution(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PAExtendedHistogramContribution PAExtendedHistogramContribution::take_ownership(Handle h) noexcept {
        return PAExtendedHistogramContribution(h);
    }
PAExtendedHistogramContribution::PAExtendedHistogramContribution(const emlite::Val &val) noexcept: emlite::Val(val) {}
PAExtendedHistogramContribution::PAExtendedHistogramContribution() noexcept: emlite::Val(emlite::Val::object()) {}
PAExtendedHistogramContribution PAExtendedHistogramContribution::clone() const noexcept { return *this; }

jsbind::Any PAExtendedHistogramContribution::bucket() const {
    return emlite::Val::get("bucket").as<jsbind::Any>();
}

void PAExtendedHistogramContribution::bucket(const jsbind::Any& value) {
    emlite::Val::set("bucket", value);
}

jsbind::Any PAExtendedHistogramContribution::value() const {
    return emlite::Val::get("value").as<jsbind::Any>();
}

void PAExtendedHistogramContribution::value(const jsbind::Any& value) {
    emlite::Val::set("value", value);
}

long long PAExtendedHistogramContribution::filteringId() const {
    return emlite::Val::get("filteringId").as<long long>();
}

void PAExtendedHistogramContribution::filteringId(long long value) {
    emlite::Val::set("filteringId", value);
}


} // namespace webbind