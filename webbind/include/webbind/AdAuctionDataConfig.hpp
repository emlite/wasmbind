#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AdAuctionOneSeller.hpp"
#include "AdAuctionDataBuyerConfig.hpp"

namespace webbind {

/// Dictionary type AdAuctionDataConfig
/// [`AdAuctionDataConfig`](https://developer.mozilla.org/en-US/docs/Web/API/AdAuctionDataConfig)
class AdAuctionDataConfig : public emlite::Val {
  explicit AdAuctionDataConfig(Handle h) noexcept;
public:
    static AdAuctionDataConfig take_ownership(Handle h) noexcept;
    explicit AdAuctionDataConfig(const emlite::Val &val) noexcept;
    AdAuctionDataConfig() noexcept;
    [[nodiscard]] AdAuctionDataConfig clone() const noexcept;
    [[nodiscard]] jsbind::String seller() const;
    void seller(const jsbind::String& value);
    [[nodiscard]] jsbind::String coordinatorOrigin() const;
    void coordinatorOrigin(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<AdAuctionOneSeller> sellers() const;
    void sellers(const jsbind::TypedArray<AdAuctionOneSeller>& value);
    [[nodiscard]] unsigned long requestSize() const;
    void requestSize(unsigned long value);
    [[nodiscard]] jsbind::Record<jsbind::String, AdAuctionDataBuyerConfig> perBuyerConfig() const;
    void perBuyerConfig(const jsbind::Record<jsbind::String, AdAuctionDataBuyerConfig>& value);
};

} // namespace webbind