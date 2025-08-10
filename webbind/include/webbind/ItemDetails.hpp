#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class PaymentCurrencyAmount;

/// Dictionary type ItemDetails
class ItemDetails : public emlite::Val {
  explicit ItemDetails(Handle h) noexcept;
public:
    static ItemDetails take_ownership(Handle h) noexcept;
    explicit ItemDetails(const emlite::Val &val) noexcept;
    ItemDetails() noexcept;
    [[nodiscard]] ItemDetails clone() const noexcept;
    /// Getter of the `itemId` attribute.
    [[nodiscard]] jsbind::String itemId() const;
    /// Setter of the `itemId` attribute.
    void itemId(const jsbind::String& value);
    /// Getter of the `title` attribute.
    [[nodiscard]] jsbind::String title() const;
    /// Setter of the `title` attribute.
    void title(const jsbind::String& value);
    /// Getter of the `price` attribute.
    [[nodiscard]] PaymentCurrencyAmount price() const;
    /// Setter of the `price` attribute.
    void price(const PaymentCurrencyAmount& value);
    /// Getter of the `type` attribute.
    [[nodiscard]] ItemType type() const;
    /// Setter of the `type` attribute.
    void type(const ItemType& value);
    /// Getter of the `description` attribute.
    [[nodiscard]] jsbind::String description() const;
    /// Setter of the `description` attribute.
    void description(const jsbind::String& value);
    /// Getter of the `iconURLs` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> iconURLs() const;
    /// Setter of the `iconURLs` attribute.
    void iconURLs(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `subscriptionPeriod` attribute.
    [[nodiscard]] jsbind::String subscriptionPeriod() const;
    /// Setter of the `subscriptionPeriod` attribute.
    void subscriptionPeriod(const jsbind::String& value);
    /// Getter of the `freeTrialPeriod` attribute.
    [[nodiscard]] jsbind::String freeTrialPeriod() const;
    /// Setter of the `freeTrialPeriod` attribute.
    void freeTrialPeriod(const jsbind::String& value);
    /// Getter of the `introductoryPrice` attribute.
    [[nodiscard]] PaymentCurrencyAmount introductoryPrice() const;
    /// Setter of the `introductoryPrice` attribute.
    void introductoryPrice(const PaymentCurrencyAmount& value);
    /// Getter of the `introductoryPricePeriod` attribute.
    [[nodiscard]] jsbind::String introductoryPricePeriod() const;
    /// Setter of the `introductoryPricePeriod` attribute.
    void introductoryPricePeriod(const jsbind::String& value);
    /// Getter of the `introductoryPriceCycles` attribute.
    [[nodiscard]] long long introductoryPriceCycles() const;
    /// Setter of the `introductoryPriceCycles` attribute.
    void introductoryPriceCycles(long long value);
};

} // namespace webbind