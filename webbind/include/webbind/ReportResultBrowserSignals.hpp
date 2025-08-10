#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportingBrowserSignals.hpp"

namespace webbind {

/// Dictionary type ReportResultBrowserSignals
class ReportResultBrowserSignals : public ReportingBrowserSignals {
  explicit ReportResultBrowserSignals(Handle h) noexcept;
public:
    static ReportResultBrowserSignals take_ownership(Handle h) noexcept;
    explicit ReportResultBrowserSignals(const emlite::Val &val) noexcept;
    ReportResultBrowserSignals() noexcept;
    [[nodiscard]] ReportResultBrowserSignals clone() const noexcept;
    /// Getter of the `desirability` attribute.
    [[nodiscard]] double desirability() const;
    /// Setter of the `desirability` attribute.
    void desirability(double value);
    /// Getter of the `topLevelSellerSignals` attribute.
    [[nodiscard]] jsbind::String topLevelSellerSignals() const;
    /// Setter of the `topLevelSellerSignals` attribute.
    void topLevelSellerSignals(const jsbind::String& value);
    /// Getter of the `modifiedBid` attribute.
    [[nodiscard]] double modifiedBid() const;
    /// Setter of the `modifiedBid` attribute.
    void modifiedBid(double value);
    /// Getter of the `dataVersion` attribute.
    [[nodiscard]] unsigned long dataVersion() const;
    /// Setter of the `dataVersion` attribute.
    void dataVersion(unsigned long value);
};

} // namespace webbind