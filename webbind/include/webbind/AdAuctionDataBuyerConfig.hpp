#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AdAuctionDataBuyerConfig
/// [`AdAuctionDataBuyerConfig`](https://developer.mozilla.org/en-US/docs/Web/API/AdAuctionDataBuyerConfig)
class AdAuctionDataBuyerConfig : public emlite::Val {
  explicit AdAuctionDataBuyerConfig(Handle h) noexcept;
public:
    static AdAuctionDataBuyerConfig take_ownership(Handle h) noexcept;
    explicit AdAuctionDataBuyerConfig(const emlite::Val &val) noexcept;
    AdAuctionDataBuyerConfig() noexcept;
    [[nodiscard]] AdAuctionDataBuyerConfig clone() const noexcept;
    [[nodiscard]] unsigned long targetSize() const;
    void targetSize(unsigned long value);
};

} // namespace webbind