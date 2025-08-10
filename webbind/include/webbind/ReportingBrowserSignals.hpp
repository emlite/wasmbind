#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ReportingBrowserSignals
/// [`ReportingBrowserSignals`](https://developer.mozilla.org/en-US/docs/Web/API/ReportingBrowserSignals)
class ReportingBrowserSignals : public emlite::Val {
  explicit ReportingBrowserSignals(Handle h) noexcept;
public:
    static ReportingBrowserSignals take_ownership(Handle h) noexcept;
    explicit ReportingBrowserSignals(const emlite::Val &val) noexcept;
    ReportingBrowserSignals() noexcept;
    [[nodiscard]] ReportingBrowserSignals clone() const noexcept;
    [[nodiscard]] jsbind::String topWindowHostname() const;
    void topWindowHostname(const jsbind::String& value);
    [[nodiscard]] jsbind::String interestGroupOwner() const;
    void interestGroupOwner(const jsbind::String& value);
    [[nodiscard]] jsbind::String renderURL() const;
    void renderURL(const jsbind::String& value);
    [[nodiscard]] double bid() const;
    void bid(double value);
    [[nodiscard]] double highestScoringOtherBid() const;
    void highestScoringOtherBid(double value);
    [[nodiscard]] jsbind::String bidCurrency() const;
    void bidCurrency(const jsbind::String& value);
    [[nodiscard]] jsbind::String highestScoringOtherBidCurrency() const;
    void highestScoringOtherBidCurrency(const jsbind::String& value);
    [[nodiscard]] jsbind::String topLevelSeller() const;
    void topLevelSeller(const jsbind::String& value);
    [[nodiscard]] jsbind::String componentSeller() const;
    void componentSeller(const jsbind::String& value);
    [[nodiscard]] jsbind::String buyerAndSellerReportingId() const;
    void buyerAndSellerReportingId(const jsbind::String& value);
    [[nodiscard]] jsbind::String selectedBuyerAndSellerReportingId() const;
    void selectedBuyerAndSellerReportingId(const jsbind::String& value);
};

} // namespace webbind