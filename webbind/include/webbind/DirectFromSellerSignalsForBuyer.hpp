#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DirectFromSellerSignalsForBuyer
class DirectFromSellerSignalsForBuyer : public emlite::Val {
  explicit DirectFromSellerSignalsForBuyer(Handle h) noexcept;
public:
    static DirectFromSellerSignalsForBuyer take_ownership(Handle h) noexcept;
    explicit DirectFromSellerSignalsForBuyer(const emlite::Val &val) noexcept;
    DirectFromSellerSignalsForBuyer() noexcept;
    [[nodiscard]] DirectFromSellerSignalsForBuyer clone() const noexcept;
    /// Getter of the `auctionSignals` attribute.
    [[nodiscard]] jsbind::Any auctionSignals() const;
    /// Setter of the `auctionSignals` attribute.
    void auctionSignals(const jsbind::Any& value);
    /// Getter of the `perBuyerSignals` attribute.
    [[nodiscard]] jsbind::Any perBuyerSignals() const;
    /// Setter of the `perBuyerSignals` attribute.
    void perBuyerSignals(const jsbind::Any& value);
};

} // namespace webbind