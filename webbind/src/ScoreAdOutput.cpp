#include "webbind/ScoreAdOutput.hpp"

using emlite::Val;
namespace webbind {

ScoreAdOutput::ScoreAdOutput(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ScoreAdOutput ScoreAdOutput::take_ownership(Handle h) noexcept {
        return ScoreAdOutput(h);
    }
ScoreAdOutput::ScoreAdOutput(const emlite::Val &val) noexcept: emlite::Val(val) {}
ScoreAdOutput::ScoreAdOutput() noexcept: emlite::Val(emlite::Val::object()) {}
ScoreAdOutput ScoreAdOutput::clone() const noexcept { return *this; }

double ScoreAdOutput::desirability() const {
    return emlite::Val::get("desirability").as<double>();
}

void ScoreAdOutput::desirability(double value) {
    emlite::Val::set("desirability", value);
}

double ScoreAdOutput::bid() const {
    return emlite::Val::get("bid").as<double>();
}

void ScoreAdOutput::bid(double value) {
    emlite::Val::set("bid", value);
}

jsbind::String ScoreAdOutput::bidCurrency() const {
    return emlite::Val::get("bidCurrency").as<jsbind::String>();
}

void ScoreAdOutput::bidCurrency(const jsbind::String& value) {
    emlite::Val::set("bidCurrency", value);
}

double ScoreAdOutput::incomingBidInSellerCurrency() const {
    return emlite::Val::get("incomingBidInSellerCurrency").as<double>();
}

void ScoreAdOutput::incomingBidInSellerCurrency(double value) {
    emlite::Val::set("incomingBidInSellerCurrency", value);
}

bool ScoreAdOutput::allowComponentAuction() const {
    return emlite::Val::get("allowComponentAuction").as<bool>();
}

void ScoreAdOutput::allowComponentAuction(bool value) {
    emlite::Val::set("allowComponentAuction", value);
}


} // namespace webbind