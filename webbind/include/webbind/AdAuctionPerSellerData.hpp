#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AdAuctionPerSellerData
class AdAuctionPerSellerData : public emlite::Val {
  explicit AdAuctionPerSellerData(Handle h) noexcept;
public:
    static AdAuctionPerSellerData take_ownership(Handle h) noexcept;
    explicit AdAuctionPerSellerData(const emlite::Val &val) noexcept;
    AdAuctionPerSellerData() noexcept;
    [[nodiscard]] AdAuctionPerSellerData clone() const noexcept;
    /// Getter of the `seller` attribute.
    [[nodiscard]] jsbind::String seller() const;
    /// Setter of the `seller` attribute.
    void seller(const jsbind::String& value);
    /// Getter of the `request` attribute.
    [[nodiscard]] jsbind::Uint8Array request() const;
    /// Setter of the `request` attribute.
    void request(const jsbind::Uint8Array& value);
    /// Getter of the `error` attribute.
    [[nodiscard]] jsbind::String error() const;
    /// Setter of the `error` attribute.
    void error(const jsbind::String& value);
};

} // namespace webbind