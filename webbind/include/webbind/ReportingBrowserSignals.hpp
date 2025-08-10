#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ReportingBrowserSignals
class ReportingBrowserSignals : public emlite::Val {
  explicit ReportingBrowserSignals(Handle h) noexcept;
public:
    static ReportingBrowserSignals take_ownership(Handle h) noexcept;
    explicit ReportingBrowserSignals(const emlite::Val &val) noexcept;
    ReportingBrowserSignals() noexcept;
    [[nodiscard]] ReportingBrowserSignals clone() const noexcept;
    /// Getter of the `topWindowHostname` attribute.
    [[nodiscard]] jsbind::String topWindowHostname() const;
    /// Setter of the `topWindowHostname` attribute.
    void topWindowHostname(const jsbind::String& value);
    /// Getter of the `interestGroupOwner` attribute.
    [[nodiscard]] jsbind::String interestGroupOwner() const;
    /// Setter of the `interestGroupOwner` attribute.
    void interestGroupOwner(const jsbind::String& value);
    /// Getter of the `renderURL` attribute.
    [[nodiscard]] jsbind::String renderURL() const;
    /// Setter of the `renderURL` attribute.
    void renderURL(const jsbind::String& value);
    /// Getter of the `bid` attribute.
    [[nodiscard]] double bid() const;
    /// Setter of the `bid` attribute.
    void bid(double value);
    /// Getter of the `highestScoringOtherBid` attribute.
    [[nodiscard]] double highestScoringOtherBid() const;
    /// Setter of the `highestScoringOtherBid` attribute.
    void highestScoringOtherBid(double value);
    /// Getter of the `bidCurrency` attribute.
    [[nodiscard]] jsbind::String bidCurrency() const;
    /// Setter of the `bidCurrency` attribute.
    void bidCurrency(const jsbind::String& value);
    /// Getter of the `highestScoringOtherBidCurrency` attribute.
    [[nodiscard]] jsbind::String highestScoringOtherBidCurrency() const;
    /// Setter of the `highestScoringOtherBidCurrency` attribute.
    void highestScoringOtherBidCurrency(const jsbind::String& value);
    /// Getter of the `topLevelSeller` attribute.
    [[nodiscard]] jsbind::String topLevelSeller() const;
    /// Setter of the `topLevelSeller` attribute.
    void topLevelSeller(const jsbind::String& value);
    /// Getter of the `componentSeller` attribute.
    [[nodiscard]] jsbind::String componentSeller() const;
    /// Setter of the `componentSeller` attribute.
    void componentSeller(const jsbind::String& value);
    /// Getter of the `buyerAndSellerReportingId` attribute.
    [[nodiscard]] jsbind::String buyerAndSellerReportingId() const;
    /// Setter of the `buyerAndSellerReportingId` attribute.
    void buyerAndSellerReportingId(const jsbind::String& value);
    /// Getter of the `selectedBuyerAndSellerReportingId` attribute.
    [[nodiscard]] jsbind::String selectedBuyerAndSellerReportingId() const;
    /// Setter of the `selectedBuyerAndSellerReportingId` attribute.
    void selectedBuyerAndSellerReportingId(const jsbind::String& value);
};

} // namespace webbind