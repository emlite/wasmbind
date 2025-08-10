#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentCurrencyAmount.hpp"

namespace webbind {

/// Dictionary type ItemDetails
/// [`ItemDetails`](https://developer.mozilla.org/en-US/docs/Web/API/ItemDetails)
class ItemDetails : public emlite::Val {
  explicit ItemDetails(Handle h) noexcept;
public:
    static ItemDetails take_ownership(Handle h) noexcept;
    explicit ItemDetails(const emlite::Val &val) noexcept;
    ItemDetails() noexcept;
    [[nodiscard]] ItemDetails clone() const noexcept;
    [[nodiscard]] jsbind::String itemId() const;
    void itemId(const jsbind::String& value);
    [[nodiscard]] jsbind::String title() const;
    void title(const jsbind::String& value);
    [[nodiscard]] PaymentCurrencyAmount price() const;
    void price(const PaymentCurrencyAmount& value);
    [[nodiscard]] ItemType type() const;
    void type(const ItemType& value);
    [[nodiscard]] jsbind::String description() const;
    void description(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> iconURLs() const;
    void iconURLs(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String subscriptionPeriod() const;
    void subscriptionPeriod(const jsbind::String& value);
    [[nodiscard]] jsbind::String freeTrialPeriod() const;
    void freeTrialPeriod(const jsbind::String& value);
    [[nodiscard]] PaymentCurrencyAmount introductoryPrice() const;
    void introductoryPrice(const PaymentCurrencyAmount& value);
    [[nodiscard]] jsbind::String introductoryPricePeriod() const;
    void introductoryPricePeriod(const jsbind::String& value);
    [[nodiscard]] long long introductoryPriceCycles() const;
    void introductoryPriceCycles(long long value);
};

} // namespace webbind