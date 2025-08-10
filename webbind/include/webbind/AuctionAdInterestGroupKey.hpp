#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuctionAdInterestGroupKey
class AuctionAdInterestGroupKey : public emlite::Val {
  explicit AuctionAdInterestGroupKey(Handle h) noexcept;
public:
    static AuctionAdInterestGroupKey take_ownership(Handle h) noexcept;
    explicit AuctionAdInterestGroupKey(const emlite::Val &val) noexcept;
    AuctionAdInterestGroupKey() noexcept;
    [[nodiscard]] AuctionAdInterestGroupKey clone() const noexcept;
    /// Getter of the `owner` attribute.
    [[nodiscard]] jsbind::String owner() const;
    /// Setter of the `owner` attribute.
    void owner(const jsbind::String& value);
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
};

} // namespace webbind