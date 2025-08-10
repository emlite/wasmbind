#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AuctionAd;
class AuctionAdInterestGroupSize;

/// Dictionary type GenerateBidInterestGroup
class GenerateBidInterestGroup : public emlite::Val {
  explicit GenerateBidInterestGroup(Handle h) noexcept;
public:
    static GenerateBidInterestGroup take_ownership(Handle h) noexcept;
    explicit GenerateBidInterestGroup(const emlite::Val &val) noexcept;
    GenerateBidInterestGroup() noexcept;
    [[nodiscard]] GenerateBidInterestGroup clone() const noexcept;
    /// Getter of the `owner` attribute.
    [[nodiscard]] jsbind::String owner() const;
    /// Setter of the `owner` attribute.
    void owner(const jsbind::String& value);
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `enableBiddingSignalsPrioritization` attribute.
    [[nodiscard]] bool enableBiddingSignalsPrioritization() const;
    /// Setter of the `enableBiddingSignalsPrioritization` attribute.
    void enableBiddingSignalsPrioritization(bool value);
    /// Getter of the `priorityVector` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, double> priorityVector() const;
    /// Setter of the `priorityVector` attribute.
    void priorityVector(jsbind::Record<jsbind::String, double> value);
    /// Getter of the `sellerCapabilities` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::TypedArray<jsbind::String>> sellerCapabilities() const;
    /// Setter of the `sellerCapabilities` attribute.
    void sellerCapabilities(const jsbind::Record<jsbind::String, jsbind::TypedArray<jsbind::String>>& value);
    /// Getter of the `executionMode` attribute.
    [[nodiscard]] jsbind::String executionMode() const;
    /// Setter of the `executionMode` attribute.
    void executionMode(const jsbind::String& value);
    /// Getter of the `biddingLogicURL` attribute.
    [[nodiscard]] jsbind::String biddingLogicURL() const;
    /// Setter of the `biddingLogicURL` attribute.
    void biddingLogicURL(const jsbind::String& value);
    /// Getter of the `biddingWasmHelperURL` attribute.
    [[nodiscard]] jsbind::String biddingWasmHelperURL() const;
    /// Setter of the `biddingWasmHelperURL` attribute.
    void biddingWasmHelperURL(const jsbind::String& value);
    /// Getter of the `updateURL` attribute.
    [[nodiscard]] jsbind::String updateURL() const;
    /// Setter of the `updateURL` attribute.
    void updateURL(const jsbind::String& value);
    /// Getter of the `trustedBiddingSignalsURL` attribute.
    [[nodiscard]] jsbind::String trustedBiddingSignalsURL() const;
    /// Setter of the `trustedBiddingSignalsURL` attribute.
    void trustedBiddingSignalsURL(const jsbind::String& value);
    /// Getter of the `trustedBiddingSignalsKeys` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> trustedBiddingSignalsKeys() const;
    /// Setter of the `trustedBiddingSignalsKeys` attribute.
    void trustedBiddingSignalsKeys(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `trustedBiddingSignalsSlotSizeMode` attribute.
    [[nodiscard]] jsbind::String trustedBiddingSignalsSlotSizeMode() const;
    /// Setter of the `trustedBiddingSignalsSlotSizeMode` attribute.
    void trustedBiddingSignalsSlotSizeMode(const jsbind::String& value);
    /// Getter of the `maxTrustedBiddingSignalsURLLength` attribute.
    [[nodiscard]] long maxTrustedBiddingSignalsURLLength() const;
    /// Setter of the `maxTrustedBiddingSignalsURLLength` attribute.
    void maxTrustedBiddingSignalsURLLength(long value);
    /// Getter of the `trustedBiddingSignalsCoordinator` attribute.
    [[nodiscard]] jsbind::String trustedBiddingSignalsCoordinator() const;
    /// Setter of the `trustedBiddingSignalsCoordinator` attribute.
    void trustedBiddingSignalsCoordinator(const jsbind::String& value);
    /// Getter of the `userBiddingSignals` attribute.
    [[nodiscard]] jsbind::Any userBiddingSignals() const;
    /// Setter of the `userBiddingSignals` attribute.
    void userBiddingSignals(const jsbind::Any& value);
    /// Getter of the `ads` attribute.
    [[nodiscard]] jsbind::TypedArray<AuctionAd> ads() const;
    /// Setter of the `ads` attribute.
    void ads(const jsbind::TypedArray<AuctionAd>& value);
    /// Getter of the `adComponents` attribute.
    [[nodiscard]] jsbind::TypedArray<AuctionAd> adComponents() const;
    /// Setter of the `adComponents` attribute.
    void adComponents(const jsbind::TypedArray<AuctionAd>& value);
    /// Getter of the `adSizes` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, AuctionAdInterestGroupSize> adSizes() const;
    /// Setter of the `adSizes` attribute.
    void adSizes(const jsbind::Record<jsbind::String, AuctionAdInterestGroupSize>& value);
    /// Getter of the `sizeGroups` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::TypedArray<jsbind::String>> sizeGroups() const;
    /// Setter of the `sizeGroups` attribute.
    void sizeGroups(const jsbind::Record<jsbind::String, jsbind::TypedArray<jsbind::String>>& value);
};

} // namespace webbind