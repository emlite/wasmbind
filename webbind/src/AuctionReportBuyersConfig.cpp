#include "webbind/AuctionReportBuyersConfig.hpp"

using emlite::Val;
namespace webbind {

AuctionReportBuyersConfig::AuctionReportBuyersConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuctionReportBuyersConfig AuctionReportBuyersConfig::take_ownership(Handle h) noexcept {
        return AuctionReportBuyersConfig(h);
    }
AuctionReportBuyersConfig::AuctionReportBuyersConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuctionReportBuyersConfig::AuctionReportBuyersConfig() noexcept: emlite::Val(emlite::Val::object()) {}
AuctionReportBuyersConfig AuctionReportBuyersConfig::clone() const noexcept { return *this; }

long long AuctionReportBuyersConfig::bucket() const {
    return emlite::Val::get("bucket").as<long long>();
}

void AuctionReportBuyersConfig::bucket(long long value) {
    emlite::Val::set("bucket", value);
}

double AuctionReportBuyersConfig::scale() const {
    return emlite::Val::get("scale").as<double>();
}

void AuctionReportBuyersConfig::scale(double value) {
    emlite::Val::set("scale", value);
}


} // namespace webbind