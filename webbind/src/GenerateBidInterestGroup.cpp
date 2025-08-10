#include <webbind/GenerateBidInterestGroup.hpp>
#include <webbind/AuctionAd.hpp>
#include <webbind/AuctionAdInterestGroupSize.hpp>

namespace webbind {

GenerateBidInterestGroup::GenerateBidInterestGroup(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GenerateBidInterestGroup GenerateBidInterestGroup::take_ownership(Handle h) noexcept {
    return GenerateBidInterestGroup(h);
}

GenerateBidInterestGroup::GenerateBidInterestGroup(const emlite::Val &val) noexcept: emlite::Val(val) {}

GenerateBidInterestGroup::GenerateBidInterestGroup() noexcept: emlite::Val(emlite::Val::object()) {}

GenerateBidInterestGroup GenerateBidInterestGroup::clone() const noexcept { return *this; }

jsbind::String GenerateBidInterestGroup::owner() const {
    return emlite::Val::get("owner").as<jsbind::String>();
}

void GenerateBidInterestGroup::owner(const jsbind::String& value) {
    emlite::Val::set("owner", value);
}

jsbind::String GenerateBidInterestGroup::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void GenerateBidInterestGroup::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

bool GenerateBidInterestGroup::enableBiddingSignalsPrioritization() const {
    return emlite::Val::get("enableBiddingSignalsPrioritization").as<bool>();
}

void GenerateBidInterestGroup::enableBiddingSignalsPrioritization(bool value) {
    emlite::Val::set("enableBiddingSignalsPrioritization", value);
}

jsbind::Record<jsbind::String, double> GenerateBidInterestGroup::priorityVector() const {
    return emlite::Val::get("priorityVector").as<jsbind::Record<jsbind::String, double>>();
}

void GenerateBidInterestGroup::priorityVector(jsbind::Record<jsbind::String, double> value) {
    emlite::Val::set("priorityVector", value);
}

jsbind::Record<jsbind::String, jsbind::TypedArray<jsbind::String>> GenerateBidInterestGroup::sellerCapabilities() const {
    return emlite::Val::get("sellerCapabilities").as<jsbind::Record<jsbind::String, jsbind::TypedArray<jsbind::String>>>();
}

void GenerateBidInterestGroup::sellerCapabilities(const jsbind::Record<jsbind::String, jsbind::TypedArray<jsbind::String>>& value) {
    emlite::Val::set("sellerCapabilities", value);
}

jsbind::String GenerateBidInterestGroup::executionMode() const {
    return emlite::Val::get("executionMode").as<jsbind::String>();
}

void GenerateBidInterestGroup::executionMode(const jsbind::String& value) {
    emlite::Val::set("executionMode", value);
}

jsbind::String GenerateBidInterestGroup::biddingLogicURL() const {
    return emlite::Val::get("biddingLogicURL").as<jsbind::String>();
}

void GenerateBidInterestGroup::biddingLogicURL(const jsbind::String& value) {
    emlite::Val::set("biddingLogicURL", value);
}

jsbind::String GenerateBidInterestGroup::biddingWasmHelperURL() const {
    return emlite::Val::get("biddingWasmHelperURL").as<jsbind::String>();
}

void GenerateBidInterestGroup::biddingWasmHelperURL(const jsbind::String& value) {
    emlite::Val::set("biddingWasmHelperURL", value);
}

jsbind::String GenerateBidInterestGroup::updateURL() const {
    return emlite::Val::get("updateURL").as<jsbind::String>();
}

void GenerateBidInterestGroup::updateURL(const jsbind::String& value) {
    emlite::Val::set("updateURL", value);
}

jsbind::String GenerateBidInterestGroup::trustedBiddingSignalsURL() const {
    return emlite::Val::get("trustedBiddingSignalsURL").as<jsbind::String>();
}

void GenerateBidInterestGroup::trustedBiddingSignalsURL(const jsbind::String& value) {
    emlite::Val::set("trustedBiddingSignalsURL", value);
}

jsbind::TypedArray<jsbind::String> GenerateBidInterestGroup::trustedBiddingSignalsKeys() const {
    return emlite::Val::get("trustedBiddingSignalsKeys").as<jsbind::TypedArray<jsbind::String>>();
}

void GenerateBidInterestGroup::trustedBiddingSignalsKeys(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("trustedBiddingSignalsKeys", value);
}

jsbind::String GenerateBidInterestGroup::trustedBiddingSignalsSlotSizeMode() const {
    return emlite::Val::get("trustedBiddingSignalsSlotSizeMode").as<jsbind::String>();
}

void GenerateBidInterestGroup::trustedBiddingSignalsSlotSizeMode(const jsbind::String& value) {
    emlite::Val::set("trustedBiddingSignalsSlotSizeMode", value);
}

long GenerateBidInterestGroup::maxTrustedBiddingSignalsURLLength() const {
    return emlite::Val::get("maxTrustedBiddingSignalsURLLength").as<long>();
}

void GenerateBidInterestGroup::maxTrustedBiddingSignalsURLLength(long value) {
    emlite::Val::set("maxTrustedBiddingSignalsURLLength", value);
}

jsbind::String GenerateBidInterestGroup::trustedBiddingSignalsCoordinator() const {
    return emlite::Val::get("trustedBiddingSignalsCoordinator").as<jsbind::String>();
}

void GenerateBidInterestGroup::trustedBiddingSignalsCoordinator(const jsbind::String& value) {
    emlite::Val::set("trustedBiddingSignalsCoordinator", value);
}

jsbind::Any GenerateBidInterestGroup::userBiddingSignals() const {
    return emlite::Val::get("userBiddingSignals").as<jsbind::Any>();
}

void GenerateBidInterestGroup::userBiddingSignals(const jsbind::Any& value) {
    emlite::Val::set("userBiddingSignals", value);
}

jsbind::TypedArray<AuctionAd> GenerateBidInterestGroup::ads() const {
    return emlite::Val::get("ads").as<jsbind::TypedArray<AuctionAd>>();
}

void GenerateBidInterestGroup::ads(const jsbind::TypedArray<AuctionAd>& value) {
    emlite::Val::set("ads", value);
}

jsbind::TypedArray<AuctionAd> GenerateBidInterestGroup::adComponents() const {
    return emlite::Val::get("adComponents").as<jsbind::TypedArray<AuctionAd>>();
}

void GenerateBidInterestGroup::adComponents(const jsbind::TypedArray<AuctionAd>& value) {
    emlite::Val::set("adComponents", value);
}

jsbind::Record<jsbind::String, AuctionAdInterestGroupSize> GenerateBidInterestGroup::adSizes() const {
    return emlite::Val::get("adSizes").as<jsbind::Record<jsbind::String, AuctionAdInterestGroupSize>>();
}

void GenerateBidInterestGroup::adSizes(const jsbind::Record<jsbind::String, AuctionAdInterestGroupSize>& value) {
    emlite::Val::set("adSizes", value);
}

jsbind::Record<jsbind::String, jsbind::TypedArray<jsbind::String>> GenerateBidInterestGroup::sizeGroups() const {
    return emlite::Val::get("sizeGroups").as<jsbind::Record<jsbind::String, jsbind::TypedArray<jsbind::String>>>();
}

void GenerateBidInterestGroup::sizeGroups(const jsbind::Record<jsbind::String, jsbind::TypedArray<jsbind::String>>& value) {
    emlite::Val::set("sizeGroups", value);
}


} // namespace webbind