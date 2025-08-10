#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AdAuctionOneSeller
/// [`AdAuctionOneSeller`](https://developer.mozilla.org/en-US/docs/Web/API/AdAuctionOneSeller)
class AdAuctionOneSeller : public emlite::Val {
  explicit AdAuctionOneSeller(Handle h) noexcept;
public:
    static AdAuctionOneSeller take_ownership(Handle h) noexcept;
    explicit AdAuctionOneSeller(const emlite::Val &val) noexcept;
    AdAuctionOneSeller() noexcept;
    [[nodiscard]] AdAuctionOneSeller clone() const noexcept;
    [[nodiscard]] jsbind::String seller() const;
    void seller(const jsbind::String& value);
    [[nodiscard]] jsbind::String coordinatorOrigin() const;
    void coordinatorOrigin(const jsbind::String& value);
};

} // namespace webbind