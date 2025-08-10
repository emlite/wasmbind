#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuctionAdInterestGroupKey
/// [`AuctionAdInterestGroupKey`](https://developer.mozilla.org/en-US/docs/Web/API/AuctionAdInterestGroupKey)
class AuctionAdInterestGroupKey : public emlite::Val {
  explicit AuctionAdInterestGroupKey(Handle h) noexcept;
public:
    static AuctionAdInterestGroupKey take_ownership(Handle h) noexcept;
    explicit AuctionAdInterestGroupKey(const emlite::Val &val) noexcept;
    AuctionAdInterestGroupKey() noexcept;
    [[nodiscard]] AuctionAdInterestGroupKey clone() const noexcept;
    [[nodiscard]] jsbind::String owner() const;
    void owner(const jsbind::String& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
};

} // namespace webbind