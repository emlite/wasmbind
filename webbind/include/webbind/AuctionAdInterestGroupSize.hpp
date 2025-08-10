#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuctionAdInterestGroupSize
/// [`AuctionAdInterestGroupSize`](https://developer.mozilla.org/en-US/docs/Web/API/AuctionAdInterestGroupSize)
class AuctionAdInterestGroupSize : public emlite::Val {
  explicit AuctionAdInterestGroupSize(Handle h) noexcept;
public:
    static AuctionAdInterestGroupSize take_ownership(Handle h) noexcept;
    explicit AuctionAdInterestGroupSize(const emlite::Val &val) noexcept;
    AuctionAdInterestGroupSize() noexcept;
    [[nodiscard]] AuctionAdInterestGroupSize clone() const noexcept;
    [[nodiscard]] jsbind::String width() const;
    void width(const jsbind::String& value);
    [[nodiscard]] jsbind::String height() const;
    void height(const jsbind::String& value);
};

} // namespace webbind