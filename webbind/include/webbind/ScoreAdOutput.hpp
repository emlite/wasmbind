#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ScoreAdOutput
class ScoreAdOutput : public emlite::Val {
  explicit ScoreAdOutput(Handle h) noexcept;
public:
    static ScoreAdOutput take_ownership(Handle h) noexcept;
    explicit ScoreAdOutput(const emlite::Val &val) noexcept;
    ScoreAdOutput() noexcept;
    [[nodiscard]] ScoreAdOutput clone() const noexcept;
    /// Getter of the `desirability` attribute.
    [[nodiscard]] double desirability() const;
    /// Setter of the `desirability` attribute.
    void desirability(double value);
    /// Getter of the `bid` attribute.
    [[nodiscard]] double bid() const;
    /// Setter of the `bid` attribute.
    void bid(double value);
    /// Getter of the `bidCurrency` attribute.
    [[nodiscard]] jsbind::String bidCurrency() const;
    /// Setter of the `bidCurrency` attribute.
    void bidCurrency(const jsbind::String& value);
    /// Getter of the `incomingBidInSellerCurrency` attribute.
    [[nodiscard]] double incomingBidInSellerCurrency() const;
    /// Setter of the `incomingBidInSellerCurrency` attribute.
    void incomingBidInSellerCurrency(double value);
    /// Getter of the `allowComponentAuction` attribute.
    [[nodiscard]] bool allowComponentAuction() const;
    /// Setter of the `allowComponentAuction` attribute.
    void allowComponentAuction(bool value);
};

} // namespace webbind