#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuctionReportBuyerDebugModeConfig
/// [`AuctionReportBuyerDebugModeConfig`](https://developer.mozilla.org/en-US/docs/Web/API/AuctionReportBuyerDebugModeConfig)
class AuctionReportBuyerDebugModeConfig : public emlite::Val {
  explicit AuctionReportBuyerDebugModeConfig(Handle h) noexcept;
public:
    static AuctionReportBuyerDebugModeConfig take_ownership(Handle h) noexcept;
    explicit AuctionReportBuyerDebugModeConfig(const emlite::Val &val) noexcept;
    AuctionReportBuyerDebugModeConfig() noexcept;
    [[nodiscard]] AuctionReportBuyerDebugModeConfig clone() const noexcept;
    [[nodiscard]] bool enabled() const;
    void enabled(bool value);
    [[nodiscard]] long long debugKey() const;
    void debugKey(long long value);
};

} // namespace webbind