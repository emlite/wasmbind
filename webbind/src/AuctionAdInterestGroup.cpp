#include <webbind/AuctionAdInterestGroup.hpp>
#include <webbind/ProtectedAudiencePrivateAggregationConfig.hpp>

namespace webbind {

AuctionAdInterestGroup::AuctionAdInterestGroup(Handle h) noexcept : GenerateBidInterestGroup(emlite::Val::take_ownership(h)) {}
AuctionAdInterestGroup AuctionAdInterestGroup::take_ownership(Handle h) noexcept {
    return AuctionAdInterestGroup(h);
}

AuctionAdInterestGroup::AuctionAdInterestGroup(const emlite::Val &val) noexcept: GenerateBidInterestGroup(val) {}

AuctionAdInterestGroup::AuctionAdInterestGroup() noexcept: GenerateBidInterestGroup(emlite::Val::object()) {}

AuctionAdInterestGroup AuctionAdInterestGroup::clone() const noexcept { return *this; }

double AuctionAdInterestGroup::priority() const {
    return emlite::Val::get("priority").as<double>();
}

void AuctionAdInterestGroup::priority(double value) {
    emlite::Val::set("priority", value);
}

jsbind::Record<jsbind::String, double> AuctionAdInterestGroup::prioritySignalsOverrides() const {
    return emlite::Val::get("prioritySignalsOverrides").as<jsbind::Record<jsbind::String, double>>();
}

void AuctionAdInterestGroup::prioritySignalsOverrides(jsbind::Record<jsbind::String, double> value) {
    emlite::Val::set("prioritySignalsOverrides", value);
}

double AuctionAdInterestGroup::lifetimeMs() const {
    return emlite::Val::get("lifetimeMs").as<double>();
}

void AuctionAdInterestGroup::lifetimeMs(double value) {
    emlite::Val::set("lifetimeMs", value);
}

jsbind::String AuctionAdInterestGroup::additionalBidKey() const {
    return emlite::Val::get("additionalBidKey").as<jsbind::String>();
}

void AuctionAdInterestGroup::additionalBidKey(const jsbind::String& value) {
    emlite::Val::set("additionalBidKey", value);
}

ProtectedAudiencePrivateAggregationConfig AuctionAdInterestGroup::privateAggregationConfig() const {
    return emlite::Val::get("privateAggregationConfig").as<ProtectedAudiencePrivateAggregationConfig>();
}

void AuctionAdInterestGroup::privateAggregationConfig(const ProtectedAudiencePrivateAggregationConfig& value) {
    emlite::Val::set("privateAggregationConfig", value);
}


} // namespace webbind