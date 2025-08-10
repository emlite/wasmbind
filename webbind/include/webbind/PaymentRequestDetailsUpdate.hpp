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
class PaymentRequestDetailsUpdate : public emlite::Val {
  explicit PaymentRequestDetailsUpdate(Handle h) noexcept;
public:
    static PaymentRequestDetailsUpdate take_ownership(Handle h) noexcept;
    explicit PaymentRequestDetailsUpdate(const emlite::Val &val) noexcept;
    PaymentRequestDetailsUpdate() noexcept;
    [[nodiscard]] PaymentRequestDetailsUpdate clone() const noexcept;
    /// Getter of the `error` attribute.
    [[nodiscard]] jsbind::String error() const;
    /// Setter of the `error` attribute.
    void error(const jsbind::String& value);
    /// Getter of the `total` attribute.
    [[nodiscard]] PaymentCurrencyAmount total() const;
    /// Setter of the `total` attribute.
    void total(const PaymentCurrencyAmount& value);
    /// Getter of the `modifiers` attribute.
    [[nodiscard]] jsbind::TypedArray<PaymentDetailsModifier> modifiers() const;
    /// Setter of the `modifiers` attribute.
    void modifiers(const jsbind::TypedArray<PaymentDetailsModifier>& value);
    /// Getter of the `shippingOptions` attribute.
    [[nodiscard]] jsbind::TypedArray<PaymentShippingOption> shippingOptions() const;
    /// Setter of the `shippingOptions` attribute.
    void shippingOptions(const jsbind::TypedArray<PaymentShippingOption>& value);
    /// Getter of the `paymentMethodErrors` attribute.
    [[nodiscard]] jsbind::Object paymentMethodErrors() const;
    /// Setter of the `paymentMethodErrors` attribute.
    void paymentMethodErrors(const jsbind::Object& value);
    /// Getter of the `shippingAddressErrors` attribute.
    [[nodiscard]] AddressErrors shippingAddressErrors() const;
    /// Setter of the `shippingAddressErrors` attribute.
    void shippingAddressErrors(const AddressErrors& value);
};

} // namespace webbind