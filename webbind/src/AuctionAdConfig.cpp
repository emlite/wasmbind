#include "webbind/AuctionAdConfig.hpp"
#include "webbind/AuctionReportBuyersConfig.hpp"
#include "webbind/AuctionReportBuyerDebugModeConfig.hpp"
#include "webbind/ProtectedAudiencePrivateAggregationConfig.hpp"
#include "webbind/AuctionRealTimeReportingConfig.hpp"
#include "webbind/AbortSignal.hpp"

using emlite::Val;
namespace webbind {

AuctionAdConfig::AuctionAdConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuctionAdConfig AuctionAdConfig::take_ownership(Handle h) noexcept {
        return AuctionAdConfig(h);
    }
AuctionAdConfig::AuctionAdConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuctionAdConfig::AuctionAdConfig() noexcept: emlite::Val(emlite::Val::object()) {}
AuctionAdConfig AuctionAdConfig::clone() const noexcept { return *this; }

jsbind::String AuctionAdConfig::seller() const {
    return emlite::Val::get("seller").as<jsbind::String>();
}

void AuctionAdConfig::seller(const jsbind::String& value) {
    emlite::Val::set("seller", value);
}

jsbind::String AuctionAdConfig::decisionLogicURL() const {
    return emlite::Val::get("decisionLogicURL").as<jsbind::String>();
}

void AuctionAdConfig::decisionLogicURL(const jsbind::String& value) {
    emlite::Val::set("decisionLogicURL", value);
}

jsbind::String AuctionAdConfig::trustedScoringSignalsURL() const {
    return emlite::Val::get("trustedScoringSignalsURL").as<jsbind::String>();
}

void AuctionAdConfig::trustedScoringSignalsURL(const jsbind::String& value) {
    emlite::Val::set("trustedScoringSignalsURL", value);
}

long AuctionAdConfig::maxTrustedScoringSignalsURLLength() const {
    return emlite::Val::get("maxTrustedScoringSignalsURLLength").as<long>();
}

void AuctionAdConfig::maxTrustedScoringSignalsURLLength(long value) {
    emlite::Val::set("maxTrustedScoringSignalsURLLength", value);
}

jsbind::String AuctionAdConfig::trustedScoringSignalsCoordinator() const {
    return emlite::Val::get("trustedScoringSignalsCoordinator").as<jsbind::String>();
}

void AuctionAdConfig::trustedScoringSignalsCoordinator(const jsbind::String& value) {
    emlite::Val::set("trustedScoringSignalsCoordinator", value);
}

bool AuctionAdConfig::sendCreativeScanningMetadata() const {
    return emlite::Val::get("sendCreativeScanningMetadata").as<bool>();
}

void AuctionAdConfig::sendCreativeScanningMetadata(bool value) {
    emlite::Val::set("sendCreativeScanningMetadata", value);
}

jsbind::TypedArray<jsbind::String> AuctionAdConfig::interestGroupBuyers() const {
    return emlite::Val::get("interestGroupBuyers").as<jsbind::TypedArray<jsbind::String>>();
}

void AuctionAdConfig::interestGroupBuyers(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("interestGroupBuyers", value);
}

jsbind::Promise<jsbind::Any> AuctionAdConfig::auctionSignals() const {
    return emlite::Val::get("auctionSignals").as<jsbind::Promise<jsbind::Any>>();
}

void AuctionAdConfig::auctionSignals(const jsbind::Promise<jsbind::Any>& value) {
    emlite::Val::set("auctionSignals", value);
}

jsbind::Promise<jsbind::Any> AuctionAdConfig::sellerSignals() const {
    return emlite::Val::get("sellerSignals").as<jsbind::Promise<jsbind::Any>>();
}

void AuctionAdConfig::sellerSignals(const jsbind::Promise<jsbind::Any>& value) {
    emlite::Val::set("sellerSignals", value);
}

jsbind::Promise<jsbind::String> AuctionAdConfig::directFromSellerSignalsHeaderAdSlot() const {
    return emlite::Val::get("directFromSellerSignalsHeaderAdSlot").as<jsbind::Promise<jsbind::String>>();
}

void AuctionAdConfig::directFromSellerSignalsHeaderAdSlot(const jsbind::Promise<jsbind::String>& value) {
    emlite::Val::set("directFromSellerSignalsHeaderAdSlot", value);
}

jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>> AuctionAdConfig::deprecatedRenderURLReplacements() const {
    return emlite::Val::get("deprecatedRenderURLReplacements").as<jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>>();
}

void AuctionAdConfig::deprecatedRenderURLReplacements(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>& value) {
    emlite::Val::set("deprecatedRenderURLReplacements", value);
}

long long AuctionAdConfig::sellerTimeout() const {
    return emlite::Val::get("sellerTimeout").as<long long>();
}

void AuctionAdConfig::sellerTimeout(long long value) {
    emlite::Val::set("sellerTimeout", value);
}

unsigned short AuctionAdConfig::sellerExperimentGroupId() const {
    return emlite::Val::get("sellerExperimentGroupId").as<unsigned short>();
}

void AuctionAdConfig::sellerExperimentGroupId(unsigned short value) {
    emlite::Val::set("sellerExperimentGroupId", value);
}

jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Any>> AuctionAdConfig::perBuyerSignals() const {
    return emlite::Val::get("perBuyerSignals").as<jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Any>>>();
}

void AuctionAdConfig::perBuyerSignals(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Any>>& value) {
    emlite::Val::set("perBuyerSignals", value);
}

jsbind::Promise<jsbind::Record<jsbind::String, long long>> AuctionAdConfig::perBuyerTimeouts() const {
    return emlite::Val::get("perBuyerTimeouts").as<jsbind::Promise<jsbind::Record<jsbind::String, long long>>>();
}

void AuctionAdConfig::perBuyerTimeouts(jsbind::Promise<jsbind::Record<jsbind::String, long long>> value) {
    emlite::Val::set("perBuyerTimeouts", value);
}

jsbind::Promise<jsbind::Record<jsbind::String, long long>> AuctionAdConfig::perBuyerCumulativeTimeouts() const {
    return emlite::Val::get("perBuyerCumulativeTimeouts").as<jsbind::Promise<jsbind::Record<jsbind::String, long long>>>();
}

void AuctionAdConfig::perBuyerCumulativeTimeouts(jsbind::Promise<jsbind::Record<jsbind::String, long long>> value) {
    emlite::Val::set("perBuyerCumulativeTimeouts", value);
}

long long AuctionAdConfig::reportingTimeout() const {
    return emlite::Val::get("reportingTimeout").as<long long>();
}

void AuctionAdConfig::reportingTimeout(long long value) {
    emlite::Val::set("reportingTimeout", value);
}

jsbind::String AuctionAdConfig::sellerCurrency() const {
    return emlite::Val::get("sellerCurrency").as<jsbind::String>();
}

void AuctionAdConfig::sellerCurrency(const jsbind::String& value) {
    emlite::Val::set("sellerCurrency", value);
}

jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>> AuctionAdConfig::perBuyerCurrencies() const {
    return emlite::Val::get("perBuyerCurrencies").as<jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>>();
}

void AuctionAdConfig::perBuyerCurrencies(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>& value) {
    emlite::Val::set("perBuyerCurrencies", value);
}

jsbind::Record<jsbind::String, unsigned short> AuctionAdConfig::perBuyerMultiBidLimits() const {
    return emlite::Val::get("perBuyerMultiBidLimits").as<jsbind::Record<jsbind::String, unsigned short>>();
}

void AuctionAdConfig::perBuyerMultiBidLimits(jsbind::Record<jsbind::String, unsigned short> value) {
    emlite::Val::set("perBuyerMultiBidLimits", value);
}

jsbind::Record<jsbind::String, unsigned short> AuctionAdConfig::perBuyerGroupLimits() const {
    return emlite::Val::get("perBuyerGroupLimits").as<jsbind::Record<jsbind::String, unsigned short>>();
}

void AuctionAdConfig::perBuyerGroupLimits(jsbind::Record<jsbind::String, unsigned short> value) {
    emlite::Val::set("perBuyerGroupLimits", value);
}

jsbind::Record<jsbind::String, unsigned short> AuctionAdConfig::perBuyerExperimentGroupIds() const {
    return emlite::Val::get("perBuyerExperimentGroupIds").as<jsbind::Record<jsbind::String, unsigned short>>();
}

void AuctionAdConfig::perBuyerExperimentGroupIds(jsbind::Record<jsbind::String, unsigned short> value) {
    emlite::Val::set("perBuyerExperimentGroupIds", value);
}

jsbind::Record<jsbind::String, jsbind::Record<jsbind::String, double>> AuctionAdConfig::perBuyerPrioritySignals() const {
    return emlite::Val::get("perBuyerPrioritySignals").as<jsbind::Record<jsbind::String, jsbind::Record<jsbind::String, double>>>();
}

void AuctionAdConfig::perBuyerPrioritySignals(jsbind::Record<jsbind::String, jsbind::Record<jsbind::String, double>> value) {
    emlite::Val::set("perBuyerPrioritySignals", value);
}

jsbind::TypedArray<long long> AuctionAdConfig::auctionReportBuyerKeys() const {
    return emlite::Val::get("auctionReportBuyerKeys").as<jsbind::TypedArray<long long>>();
}

void AuctionAdConfig::auctionReportBuyerKeys(jsbind::TypedArray<long long> value) {
    emlite::Val::set("auctionReportBuyerKeys", value);
}

jsbind::Record<jsbind::String, AuctionReportBuyersConfig> AuctionAdConfig::auctionReportBuyers() const {
    return emlite::Val::get("auctionReportBuyers").as<jsbind::Record<jsbind::String, AuctionReportBuyersConfig>>();
}

void AuctionAdConfig::auctionReportBuyers(const jsbind::Record<jsbind::String, AuctionReportBuyersConfig>& value) {
    emlite::Val::set("auctionReportBuyers", value);
}

AuctionReportBuyerDebugModeConfig AuctionAdConfig::auctionReportBuyerDebugModeConfig() const {
    return emlite::Val::get("auctionReportBuyerDebugModeConfig").as<AuctionReportBuyerDebugModeConfig>();
}

void AuctionAdConfig::auctionReportBuyerDebugModeConfig(const AuctionReportBuyerDebugModeConfig& value) {
    emlite::Val::set("auctionReportBuyerDebugModeConfig", value);
}

jsbind::TypedArray<jsbind::String> AuctionAdConfig::requiredSellerCapabilities() const {
    return emlite::Val::get("requiredSellerCapabilities").as<jsbind::TypedArray<jsbind::String>>();
}

void AuctionAdConfig::requiredSellerCapabilities(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("requiredSellerCapabilities", value);
}

ProtectedAudiencePrivateAggregationConfig AuctionAdConfig::privateAggregationConfig() const {
    return emlite::Val::get("privateAggregationConfig").as<ProtectedAudiencePrivateAggregationConfig>();
}

void AuctionAdConfig::privateAggregationConfig(const ProtectedAudiencePrivateAggregationConfig& value) {
    emlite::Val::set("privateAggregationConfig", value);
}

jsbind::Record<jsbind::String, jsbind::String> AuctionAdConfig::requestedSize() const {
    return emlite::Val::get("requestedSize").as<jsbind::Record<jsbind::String, jsbind::String>>();
}

void AuctionAdConfig::requestedSize(const jsbind::Record<jsbind::String, jsbind::String>& value) {
    emlite::Val::set("requestedSize", value);
}

jsbind::TypedArray<jsbind::Record<jsbind::String, jsbind::String>> AuctionAdConfig::allSlotsRequestedSizes() const {
    return emlite::Val::get("allSlotsRequestedSizes").as<jsbind::TypedArray<jsbind::Record<jsbind::String, jsbind::String>>>();
}

void AuctionAdConfig::allSlotsRequestedSizes(const jsbind::TypedArray<jsbind::Record<jsbind::String, jsbind::String>>& value) {
    emlite::Val::set("allSlotsRequestedSizes", value);
}

jsbind::Promise<jsbind::Undefined> AuctionAdConfig::additionalBids() const {
    return emlite::Val::get("additionalBids").as<jsbind::Promise<jsbind::Undefined>>();
}

void AuctionAdConfig::additionalBids(const jsbind::Promise<jsbind::Undefined>& value) {
    emlite::Val::set("additionalBids", value);
}

jsbind::String AuctionAdConfig::auctionNonce() const {
    return emlite::Val::get("auctionNonce").as<jsbind::String>();
}

void AuctionAdConfig::auctionNonce(const jsbind::String& value) {
    emlite::Val::set("auctionNonce", value);
}

AuctionRealTimeReportingConfig AuctionAdConfig::sellerRealTimeReportingConfig() const {
    return emlite::Val::get("sellerRealTimeReportingConfig").as<AuctionRealTimeReportingConfig>();
}

void AuctionAdConfig::sellerRealTimeReportingConfig(const AuctionRealTimeReportingConfig& value) {
    emlite::Val::set("sellerRealTimeReportingConfig", value);
}

jsbind::Record<jsbind::String, AuctionRealTimeReportingConfig> AuctionAdConfig::perBuyerRealTimeReportingConfig() const {
    return emlite::Val::get("perBuyerRealTimeReportingConfig").as<jsbind::Record<jsbind::String, AuctionRealTimeReportingConfig>>();
}

void AuctionAdConfig::perBuyerRealTimeReportingConfig(const jsbind::Record<jsbind::String, AuctionRealTimeReportingConfig>& value) {
    emlite::Val::set("perBuyerRealTimeReportingConfig", value);
}

jsbind::TypedArray<AuctionAdConfig> AuctionAdConfig::componentAuctions() const {
    return emlite::Val::get("componentAuctions").as<jsbind::TypedArray<AuctionAdConfig>>();
}

void AuctionAdConfig::componentAuctions(const jsbind::TypedArray<AuctionAdConfig>& value) {
    emlite::Val::set("componentAuctions", value);
}

AbortSignal AuctionAdConfig::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void AuctionAdConfig::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

jsbind::Promise<bool> AuctionAdConfig::resolveToConfig() const {
    return emlite::Val::get("resolveToConfig").as<jsbind::Promise<bool>>();
}

void AuctionAdConfig::resolveToConfig(jsbind::Promise<bool> value) {
    emlite::Val::set("resolveToConfig", value);
}

jsbind::Promise<jsbind::Uint8Array> AuctionAdConfig::serverResponse() const {
    return emlite::Val::get("serverResponse").as<jsbind::Promise<jsbind::Uint8Array>>();
}

void AuctionAdConfig::serverResponse(const jsbind::Promise<jsbind::Uint8Array>& value) {
    emlite::Val::set("serverResponse", value);
}

jsbind::String AuctionAdConfig::requestId() const {
    return emlite::Val::get("requestId").as<jsbind::String>();
}

void AuctionAdConfig::requestId(const jsbind::String& value) {
    emlite::Val::set("requestId", value);
}


} // namespace webbind