#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ScoreAdOutput
/// [`ScoreAdOutput`](https://developer.mozilla.org/en-US/docs/Web/API/ScoreAdOutput)
class ScoreAdOutput : public emlite::Val {
  explicit ScoreAdOutput(Handle h) noexcept;
public:
    static ScoreAdOutput take_ownership(Handle h) noexcept;
    explicit ScoreAdOutput(const emlite::Val &val) noexcept;
    ScoreAdOutput() noexcept;
    [[nodiscard]] ScoreAdOutput clone() const noexcept;
    [[nodiscard]] double desirability() const;
    void desirability(double value);
    [[nodiscard]] double bid() const;
    void bid(double value);
    [[nodiscard]] jsbind::String bidCurrency() const;
    void bidCurrency(const jsbind::String& value);
    [[nodiscard]] double incomingBidInSellerCurrency() const;
    void incomingBidInSellerCurrency(double value);
    [[nodiscard]] bool allowComponentAuction() const;
    void allowComponentAuction(bool value);
};

} // namespace webbind