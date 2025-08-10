#include <webbind/AuctionReportBuyerDebugModeConfig.hpp>

namespace webbind {

AuctionReportBuyerDebugModeConfig::AuctionReportBuyerDebugModeConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuctionReportBuyerDebugModeConfig AuctionReportBuyerDebugModeConfig::take_ownership(Handle h) noexcept {
    return AuctionReportBuyerDebugModeConfig(h);
}

AuctionReportBuyerDebugModeConfig::AuctionReportBuyerDebugModeConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}

AuctionReportBuyerDebugModeConfig::AuctionReportBuyerDebugModeConfig() noexcept: emlite::Val(emlite::Val::object()) {}

AuctionReportBuyerDebugModeConfig AuctionReportBuyerDebugModeConfig::clone() const noexcept { return *this; }

bool AuctionReportBuyerDebugModeConfig::enabled() const {
    return emlite::Val::get("enabled").as<bool>();
}

void AuctionReportBuyerDebugModeConfig::enabled(bool value) {
    emlite::Val::set("enabled", value);
}

long long AuctionReportBuyerDebugModeConfig::debugKey() const {
    return emlite::Val::get("debugKey").as<long long>();
}

void AuctionReportBuyerDebugModeConfig::debugKey(long long value) {
    emlite::Val::set("debugKey", value);
}


} // namespace webbind