#include "webbind/AdAuctionDataConfig.hpp"
#include "webbind/AdAuctionOneSeller.hpp"
#include "webbind/AdAuctionDataBuyerConfig.hpp"

using emlite::Val;
namespace webbind {

AdAuctionDataConfig::AdAuctionDataConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AdAuctionDataConfig AdAuctionDataConfig::take_ownership(Handle h) noexcept {
        return AdAuctionDataConfig(h);
    }
AdAuctionDataConfig::AdAuctionDataConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
AdAuctionDataConfig::AdAuctionDataConfig() noexcept: emlite::Val(emlite::Val::object()) {}
AdAuctionDataConfig AdAuctionDataConfig::clone() const noexcept { return *this; }

jsbind::String AdAuctionDataConfig::seller() const {
    return emlite::Val::get("seller").as<jsbind::String>();
}

void AdAuctionDataConfig::seller(const jsbind::String& value) {
    emlite::Val::set("seller", value);
}

jsbind::String AdAuctionDataConfig::coordinatorOrigin() const {
    return emlite::Val::get("coordinatorOrigin").as<jsbind::String>();
}

void AdAuctionDataConfig::coordinatorOrigin(const jsbind::String& value) {
    emlite::Val::set("coordinatorOrigin", value);
}

jsbind::TypedArray<AdAuctionOneSeller> AdAuctionDataConfig::sellers() const {
    return emlite::Val::get("sellers").as<jsbind::TypedArray<AdAuctionOneSeller>>();
}

void AdAuctionDataConfig::sellers(const jsbind::TypedArray<AdAuctionOneSeller>& value) {
    emlite::Val::set("sellers", value);
}

unsigned long AdAuctionDataConfig::requestSize() const {
    return emlite::Val::get("requestSize").as<unsigned long>();
}

void AdAuctionDataConfig::requestSize(unsigned long value) {
    emlite::Val::set("requestSize", value);
}

jsbind::Record<jsbind::String, AdAuctionDataBuyerConfig> AdAuctionDataConfig::perBuyerConfig() const {
    return emlite::Val::get("perBuyerConfig").as<jsbind::Record<jsbind::String, AdAuctionDataBuyerConfig>>();
}

void AdAuctionDataConfig::perBuyerConfig(const jsbind::Record<jsbind::String, AdAuctionDataBuyerConfig>& value) {
    emlite::Val::set("perBuyerConfig", value);
}


} // namespace webbind