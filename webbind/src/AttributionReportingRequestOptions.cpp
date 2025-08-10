#include <webbind/AttributionReportingRequestOptions.hpp>

namespace webbind {

AttributionReportingRequestOptions::AttributionReportingRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AttributionReportingRequestOptions AttributionReportingRequestOptions::take_ownership(Handle h) noexcept {
    return AttributionReportingRequestOptions(h);
}

AttributionReportingRequestOptions::AttributionReportingRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

AttributionReportingRequestOptions::AttributionReportingRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}

AttributionReportingRequestOptions AttributionReportingRequestOptions::clone() const noexcept { return *this; }

bool AttributionReportingRequestOptions::eventSourceEligible() const {
    return emlite::Val::get("eventSourceEligible").as<bool>();
}

void AttributionReportingRequestOptions::eventSourceEligible(bool value) {
    emlite::Val::set("eventSourceEligible", value);
}

bool AttributionReportingRequestOptions::triggerEligible() const {
    return emlite::Val::get("triggerEligible").as<bool>();
}

void AttributionReportingRequestOptions::triggerEligible(bool value) {
    emlite::Val::set("triggerEligible", value);
}


} // namespace webbind