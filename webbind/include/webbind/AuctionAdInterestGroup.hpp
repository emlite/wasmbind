#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GenerateBidInterestGroup.hpp"
#include "ProtectedAudiencePrivateAggregationConfig.hpp"

namespace webbind {

/// Dictionary type AuctionAdInterestGroup
class AuctionAdInterestGroup : public GenerateBidInterestGroup {
  explicit AuctionAdInterestGroup(Handle h) noexcept;
public:
    static AuctionAdInterestGroup take_ownership(Handle h) noexcept;
    explicit AuctionAdInterestGroup(const emlite::Val &val) noexcept;
    AuctionAdInterestGroup() noexcept;
    [[nodiscard]] AuctionAdInterestGroup clone() const noexcept;
    /// Getter of the `priority` attribute.
    [[nodiscard]] double priority() const;
    /// Setter of the `priority` attribute.
    void priority(double value);
    /// Getter of the `prioritySignalsOverrides` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, double> prioritySignalsOverrides() const;
    /// Setter of the `prioritySignalsOverrides` attribute.
    void prioritySignalsOverrides(jsbind::Record<jsbind::String, double> value);
    /// Getter of the `lifetimeMs` attribute.
    [[nodiscard]] double lifetimeMs() const;
    /// Setter of the `lifetimeMs` attribute.
    void lifetimeMs(double value);
    /// Getter of the `additionalBidKey` attribute.
    [[nodiscard]] jsbind::String additionalBidKey() const;
    /// Setter of the `additionalBidKey` attribute.
    void additionalBidKey(const jsbind::String& value);
    /// Getter of the `privateAggregationConfig` attribute.
    [[nodiscard]] ProtectedAudiencePrivateAggregationConfig privateAggregationConfig() const;
    /// Setter of the `privateAggregationConfig` attribute.
    void privateAggregationConfig(const ProtectedAudiencePrivateAggregationConfig& value);
};

} // namespace webbind