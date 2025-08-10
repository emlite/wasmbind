#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DirectFromSellerSignalsForSeller
class DirectFromSellerSignalsForSeller : public emlite::Val {
  explicit DirectFromSellerSignalsForSeller(Handle h) noexcept;
public:
    static DirectFromSellerSignalsForSeller take_ownership(Handle h) noexcept;
    explicit DirectFromSellerSignalsForSeller(const emlite::Val &val) noexcept;
    DirectFromSellerSignalsForSeller() noexcept;
    [[nodiscard]] DirectFromSellerSignalsForSeller clone() const noexcept;
    /// Getter of the `auctionSignals` attribute.
    [[nodiscard]] jsbind::Any auctionSignals() const;
    /// Setter of the `auctionSignals` attribute.
    void auctionSignals(const jsbind::Any& value);
    /// Getter of the `sellerSignals` attribute.
    [[nodiscard]] jsbind::Any sellerSignals() const;
    /// Setter of the `sellerSignals` attribute.
    void sellerSignals(const jsbind::Any& value);
};

} // namespace webbind