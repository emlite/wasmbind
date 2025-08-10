#include <webbind/ReportResultBrowserSignals.hpp>

namespace webbind {

ReportResultBrowserSignals::ReportResultBrowserSignals(Handle h) noexcept : ReportingBrowserSignals(emlite::Val::take_ownership(h)) {}
ReportResultBrowserSignals ReportResultBrowserSignals::take_ownership(Handle h) noexcept {
    return ReportResultBrowserSignals(h);
}

ReportResultBrowserSignals::ReportResultBrowserSignals(const emlite::Val &val) noexcept: ReportingBrowserSignals(val) {}

ReportResultBrowserSignals::ReportResultBrowserSignals() noexcept: ReportingBrowserSignals(emlite::Val::object()) {}

ReportResultBrowserSignals ReportResultBrowserSignals::clone() const noexcept { return *this; }

double ReportResultBrowserSignals::desirability() const {
    return emlite::Val::get("desirability").as<double>();
}

void ReportResultBrowserSignals::desirability(double value) {
    emlite::Val::set("desirability", value);
}

jsbind::String ReportResultBrowserSignals::topLevelSellerSignals() const {
    return emlite::Val::get("topLevelSellerSignals").as<jsbind::String>();
}

void ReportResultBrowserSignals::topLevelSellerSignals(const jsbind::String& value) {
    emlite::Val::set("topLevelSellerSignals", value);
}

double ReportResultBrowserSignals::modifiedBid() const {
    return emlite::Val::get("modifiedBid").as<double>();
}

void ReportResultBrowserSignals::modifiedBid(double value) {
    emlite::Val::set("modifiedBid", value);
}

unsigned long ReportResultBrowserSignals::dataVersion() const {
    return emlite::Val::get("dataVersion").as<unsigned long>();
}

void ReportResultBrowserSignals::dataVersion(unsigned long value) {
    emlite::Val::set("dataVersion", value);
}


} // namespace webbind