#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AdAuctionPerSellerData
/// [`AdAuctionPerSellerData`](https://developer.mozilla.org/en-US/docs/Web/API/AdAuctionPerSellerData)
class AdAuctionPerSellerData : public emlite::Val {
  explicit AdAuctionPerSellerData(Handle h) noexcept;
public:
    static AdAuctionPerSellerData take_ownership(Handle h) noexcept;
    explicit AdAuctionPerSellerData(const emlite::Val &val) noexcept;
    AdAuctionPerSellerData() noexcept;
    [[nodiscard]] AdAuctionPerSellerData clone() const noexcept;
    [[nodiscard]] jsbind::String seller() const;
    void seller(const jsbind::String& value);
    [[nodiscard]] jsbind::Uint8Array request() const;
    void request(const jsbind::Uint8Array& value);
    [[nodiscard]] jsbind::String error() const;
    void error(const jsbind::String& value);
};

} // namespace webbind