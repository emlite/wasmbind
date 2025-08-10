#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuctionReportBuyersConfig
class AuctionReportBuyersConfig : public emlite::Val {
  explicit AuctionReportBuyersConfig(Handle h) noexcept;
public:
    static AuctionReportBuyersConfig take_ownership(Handle h) noexcept;
    explicit AuctionReportBuyersConfig(const emlite::Val &val) noexcept;
    AuctionReportBuyersConfig() noexcept;
    [[nodiscard]] AuctionReportBuyersConfig clone() const noexcept;
    /// Getter of the `bucket` attribute.
    [[nodiscard]] long long bucket() const;
    /// Setter of the `bucket` attribute.
    void bucket(long long value);
    /// Getter of the `scale` attribute.
    [[nodiscard]] double scale() const;
    /// Setter of the `scale` attribute.
    void scale(double value);
};

} // namespace webbind