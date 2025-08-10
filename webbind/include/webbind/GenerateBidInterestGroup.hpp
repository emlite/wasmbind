#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuctionAd.hpp"
#include "AuctionAdInterestGroupSize.hpp"

namespace webbind {

/// Dictionary type GenerateBidInterestGroup
/// [`GenerateBidInterestGroup`](https://developer.mozilla.org/en-US/docs/Web/API/GenerateBidInterestGroup)
class GenerateBidInterestGroup : public emlite::Val {
  explicit GenerateBidInterestGroup(Handle h) noexcept;
public:
    static GenerateBidInterestGroup take_ownership(Handle h) noexcept;
    explicit GenerateBidInterestGroup(const emlite::Val &val) noexcept;
    GenerateBidInterestGroup() noexcept;
    [[nodiscard]] GenerateBidInterestGroup clone() const noexcept;
    [[nodiscard]] jsbind::String owner() const;
    void owner(const jsbind::String& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] bool enableBiddingSignalsPrioritization() const;
    void enableBiddingSignalsPrioritization(bool value);
    [[nodiscard]] jsbind::Record<jsbind::String, double> priorityVector() const;
    void priorityVector(jsbind::Record<jsbind::String, double> value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::TypedArray<jsbind::String>> sellerCapabilities() const;
    void sellerCapabilities(const jsbind::Record<jsbind::String, jsbind::TypedArray<jsbind::String>>& value);
    [[nodiscard]] jsbind::String executionMode() const;
    void executionMode(const jsbind::String& value);
    [[nodiscard]] jsbind::String biddingLogicURL() const;
    void biddingLogicURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String biddingWasmHelperURL() const;
    void biddingWasmHelperURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String updateURL() const;
    void updateURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String trustedBiddingSignalsURL() const;
    void trustedBiddingSignalsURL(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> trustedBiddingSignalsKeys() const;
    void trustedBiddingSignalsKeys(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String trustedBiddingSignalsSlotSizeMode() const;
    void trustedBiddingSignalsSlotSizeMode(const jsbind::String& value);
    [[nodiscard]] long maxTrustedBiddingSignalsURLLength() const;
    void maxTrustedBiddingSignalsURLLength(long value);
    [[nodiscard]] jsbind::String trustedBiddingSignalsCoordinator() const;
    void trustedBiddingSignalsCoordinator(const jsbind::String& value);
    [[nodiscard]] jsbind::Any userBiddingSignals() const;
    void userBiddingSignals(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<AuctionAd> ads() const;
    void ads(const jsbind::TypedArray<AuctionAd>& value);
    [[nodiscard]] jsbind::TypedArray<AuctionAd> adComponents() const;
    void adComponents(const jsbind::TypedArray<AuctionAd>& value);
    [[nodiscard]] jsbind::Record<jsbind::String, AuctionAdInterestGroupSize> adSizes() const;
    void adSizes(const jsbind::Record<jsbind::String, AuctionAdInterestGroupSize>& value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::TypedArray<jsbind::String>> sizeGroups() const;
    void sizeGroups(const jsbind::Record<jsbind::String, jsbind::TypedArray<jsbind::String>>& value);
};

} // namespace webbind