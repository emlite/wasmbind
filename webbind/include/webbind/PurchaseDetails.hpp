#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PurchaseDetails
class PurchaseDetails : public emlite::Val {
  explicit PurchaseDetails(Handle h) noexcept;
public:
    static PurchaseDetails take_ownership(Handle h) noexcept;
    explicit PurchaseDetails(const emlite::Val &val) noexcept;
    PurchaseDetails() noexcept;
    [[nodiscard]] PurchaseDetails clone() const noexcept;
    /// Getter of the `itemId` attribute.
    [[nodiscard]] jsbind::String itemId() const;
    /// Setter of the `itemId` attribute.
    void itemId(const jsbind::String& value);
    /// Getter of the `purchaseToken` attribute.
    [[nodiscard]] jsbind::String purchaseToken() const;
    /// Setter of the `purchaseToken` attribute.
    void purchaseToken(const jsbind::String& value);
};

} // namespace webbind