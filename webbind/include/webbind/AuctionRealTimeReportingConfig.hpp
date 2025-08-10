#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuctionRealTimeReportingConfig
class AuctionRealTimeReportingConfig : public emlite::Val {
  explicit AuctionRealTimeReportingConfig(Handle h) noexcept;
public:
    static AuctionRealTimeReportingConfig take_ownership(Handle h) noexcept;
    explicit AuctionRealTimeReportingConfig(const emlite::Val &val) noexcept;
    AuctionRealTimeReportingConfig() noexcept;
    [[nodiscard]] AuctionRealTimeReportingConfig clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    void type(const jsbind::String& value);
};

} // namespace webbind