#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuctionReportBuyersConfig
/// [`AuctionReportBuyersConfig`](https://developer.mozilla.org/en-US/docs/Web/API/AuctionReportBuyersConfig)
class AuctionReportBuyersConfig : public emlite::Val {
  explicit AuctionReportBuyersConfig(Handle h) noexcept;
public:
    static AuctionReportBuyersConfig take_ownership(Handle h) noexcept;
    explicit AuctionReportBuyersConfig(const emlite::Val &val) noexcept;
    AuctionReportBuyersConfig() noexcept;
    [[nodiscard]] AuctionReportBuyersConfig clone() const noexcept;
    [[nodiscard]] long long bucket() const;
    void bucket(long long value);
    [[nodiscard]] double scale() const;
    void scale(double value);
};

} // namespace webbind