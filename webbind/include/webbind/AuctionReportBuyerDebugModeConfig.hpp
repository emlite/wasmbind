#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuctionReportBuyerDebugModeConfig
class AuctionReportBuyerDebugModeConfig : public emlite::Val {
  explicit AuctionReportBuyerDebugModeConfig(Handle h) noexcept;
public:
    static AuctionReportBuyerDebugModeConfig take_ownership(Handle h) noexcept;
    explicit AuctionReportBuyerDebugModeConfig(const emlite::Val &val) noexcept;
    AuctionReportBuyerDebugModeConfig() noexcept;
    [[nodiscard]] AuctionReportBuyerDebugModeConfig clone() const noexcept;
    /// Getter of the `enabled` attribute.
    [[nodiscard]] bool enabled() const;
    /// Setter of the `enabled` attribute.
    void enabled(bool value);
    /// Getter of the `debugKey` attribute.
    [[nodiscard]] long long debugKey() const;
    /// Setter of the `debugKey` attribute.
    void debugKey(long long value);
};

} // namespace webbind