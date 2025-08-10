#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DirectFromSellerSignalsForSeller
/// [`DirectFromSellerSignalsForSeller`](https://developer.mozilla.org/en-US/docs/Web/API/DirectFromSellerSignalsForSeller)
class DirectFromSellerSignalsForSeller : public emlite::Val {
  explicit DirectFromSellerSignalsForSeller(Handle h) noexcept;
public:
    static DirectFromSellerSignalsForSeller take_ownership(Handle h) noexcept;
    explicit DirectFromSellerSignalsForSeller(const emlite::Val &val) noexcept;
    DirectFromSellerSignalsForSeller() noexcept;
    [[nodiscard]] DirectFromSellerSignalsForSeller clone() const noexcept;
    [[nodiscard]] jsbind::Any auctionSignals() const;
    void auctionSignals(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any sellerSignals() const;
    void sellerSignals(const jsbind::Any& value);
};

} // namespace webbind