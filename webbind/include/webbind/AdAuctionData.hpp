#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AdAuctionPerSellerData;

/// Dictionary type AdAuctionData
class AdAuctionData : public emlite::Val {
  explicit AdAuctionData(Handle h) noexcept;
public:
    static AdAuctionData take_ownership(Handle h) noexcept;
    explicit AdAuctionData(const emlite::Val &val) noexcept;
    AdAuctionData() noexcept;
    [[nodiscard]] AdAuctionData clone() const noexcept;
    /// Getter of the `requestId` attribute.
    [[nodiscard]] jsbind::String requestId() const;
    /// Setter of the `requestId` attribute.
    void requestId(const jsbind::String& value);
    /// Getter of the `request` attribute.
    [[nodiscard]] jsbind::Uint8Array request() const;
    /// Setter of the `request` attribute.
    void request(const jsbind::Uint8Array& value);
    /// Getter of the `requests` attribute.
    [[nodiscard]] jsbind::TypedArray<AdAuctionPerSellerData> requests() const;
    /// Setter of the `requests` attribute.
    void requests(const jsbind::TypedArray<AdAuctionPerSellerData>& value);
};

} // namespace webbind