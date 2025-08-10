#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportingBrowserSignals.hpp"

namespace webbind {

/// Dictionary type ReportResultBrowserSignals
/// [`ReportResultBrowserSignals`](https://developer.mozilla.org/en-US/docs/Web/API/ReportResultBrowserSignals)
class ReportResultBrowserSignals : public ReportingBrowserSignals {
  explicit ReportResultBrowserSignals(Handle h) noexcept;
public:
    static ReportResultBrowserSignals take_ownership(Handle h) noexcept;
    explicit ReportResultBrowserSignals(const emlite::Val &val) noexcept;
    ReportResultBrowserSignals() noexcept;
    [[nodiscard]] ReportResultBrowserSignals clone() const noexcept;
    [[nodiscard]] double desirability() const;
    void desirability(double value);
    [[nodiscard]] jsbind::String topLevelSellerSignals() const;
    void topLevelSellerSignals(const jsbind::String& value);
    [[nodiscard]] double modifiedBid() const;
    void modifiedBid(double value);
    [[nodiscard]] unsigned long dataVersion() const;
    void dataVersion(unsigned long value);
};

} // namespace webbind