#include <webbind/AdAuctionDataBuyerConfig.hpp>

namespace webbind {

AdAuctionDataBuyerConfig::AdAuctionDataBuyerConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AdAuctionDataBuyerConfig AdAuctionDataBuyerConfig::take_ownership(Handle h) noexcept {
    return AdAuctionDataBuyerConfig(h);
}

AdAuctionDataBuyerConfig::AdAuctionDataBuyerConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}

AdAuctionDataBuyerConfig::AdAuctionDataBuyerConfig() noexcept: emlite::Val(emlite::Val::object()) {}

AdAuctionDataBuyerConfig AdAuctionDataBuyerConfig::clone() const noexcept { return *this; }

unsigned long AdAuctionDataBuyerConfig::targetSize() const {
    return emlite::Val::get("targetSize").as<unsigned long>();
}

void AdAuctionDataBuyerConfig::targetSize(unsigned long value) {
    emlite::Val::set("targetSize", value);
}


} // namespace webbind