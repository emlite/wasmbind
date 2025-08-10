#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentItem.hpp"
#include "PaymentShippingOption.hpp"
#include "PaymentDetailsModifier.hpp"

namespace webbind {

/// Dictionary type PaymentDetailsBase
class PaymentDetailsBase : public emlite::Val {
  explicit PaymentDetailsBase(Handle h) noexcept;
public:
    static PaymentDetailsBase take_ownership(Handle h) noexcept;
    explicit PaymentDetailsBase(const emlite::Val &val) noexcept;
    PaymentDetailsBase() noexcept;
    [[nodiscard]] PaymentDetailsBase clone() const noexcept;
    /// Getter of the `displayItems` attribute.
    [[nodiscard]] jsbind::TypedArray<PaymentItem> displayItems() const;
    /// Setter of the `displayItems` attribute.
    void displayItems(const jsbind::TypedArray<PaymentItem>& value);
    /// Getter of the `shippingOptions` attribute.
    [[nodiscard]] jsbind::TypedArray<PaymentShippingOption> shippingOptions() const;
    /// Setter of the `shippingOptions` attribute.
    void shippingOptions(const jsbind::TypedArray<PaymentShippingOption>& value);
    /// Getter of the `modifiers` attribute.
    [[nodiscard]] jsbind::TypedArray<PaymentDetailsModifier> modifiers() const;
    /// Setter of the `modifiers` attribute.
    void modifiers(const jsbind::TypedArray<PaymentDetailsModifier>& value);
};

} // namespace webbind