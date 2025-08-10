#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AuctionReportBuyersConfig;
class AuctionReportBuyerDebugModeConfig;
class ProtectedAudiencePrivateAggregationConfig;
class AuctionRealTimeReportingConfig;
class AbortSignal;

/// Dictionary type AuctionAdConfig
class AuctionAdConfig : public emlite::Val {
  explicit AuctionAdConfig(Handle h) noexcept;
public:
    static AuctionAdConfig take_ownership(Handle h) noexcept;
    explicit AuctionAdConfig(const emlite::Val &val) noexcept;
    AuctionAdConfig() noexcept;
    [[nodiscard]] AuctionAdConfig clone() const noexcept;
    /// Getter of the `seller` attribute.
    [[nodiscard]] jsbind::String seller() const;
    /// Setter of the `seller` attribute.
    void seller(const jsbind::String& value);
    /// Getter of the `decisionLogicURL` attribute.
    [[nodiscard]] jsbind::String decisionLogicURL() const;
    /// Setter of the `decisionLogicURL` attribute.
    void decisionLogicURL(const jsbind::String& value);
    /// Getter of the `trustedScoringSignalsURL` attribute.
    [[nodiscard]] jsbind::String trustedScoringSignalsURL() const;
    /// Setter of the `trustedScoringSignalsURL` attribute.
    void trustedScoringSignalsURL(const jsbind::String& value);
    /// Getter of the `maxTrustedScoringSignalsURLLength` attribute.
    [[nodiscard]] long maxTrustedScoringSignalsURLLength() const;
    /// Setter of the `maxTrustedScoringSignalsURLLength` attribute.
    void maxTrustedScoringSignalsURLLength(long value);
    /// Getter of the `trustedScoringSignalsCoordinator` attribute.
    [[nodiscard]] jsbind::String trustedScoringSignalsCoordinator() const;
    /// Setter of the `trustedScoringSignalsCoordinator` attribute.
    void trustedScoringSignalsCoordinator(const jsbind::String& value);
    /// Getter of the `sendCreativeScanningMetadata` attribute.
    [[nodiscard]] bool sendCreativeScanningMetadata() const;
    /// Setter of the `sendCreativeScanningMetadata` attribute.
    void sendCreativeScanningMetadata(bool value);
    /// Getter of the `interestGroupBuyers` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> interestGroupBuyers() const;
    /// Setter of the `interestGroupBuyers` attribute.
    void interestGroupBuyers(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `auctionSignals` attribute.
    [[nodiscard]] jsbind::Promise<jsbind::Any> auctionSignals() const;
    /// Setter of the `auctionSignals` attribute.
    void auctionSignals(const jsbind::Promise<jsbind::Any>& value);
    /// Getter of the `sellerSignals` attribute.
    [[nodiscard]] jsbind::Promise<jsbind::Any> sellerSignals() const;
    /// Setter of the `sellerSignals` attribute.
    void sellerSignals(const jsbind::Promise<jsbind::Any>& value);
    /// Getter of the `directFromSellerSignalsHeaderAdSlot` attribute.
    [[nodiscard]] jsbind::Promise<jsbind::String> directFromSellerSignalsHeaderAdSlot() const;
    /// Setter of the `directFromSellerSignalsHeaderAdSlot` attribute.
    void directFromSellerSignalsHeaderAdSlot(const jsbind::Promise<jsbind::String>& value);
    /// Getter of the `deprecatedRenderURLReplacements` attribute.
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>> deprecatedRenderURLReplacements() const;
    /// Setter of the `deprecatedRenderURLReplacements` attribute.
    void deprecatedRenderURLReplacements(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>& value);
    /// Getter of the `sellerTimeout` attribute.
    [[nodiscard]] long long sellerTimeout() const;
    /// Setter of the `sellerTimeout` attribute.
    void sellerTimeout(long long value);
    /// Getter of the `sellerExperimentGroupId` attribute.
    [[nodiscard]] unsigned short sellerExperimentGroupId() const;
    /// Setter of the `sellerExperimentGroupId` attribute.
    void sellerExperimentGroupId(unsigned short value);
    /// Getter of the `perBuyerSignals` attribute.
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Any>> perBuyerSignals() const;
    /// Setter of the `perBuyerSignals` attribute.
    void perBuyerSignals(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Any>>& value);
    /// Getter of the `perBuyerTimeouts` attribute.
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, long long>> perBuyerTimeouts() const;
    /// Setter of the `perBuyerTimeouts` attribute.
    void perBuyerTimeouts(jsbind::Promise<jsbind::Record<jsbind::String, long long>> value);
    /// Getter of the `perBuyerCumulativeTimeouts` attribute.
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, long long>> perBuyerCumulativeTimeouts() const;
    /// Setter of the `perBuyerCumulativeTimeouts` attribute.
    void perBuyerCumulativeTimeouts(jsbind::Promise<jsbind::Record<jsbind::String, long long>> value);
    /// Getter of the `reportingTimeout` attribute.
    [[nodiscard]] long long reportingTimeout() const;
    /// Setter of the `reportingTimeout` attribute.
    void reportingTimeout(long long value);
    /// Getter of the `sellerCurrency` attribute.
    [[nodiscard]] jsbind::String sellerCurrency() const;
    /// Setter of the `sellerCurrency` attribute.
    void sellerCurrency(const jsbind::String& value);
    /// Getter of the `perBuyerCurrencies` attribute.
    [[nodiscard]] jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>> perBuyerCurrencies() const;
    /// Setter of the `perBuyerCurrencies` attribute.
    void perBuyerCurrencies(const jsbind::Promise<jsbind::Record<jsbind::String, jsbind::String>>& value);
    /// Getter of the `perBuyerMultiBidLimits` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, unsigned short> perBuyerMultiBidLimits() const;
    /// Setter of the `perBuyerMultiBidLimits` attribute.
    void perBuyerMultiBidLimits(jsbind::Record<jsbind::String, unsigned short> value);
    /// Getter of the `perBuyerGroupLimits` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, unsigned short> perBuyerGroupLimits() const;
    /// Setter of the `perBuyerGroupLimits` attribute.
    void perBuyerGroupLimits(jsbind::Record<jsbind::String, unsigned short> value);
    /// Getter of the `perBuyerExperimentGroupIds` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, unsigned short> perBuyerExperimentGroupIds() const;
    /// Setter of the `perBuyerExperimentGroupIds` attribute.
    void perBuyerExperimentGroupIds(jsbind::Record<jsbind::String, unsigned short> value);
    /// Getter of the `perBuyerPrioritySignals` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::Record<jsbind::String, double>> perBuyerPrioritySignals() const;
    /// Setter of the `perBuyerPrioritySignals` attribute.
    void perBuyerPrioritySignals(jsbind::Record<jsbind::String, jsbind::Record<jsbind::String, double>> value);
    /// Getter of the `auctionReportBuyerKeys` attribute.
    [[nodiscard]] jsbind::TypedArray<long long> auctionReportBuyerKeys() const;
    /// Setter of the `auctionReportBuyerKeys` attribute.
    void auctionReportBuyerKeys(jsbind::TypedArray<long long> value);
    /// Getter of the `auctionReportBuyers` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, AuctionReportBuyersConfig> auctionReportBuyers() const;
    /// Setter of the `auctionReportBuyers` attribute.
    void auctionReportBuyers(const jsbind::Record<jsbind::String, AuctionReportBuyersConfig>& value);
    /// Getter of the `auctionReportBuyerDebugModeConfig` attribute.
    [[nodiscard]] AuctionReportBuyerDebugModeConfig auctionReportBuyerDebugModeConfig() const;
    /// Setter of the `auctionReportBuyerDebugModeConfig` attribute.
    void auctionReportBuyerDebugModeConfig(const AuctionReportBuyerDebugModeConfig& value);
    /// Getter of the `requiredSellerCapabilities` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> requiredSellerCapabilities() const;
    /// Setter of the `requiredSellerCapabilities` attribute.
    void requiredSellerCapabilities(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `privateAggregationConfig` attribute.
    [[nodiscard]] ProtectedAudiencePrivateAggregationConfig privateAggregationConfig() const;
    /// Setter of the `privateAggregationConfig` attribute.
    void privateAggregationConfig(const ProtectedAudiencePrivateAggregationConfig& value);
    /// Getter of the `requestedSize` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::String> requestedSize() const;
    /// Setter of the `requestedSize` attribute.
    void requestedSize(const jsbind::Record<jsbind::String, jsbind::String>& value);
    /// Getter of the `allSlotsRequestedSizes` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Record<jsbind::String, jsbind::String>> allSlotsRequestedSizes() const;
    /// Setter of the `allSlotsRequestedSizes` attribute.
    void allSlotsRequestedSizes(const jsbind::TypedArray<jsbind::Record<jsbind::String, jsbind::String>>& value);
    /// Getter of the `additionalBids` attribute.
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> additionalBids() const;
    /// Setter of the `additionalBids` attribute.
    void additionalBids(const jsbind::Promise<jsbind::Undefined>& value);
    /// Getter of the `auctionNonce` attribute.
    [[nodiscard]] jsbind::String auctionNonce() const;
    /// Setter of the `auctionNonce` attribute.
    void auctionNonce(const jsbind::String& value);
    /// Getter of the `sellerRealTimeReportingConfig` attribute.
    [[nodiscard]] AuctionRealTimeReportingConfig sellerRealTimeReportingConfig() const;
    /// Setter of the `sellerRealTimeReportingConfig` attribute.
    void sellerRealTimeReportingConfig(const AuctionRealTimeReportingConfig& value);
    /// Getter of the `perBuyerRealTimeReportingConfig` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, AuctionRealTimeReportingConfig> perBuyerRealTimeReportingConfig() const;
    /// Setter of the `perBuyerRealTimeReportingConfig` attribute.
    void perBuyerRealTimeReportingConfig(const jsbind::Record<jsbind::String, AuctionRealTimeReportingConfig>& value);
    /// Getter of the `componentAuctions` attribute.
    [[nodiscard]] jsbind::TypedArray<AuctionAdConfig> componentAuctions() const;
    /// Setter of the `componentAuctions` attribute.
    void componentAuctions(const jsbind::TypedArray<AuctionAdConfig>& value);
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
    /// Getter of the `resolveToConfig` attribute.
    [[nodiscard]] jsbind::Promise<bool> resolveToConfig() const;
    /// Setter of the `resolveToConfig` attribute.
    void resolveToConfig(jsbind::Promise<bool> value);
    /// Getter of the `serverResponse` attribute.
    [[nodiscard]] jsbind::Promise<jsbind::Uint8Array> serverResponse() const;
    /// Setter of the `serverResponse` attribute.
    void serverResponse(const jsbind::Promise<jsbind::Uint8Array>& value);
    /// Getter of the `requestId` attribute.
    [[nodiscard]] jsbind::String requestId() const;
    /// Setter of the `requestId` attribute.
    void requestId(const jsbind::String& value);
};

} // namespace webbind