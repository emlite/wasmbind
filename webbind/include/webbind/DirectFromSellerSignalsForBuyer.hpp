#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DirectFromSellerSignalsForBuyer
/// [`DirectFromSellerSignalsForBuyer`](https://developer.mozilla.org/en-US/docs/Web/API/DirectFromSellerSignalsForBuyer)
class DirectFromSellerSignalsForBuyer : public emlite::Val {
  explicit DirectFromSellerSignalsForBuyer(Handle h) noexcept;
public:
    static DirectFromSellerSignalsForBuyer take_ownership(Handle h) noexcept;
    explicit DirectFromSellerSignalsForBuyer(const emlite::Val &val) noexcept;
    DirectFromSellerSignalsForBuyer() noexcept;
    [[nodiscard]] DirectFromSellerSignalsForBuyer clone() const noexcept;
    [[nodiscard]] jsbind::Any auctionSignals() const;
    void auctionSignals(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any perBuyerSignals() const;
    void perBuyerSignals(const jsbind::Any& value);
};

} // namespace webbind