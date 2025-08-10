#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportingBrowserSignals.hpp"

namespace webbind {

/// Dictionary type ReportWinBrowserSignals
/// [`ReportWinBrowserSignals`](https://developer.mozilla.org/en-US/docs/Web/API/ReportWinBrowserSignals)
class ReportWinBrowserSignals : public ReportingBrowserSignals {
  explicit ReportWinBrowserSignals(Handle h) noexcept;
public:
    static ReportWinBrowserSignals take_ownership(Handle h) noexcept;
    explicit ReportWinBrowserSignals(const emlite::Val &val) noexcept;
    ReportWinBrowserSignals() noexcept;
    [[nodiscard]] ReportWinBrowserSignals clone() const noexcept;
    [[nodiscard]] double adCost() const;
    void adCost(double value);
    [[nodiscard]] jsbind::String seller() const;
    void seller(const jsbind::String& value);
    [[nodiscard]] bool madeHighestScoringOtherBid() const;
    void madeHighestScoringOtherBid(bool value);
    [[nodiscard]] jsbind::String interestGroupName() const;
    void interestGroupName(const jsbind::String& value);
    [[nodiscard]] jsbind::String buyerReportingId() const;
    void buyerReportingId(const jsbind::String& value);
    [[nodiscard]] unsigned short modelingSignals() const;
    void modelingSignals(unsigned short value);
    [[nodiscard]] unsigned long dataVersion() const;
    void dataVersion(unsigned long value);
    [[nodiscard]] KAnonStatus kAnonStatus() const;
    void kAnonStatus(const KAnonStatus& value);
};

} // namespace webbind