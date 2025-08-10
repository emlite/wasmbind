#include <webbind/GenerateBidOutput.hpp>

namespace webbind {

GenerateBidOutput::GenerateBidOutput(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GenerateBidOutput GenerateBidOutput::take_ownership(Handle h) noexcept {
    return GenerateBidOutput(h);
}

GenerateBidOutput::GenerateBidOutput(const emlite::Val &val) noexcept: emlite::Val(val) {}

GenerateBidOutput::GenerateBidOutput() noexcept: emlite::Val(emlite::Val::object()) {}

GenerateBidOutput GenerateBidOutput::clone() const noexcept { return *this; }

double GenerateBidOutput::bid() const {
    return emlite::Val::get("bid").as<double>();
}

void GenerateBidOutput::bid(double value) {
    emlite::Val::set("bid", value);
}

jsbind::String GenerateBidOutput::bidCurrency() const {
    return emlite::Val::get("bidCurrency").as<jsbind::String>();
}

void GenerateBidOutput::bidCurrency(const jsbind::String& value) {
    emlite::Val::set("bidCurrency", value);
}

jsbind::Any GenerateBidOutput::render() const {
    return emlite::Val::get("render").as<jsbind::Any>();
}

void GenerateBidOutput::render(const jsbind::Any& value) {
    emlite::Val::set("render", value);
}

jsbind::Any GenerateBidOutput::ad() const {
    return emlite::Val::get("ad").as<jsbind::Any>();
}

void GenerateBidOutput::ad(const jsbind::Any& value) {
    emlite::Val::set("ad", value);
}

jsbind::String GenerateBidOutput::selectedBuyerAndSellerReportingId() const {
    return emlite::Val::get("selectedBuyerAndSellerReportingId").as<jsbind::String>();
}

void GenerateBidOutput::selectedBuyerAndSellerReportingId(const jsbind::String& value) {
    emlite::Val::set("selectedBuyerAndSellerReportingId", value);
}

jsbind::TypedArray<jsbind::Any> GenerateBidOutput::adComponents() const {
    return emlite::Val::get("adComponents").as<jsbind::TypedArray<jsbind::Any>>();
}

void GenerateBidOutput::adComponents(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("adComponents", value);
}

double GenerateBidOutput::adCost() const {
    return emlite::Val::get("adCost").as<double>();
}

void GenerateBidOutput::adCost(double value) {
    emlite::Val::set("adCost", value);
}

double GenerateBidOutput::modelingSignals() const {
    return emlite::Val::get("modelingSignals").as<double>();
}

void GenerateBidOutput::modelingSignals(double value) {
    emlite::Val::set("modelingSignals", value);
}

bool GenerateBidOutput::allowComponentAuction() const {
    return emlite::Val::get("allowComponentAuction").as<bool>();
}

void GenerateBidOutput::allowComponentAuction(bool value) {
    emlite::Val::set("allowComponentAuction", value);
}

unsigned long GenerateBidOutput::targetNumAdComponents() const {
    return emlite::Val::get("targetNumAdComponents").as<unsigned long>();
}

void GenerateBidOutput::targetNumAdComponents(unsigned long value) {
    emlite::Val::set("targetNumAdComponents", value);
}

unsigned long GenerateBidOutput::numMandatoryAdComponents() const {
    return emlite::Val::get("numMandatoryAdComponents").as<unsigned long>();
}

void GenerateBidOutput::numMandatoryAdComponents(unsigned long value) {
    emlite::Val::set("numMandatoryAdComponents", value);
}


} // namespace webbind