#include <webbind/ReportingBrowserSignals.hpp>

namespace webbind {

ReportingBrowserSignals::ReportingBrowserSignals(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReportingBrowserSignals ReportingBrowserSignals::take_ownership(Handle h) noexcept {
    return ReportingBrowserSignals(h);
}

ReportingBrowserSignals::ReportingBrowserSignals(const emlite::Val &val) noexcept: emlite::Val(val) {}

ReportingBrowserSignals::ReportingBrowserSignals() noexcept: emlite::Val(emlite::Val::object()) {}

ReportingBrowserSignals ReportingBrowserSignals::clone() const noexcept { return *this; }

jsbind::String ReportingBrowserSignals::topWindowHostname() const {
    return emlite::Val::get("topWindowHostname").as<jsbind::String>();
}

void ReportingBrowserSignals::topWindowHostname(const jsbind::String& value) {
    emlite::Val::set("topWindowHostname", value);
}

jsbind::String ReportingBrowserSignals::interestGroupOwner() const {
    return emlite::Val::get("interestGroupOwner").as<jsbind::String>();
}

void ReportingBrowserSignals::interestGroupOwner(const jsbind::String& value) {
    emlite::Val::set("interestGroupOwner", value);
}

jsbind::String ReportingBrowserSignals::renderURL() const {
    return emlite::Val::get("renderURL").as<jsbind::String>();
}

void ReportingBrowserSignals::renderURL(const jsbind::String& value) {
    emlite::Val::set("renderURL", value);
}

double ReportingBrowserSignals::bid() const {
    return emlite::Val::get("bid").as<double>();
}

void ReportingBrowserSignals::bid(double value) {
    emlite::Val::set("bid", value);
}

double ReportingBrowserSignals::highestScoringOtherBid() const {
    return emlite::Val::get("highestScoringOtherBid").as<double>();
}

void ReportingBrowserSignals::highestScoringOtherBid(double value) {
    emlite::Val::set("highestScoringOtherBid", value);
}

jsbind::String ReportingBrowserSignals::bidCurrency() const {
    return emlite::Val::get("bidCurrency").as<jsbind::String>();
}

void ReportingBrowserSignals::bidCurrency(const jsbind::String& value) {
    emlite::Val::set("bidCurrency", value);
}

jsbind::String ReportingBrowserSignals::highestScoringOtherBidCurrency() const {
    return emlite::Val::get("highestScoringOtherBidCurrency").as<jsbind::String>();
}

void ReportingBrowserSignals::highestScoringOtherBidCurrency(const jsbind::String& value) {
    emlite::Val::set("highestScoringOtherBidCurrency", value);
}

jsbind::String ReportingBrowserSignals::topLevelSeller() const {
    return emlite::Val::get("topLevelSeller").as<jsbind::String>();
}

void ReportingBrowserSignals::topLevelSeller(const jsbind::String& value) {
    emlite::Val::set("topLevelSeller", value);
}

jsbind::String ReportingBrowserSignals::componentSeller() const {
    return emlite::Val::get("componentSeller").as<jsbind::String>();
}

void ReportingBrowserSignals::componentSeller(const jsbind::String& value) {
    emlite::Val::set("componentSeller", value);
}

jsbind::String ReportingBrowserSignals::buyerAndSellerReportingId() const {
    return emlite::Val::get("buyerAndSellerReportingId").as<jsbind::String>();
}

void ReportingBrowserSignals::buyerAndSellerReportingId(const jsbind::String& value) {
    emlite::Val::set("buyerAndSellerReportingId", value);
}

jsbind::String ReportingBrowserSignals::selectedBuyerAndSellerReportingId() const {
    return emlite::Val::get("selectedBuyerAndSellerReportingId").as<jsbind::String>();
}

void ReportingBrowserSignals::selectedBuyerAndSellerReportingId(const jsbind::String& value) {
    emlite::Val::set("selectedBuyerAndSellerReportingId", value);
}


} // namespace webbind