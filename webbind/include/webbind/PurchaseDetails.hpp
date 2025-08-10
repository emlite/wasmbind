#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PurchaseDetails
/// [`PurchaseDetails`](https://developer.mozilla.org/en-US/docs/Web/API/PurchaseDetails)
class PurchaseDetails : public emlite::Val {
  explicit PurchaseDetails(Handle h) noexcept;
public:
    static PurchaseDetails take_ownership(Handle h) noexcept;
    explicit PurchaseDetails(const emlite::Val &val) noexcept;
    PurchaseDetails() noexcept;
    [[nodiscard]] PurchaseDetails clone() const noexcept;
    [[nodiscard]] jsbind::String itemId() const;
    void itemId(const jsbind::String& value);
    [[nodiscard]] jsbind::String purchaseToken() const;
    void purchaseToken(const jsbind::String& value);
};

} // namespace webbind