#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AdAuctionOneSeller
class AdAuctionOneSeller : public emlite::Val {
  explicit AdAuctionOneSeller(Handle h) noexcept;
public:
    static AdAuctionOneSeller take_ownership(Handle h) noexcept;
    explicit AdAuctionOneSeller(const emlite::Val &val) noexcept;
    AdAuctionOneSeller() noexcept;
    [[nodiscard]] AdAuctionOneSeller clone() const noexcept;
    /// Getter of the `seller` attribute.
    [[nodiscard]] jsbind::String seller() const;
    /// Setter of the `seller` attribute.
    void seller(const jsbind::String& value);
    /// Getter of the `coordinatorOrigin` attribute.
    [[nodiscard]] jsbind::String coordinatorOrigin() const;
    /// Setter of the `coordinatorOrigin` attribute.
    void coordinatorOrigin(const jsbind::String& value);
};

} // namespace webbind