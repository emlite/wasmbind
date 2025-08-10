#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportingBrowserSignals.hpp"

namespace webbind {

/// Dictionary type ReportWinBrowserSignals
class ReportWinBrowserSignals : public ReportingBrowserSignals {
  explicit ReportWinBrowserSignals(Handle h) noexcept;
public:
    static ReportWinBrowserSignals take_ownership(Handle h) noexcept;
    explicit ReportWinBrowserSignals(const emlite::Val &val) noexcept;
    ReportWinBrowserSignals() noexcept;
    [[nodiscard]] ReportWinBrowserSignals clone() const noexcept;
    /// Getter of the `adCost` attribute.
    [[nodiscard]] double adCost() const;
    /// Setter of the `adCost` attribute.
    void adCost(double value);
    /// Getter of the `seller` attribute.
    [[nodiscard]] jsbind::String seller() const;
    /// Setter of the `seller` attribute.
    void seller(const jsbind::String& value);
    /// Getter of the `madeHighestScoringOtherBid` attribute.
    [[nodiscard]] bool madeHighestScoringOtherBid() const;
    /// Setter of the `madeHighestScoringOtherBid` attribute.
    void madeHighestScoringOtherBid(bool value);
    /// Getter of the `interestGroupName` attribute.
    [[nodiscard]] jsbind::String interestGroupName() const;
    /// Setter of the `interestGroupName` attribute.
    void interestGroupName(const jsbind::String& value);
    /// Getter of the `buyerReportingId` attribute.
    [[nodiscard]] jsbind::String buyerReportingId() const;
    /// Setter of the `buyerReportingId` attribute.
    void buyerReportingId(const jsbind::String& value);
    /// Getter of the `modelingSignals` attribute.
    [[nodiscard]] unsigned short modelingSignals() const;
    /// Setter of the `modelingSignals` attribute.
    void modelingSignals(unsigned short value);
    /// Getter of the `dataVersion` attribute.
    [[nodiscard]] unsigned long dataVersion() const;
    /// Setter of the `dataVersion` attribute.
    void dataVersion(unsigned long value);
    /// Getter of the `kAnonStatus` attribute.
    [[nodiscard]] KAnonStatus kAnonStatus() const;
    /// Setter of the `kAnonStatus` attribute.
    void kAnonStatus(const KAnonStatus& value);
};

} // namespace webbind