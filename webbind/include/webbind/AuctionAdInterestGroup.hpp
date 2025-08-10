#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GenerateBidInterestGroup.hpp"
#include "ProtectedAudiencePrivateAggregationConfig.hpp"

namespace webbind {

/// Dictionary type AuctionAdInterestGroup
/// [`AuctionAdInterestGroup`](https://developer.mozilla.org/en-US/docs/Web/API/AuctionAdInterestGroup)
class AuctionAdInterestGroup : public GenerateBidInterestGroup {
  explicit AuctionAdInterestGroup(Handle h) noexcept;
public:
    static AuctionAdInterestGroup take_ownership(Handle h) noexcept;
    explicit AuctionAdInterestGroup(const emlite::Val &val) noexcept;
    AuctionAdInterestGroup() noexcept;
    [[nodiscard]] AuctionAdInterestGroup clone() const noexcept;
    [[nodiscard]] double priority() const;
    void priority(double value);
    [[nodiscard]] jsbind::Record<jsbind::String, double> prioritySignalsOverrides() const;
    void prioritySignalsOverrides(jsbind::Record<jsbind::String, double> value);
    [[nodiscard]] double lifetimeMs() const;
    void lifetimeMs(double value);
    [[nodiscard]] jsbind::String additionalBidKey() const;
    void additionalBidKey(const jsbind::String& value);
    [[nodiscard]] ProtectedAudiencePrivateAggregationConfig privateAggregationConfig() const;
    void privateAggregationConfig(const ProtectedAudiencePrivateAggregationConfig& value);
};

} // namespace webbind