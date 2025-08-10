#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuctionRealTimeReportingConfig
/// [`AuctionRealTimeReportingConfig`](https://developer.mozilla.org/en-US/docs/Web/API/AuctionRealTimeReportingConfig)
class AuctionRealTimeReportingConfig : public emlite::Val {
  explicit AuctionRealTimeReportingConfig(Handle h) noexcept;
public:
    static AuctionRealTimeReportingConfig take_ownership(Handle h) noexcept;
    explicit AuctionRealTimeReportingConfig(const emlite::Val &val) noexcept;
    AuctionRealTimeReportingConfig() noexcept;
    [[nodiscard]] AuctionRealTimeReportingConfig clone() const noexcept;
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
};

} // namespace webbind