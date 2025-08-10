#include <webbind/ReportWinBrowserSignals.hpp>

using emlite::Val;
namespace webbind {

ReportWinBrowserSignals::ReportWinBrowserSignals(Handle h) noexcept : ReportingBrowserSignals(emlite::Val::take_ownership(h)) {}
ReportWinBrowserSignals ReportWinBrowserSignals::take_ownership(Handle h) noexcept {
        return ReportWinBrowserSignals(h);
    }
ReportWinBrowserSignals::ReportWinBrowserSignals(const emlite::Val &val) noexcept: ReportingBrowserSignals(val) {}
ReportWinBrowserSignals::ReportWinBrowserSignals() noexcept: ReportingBrowserSignals(emlite::Val::object()) {}
ReportWinBrowserSignals ReportWinBrowserSignals::clone() const noexcept { return *this; }

double ReportWinBrowserSignals::adCost() const {
    return emlite::Val::get("adCost").as<double>();
}

void ReportWinBrowserSignals::adCost(double value) {
    emlite::Val::set("adCost", value);
}

jsbind::String ReportWinBrowserSignals::seller() const {
    return emlite::Val::get("seller").as<jsbind::String>();
}

void ReportWinBrowserSignals::seller(const jsbind::String& value) {
    emlite::Val::set("seller", value);
}

bool ReportWinBrowserSignals::madeHighestScoringOtherBid() const {
    return emlite::Val::get("madeHighestScoringOtherBid").as<bool>();
}

void ReportWinBrowserSignals::madeHighestScoringOtherBid(bool value) {
    emlite::Val::set("madeHighestScoringOtherBid", value);
}

jsbind::String ReportWinBrowserSignals::interestGroupName() const {
    return emlite::Val::get("interestGroupName").as<jsbind::String>();
}

void ReportWinBrowserSignals::interestGroupName(const jsbind::String& value) {
    emlite::Val::set("interestGroupName", value);
}

jsbind::String ReportWinBrowserSignals::buyerReportingId() const {
    return emlite::Val::get("buyerReportingId").as<jsbind::String>();
}

void ReportWinBrowserSignals::buyerReportingId(const jsbind::String& value) {
    emlite::Val::set("buyerReportingId", value);
}

unsigned short ReportWinBrowserSignals::modelingSignals() const {
    return emlite::Val::get("modelingSignals").as<unsigned short>();
}

void ReportWinBrowserSignals::modelingSignals(unsigned short value) {
    emlite::Val::set("modelingSignals", value);
}

unsigned long ReportWinBrowserSignals::dataVersion() const {
    return emlite::Val::get("dataVersion").as<unsigned long>();
}

void ReportWinBrowserSignals::dataVersion(unsigned long value) {
    emlite::Val::set("dataVersion", value);
}

KAnonStatus ReportWinBrowserSignals::kAnonStatus() const {
    return emlite::Val::get("kAnonStatus").as<KAnonStatus>();
}

void ReportWinBrowserSignals::kAnonStatus(const KAnonStatus& value) {
    emlite::Val::set("kAnonStatus", value);
}


} // namespace webbind