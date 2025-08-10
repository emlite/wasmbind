#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuctionAdInterestGroupSize
class AuctionAdInterestGroupSize : public emlite::Val {
  explicit AuctionAdInterestGroupSize(Handle h) noexcept;
public:
    static AuctionAdInterestGroupSize take_ownership(Handle h) noexcept;
    explicit AuctionAdInterestGroupSize(const emlite::Val &val) noexcept;
    AuctionAdInterestGroupSize() noexcept;
    [[nodiscard]] AuctionAdInterestGroupSize clone() const noexcept;
    /// Getter of the `width` attribute.
    [[nodiscard]] jsbind::String width() const;
    /// Setter of the `width` attribute.
    void width(const jsbind::String& value);
    /// Getter of the `height` attribute.
    [[nodiscard]] jsbind::String height() const;
    /// Setter of the `height` attribute.
    void height(const jsbind::String& value);
};

} // namespace webbind