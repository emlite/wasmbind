#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuctionReportBuyersConfig.hpp"
#include "AuctionReportBuyerDebugModeConfig.hpp"
#include "ProtectedAudiencePrivateAggregationConfig.hpp"
#include "AuctionRealTimeReportingConfig.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type AuctionAdConfig
/// [`AuctionAdConfig`](https://developer.mozilla.org/en-US/docs/Web/API/AuctionAdConfig)
class AuctionAdConfig : public emlite::Val {
  explicit AuctionAdConfig(Handle h) noexcept;
public:
    static AuctionAdConfig take_ownership(Handle h) noexcept;
    explicit AuctionAdConfig(const emlite::Val &val) noexcept;
    AuctionAdConfig() noexcept;
    [[nodiscard]] AuctionAdConfig clone() const noexcept;
    [[nodiscard]] jsbind::String seller() const;
    void seller(const jsbind::String& value);
    [[nodiscard]] jsbind::String decisionLogicURL() const;
    void decisionLogicURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String trustedScoringSignalsURL() const;
    void trustedScoringSignalsURL(const jsbind::String& value);
    [[nodiscard]] long maxTrustedScoringSignalsURLLength() const;
    void maxTrustedScoringSignalsURLLength(long value);
    [[nodiscard]] jsbind::String trustedScoringSignalsCoordinator() const;
    void trustedScoringSignalsCoordinator(const jsbind::String& value);
    [[nodiscard]] bool sendCreativeScanningMetadata() const;
    void sendCreativeScanningMetadata(bool value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> interestGroupBuyers() const;
    void interestGroupBuyers(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::Promise<jsbind::Any> auctionSignals() const;
    void auctionSignals(const jsbind::Promise<jsbind::Any>& value);
    [[nodiscard]] jsbind::Promise<jsbind::Any> sellerSignals() const;
    void sellerSignals(const jsbind::Promise<jsbind::Any>& value);
    [[nodiscard]] jsbind::Promise<jsbind::String> directFromSellerSignalsHeaderAdSlot() const;
    void directFromSellerSignalsHeaderAdSlot(const jsbind::Promise<jsbind::String>& value);
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>> deprecatedRenderURLReplacements() const;
    void deprecatedRenderURLReplacements(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>& value);
    [[nodiscard]] long long sellerTimeout() const;
    void sellerTimeout(long long value);
    [[nodiscard]] unsigned short sellerExperimentGroupId() const;
    void sellerExperimentGroupId(unsigned short value);
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Any>> perBuyerSignals() const;
    void perBuyerSignals(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Any>>& value);
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, long long>> perBuyerTimeouts() const;
    void perBuyerTimeouts(jsbind::Promise<jsbind::Record<jsbind::String, long long>> value);
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, long long>> perBuyerCumulativeTimeouts() const;
    void perBuyerCumulativeTimeouts(jsbind::Promise<jsbind::Record<jsbind::String, long long>> value);
    [[nodiscard]] long long reportingTimeout() const;
    void reportingTimeout(long long value);
    [[nodiscard]] jsbind::String sellerCurrency() const;
    void sellerCurrency(const jsbind::String& value);
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>> perBuyerCurrencies() const;
    void perBuyerCurrencies(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>& value);
    [[nodiscard]] jsbind::Record<jsbind::String, unsigned short> perBuyerMultiBidLimits() const;
    void perBuyerMultiBidLimits(jsbind::Record<jsbind::String, unsigned short> value);
    [[nodiscard]] jsbind::Record<jsbind::String, unsigned short> perBuyerGroupLimits() const;
    void perBuyerGroupLimits(jsbind::Record<jsbind::String, unsigned short> value);
    [[nodiscard]] jsbind::Record<jsbind::String, unsigned short> perBuyerExperimentGroupIds() const;
    void perBuyerExperimentGroupIds(jsbind::Record<jsbind::String, unsigned short> value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::Record<jsbind::String, double>> perBuyerPrioritySignals() const;
    void perBuyerPrioritySignals(jsbind::Record<jsbind::String, jsbind::Record<jsbind::String, double>> value);
    [[nodiscard]] jsbind::TypedArray<long long> auctionReportBuyerKeys() const;
    void auctionReportBuyerKeys(jsbind::TypedArray<long long> value);
    [[nodiscard]] jsbind::Record<jsbind::String, AuctionReportBuyersConfig> auctionReportBuyers() const;
    void auctionReportBuyers(const jsbind::Record<jsbind::String, AuctionReportBuyersConfig>& value);
    [[nodiscard]] AuctionReportBuyerDebugModeConfig auctionReportBuyerDebugModeConfig() const;
    void auctionReportBuyerDebugModeConfig(const AuctionReportBuyerDebugModeConfig& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> requiredSellerCapabilities() const;
    void requiredSellerCapabilities(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] ProtectedAudiencePrivateAggregationConfig privateAggregationConfig() const;
    void privateAggregationConfig(const ProtectedAudiencePrivateAggregationConfig& value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::String> requestedSize() const;
    void requestedSize(const jsbind::Record<jsbind::String, jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Record<jsbind::String, jsbind::String>> allSlotsRequestedSizes() const;
    void allSlotsRequestedSizes(const jsbind::TypedArray<jsbind::Record<jsbind::String, jsbind::String>>& value);
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> additionalBids() const;
    void additionalBids(const jsbind::Promise<jsbind::Undefined>& value);
    [[nodiscard]] jsbind::String auctionNonce() const;
    void auctionNonce(const jsbind::String& value);
    [[nodiscard]] AuctionRealTimeReportingConfig sellerRealTimeReportingConfig() const;
    void sellerRealTimeReportingConfig(const AuctionRealTimeReportingConfig& value);
    [[nodiscard]] jsbind::Record<jsbind::String, AuctionRealTimeReportingConfig> perBuyerRealTimeReportingConfig() const;
    void perBuyerRealTimeReportingConfig(const jsbind::Record<jsbind::String, AuctionRealTimeReportingConfig>& value);
    [[nodiscard]] jsbind::TypedArray<AuctionAdConfig> componentAuctions() const;
    void componentAuctions(const jsbind::TypedArray<AuctionAdConfig>& value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] jsbind::Promise<bool> resolveToConfig() const;
    void resolveToConfig(jsbind::Promise<bool> value);
    [[nodiscard]] jsbind::Promise<jsbind::Uint8Array> serverResponse() const;
    void serverResponse(const jsbind::Promise<jsbind::Uint8Array>& value);
    [[nodiscard]] jsbind::String requestId() const;
    void requestId(const jsbind::String& value);
};

} // namespace webbind