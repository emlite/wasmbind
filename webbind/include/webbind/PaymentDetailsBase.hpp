#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentItem.hpp"
#include "PaymentShippingOption.hpp"
#include "PaymentDetailsModifier.hpp"

namespace webbind {

/// Dictionary type PaymentDetailsBase
/// [`PaymentDetailsBase`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentDetailsBase)
class PaymentDetailsBase : public emlite::Val {
  explicit PaymentDetailsBase(Handle h) noexcept;
public:
    static PaymentDetailsBase take_ownership(Handle h) noexcept;
    explicit PaymentDetailsBase(const emlite::Val &val) noexcept;
    PaymentDetailsBase() noexcept;
    [[nodiscard]] PaymentDetailsBase clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<PaymentItem> displayItems() const;
    void displayItems(const jsbind::TypedArray<PaymentItem>& value);
    [[nodiscard]] jsbind::TypedArray<PaymentShippingOption> shippingOptions() const;
    void shippingOptions(const jsbind::TypedArray<PaymentShippingOption>& value);
    [[nodiscard]] jsbind::TypedArray<PaymentDetailsModifier> modifiers() const;
    void modifiers(const jsbind::TypedArray<PaymentDetailsModifier>& value);
};

} // namespace webbind