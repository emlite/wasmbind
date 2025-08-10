#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentCurrencyAmount.hpp"
#include "PaymentDetailsModifier.hpp"
#include "PaymentShippingOption.hpp"
#include "AddressErrors.hpp"

namespace webbind {

/// Dictionary type PaymentRequestDetailsUpdate
/// [`PaymentRequestDetailsUpdate`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestDetailsUpdate)
class PaymentRequestDetailsUpdate : public emlite::Val {
  explicit PaymentRequestDetailsUpdate(Handle h) noexcept;
public:
    static PaymentRequestDetailsUpdate take_ownership(Handle h) noexcept;
    explicit PaymentRequestDetailsUpdate(const emlite::Val &val) noexcept;
    PaymentRequestDetailsUpdate() noexcept;
    [[nodiscard]] PaymentRequestDetailsUpdate clone() const noexcept;
    [[nodiscard]] jsbind::String error() const;
    void error(const jsbind::String& value);
    [[nodiscard]] PaymentCurrencyAmount total() const;
    void total(const PaymentCurrencyAmount& value);
    [[nodiscard]] jsbind::TypedArray<PaymentDetailsModifier> modifiers() const;
    void modifiers(const jsbind::TypedArray<PaymentDetailsModifier>& value);
    [[nodiscard]] jsbind::TypedArray<PaymentShippingOption> shippingOptions() const;
    void shippingOptions(const jsbind::TypedArray<PaymentShippingOption>& value);
    [[nodiscard]] jsbind::Object paymentMethodErrors() const;
    void paymentMethodErrors(const jsbind::Object& value);
    [[nodiscard]] AddressErrors shippingAddressErrors() const;
    void shippingAddressErrors(const AddressErrors& value);
};

} // namespace webbind