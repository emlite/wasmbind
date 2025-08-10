#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AdAuctionPerSellerData.hpp"

namespace webbind {

/// Dictionary type AdAuctionData
/// [`AdAuctionData`](https://developer.mozilla.org/en-US/docs/Web/API/AdAuctionData)
class AdAuctionData : public emlite::Val {
  explicit AdAuctionData(Handle h) noexcept;
public:
    static AdAuctionData take_ownership(Handle h) noexcept;
    explicit AdAuctionData(const emlite::Val &val) noexcept;
    AdAuctionData() noexcept;
    [[nodiscard]] AdAuctionData clone() const noexcept;
    [[nodiscard]] jsbind::String requestId() const;
    void requestId(const jsbind::String& value);
    [[nodiscard]] jsbind::Uint8Array request() const;
    void request(const jsbind::Uint8Array& value);
    [[nodiscard]] jsbind::TypedArray<AdAuctionPerSellerData> requests() const;
    void requests(const jsbind::TypedArray<AdAuctionPerSellerData>& value);
};

} // namespace webbind