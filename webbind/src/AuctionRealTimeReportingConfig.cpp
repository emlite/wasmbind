#include <webbind/AuctionRealTimeReportingConfig.hpp>

namespace webbind {

AuctionRealTimeReportingConfig::AuctionRealTimeReportingConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuctionRealTimeReportingConfig AuctionRealTimeReportingConfig::take_ownership(Handle h) noexcept {
    return AuctionRealTimeReportingConfig(h);
}

AuctionRealTimeReportingConfig::AuctionRealTimeReportingConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}

AuctionRealTimeReportingConfig::AuctionRealTimeReportingConfig() noexcept: emlite::Val(emlite::Val::object()) {}

AuctionRealTimeReportingConfig AuctionRealTimeReportingConfig::clone() const noexcept { return *this; }

jsbind::String AuctionRealTimeReportingConfig::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void AuctionRealTimeReportingConfig::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}


} // namespace webbind