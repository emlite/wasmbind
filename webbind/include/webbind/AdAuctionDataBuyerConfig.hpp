#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AdAuctionDataBuyerConfig
class AdAuctionDataBuyerConfig : public emlite::Val {
  explicit AdAuctionDataBuyerConfig(Handle h) noexcept;
public:
    static AdAuctionDataBuyerConfig take_ownership(Handle h) noexcept;
    explicit AdAuctionDataBuyerConfig(const emlite::Val &val) noexcept;
    AdAuctionDataBuyerConfig() noexcept;
    [[nodiscard]] AdAuctionDataBuyerConfig clone() const noexcept;
    /// Getter of the `targetSize` attribute.
    [[nodiscard]] unsigned long targetSize() const;
    /// Setter of the `targetSize` attribute.
    void targetSize(unsigned long value);
};

} // namespace webbind