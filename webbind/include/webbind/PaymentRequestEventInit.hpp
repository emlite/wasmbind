#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

class PaymentMethodData;
class PaymentCurrencyAmount;
class PaymentDetailsModifier;
class PaymentOptions;
class PaymentShippingOption;

/// Dictionary type PaymentRequestEventInit
class PaymentRequestEventInit : public ExtendableEventInit {
  explicit PaymentRequestEventInit(Handle h) noexcept;
public:
    static PaymentRequestEventInit take_ownership(Handle h) noexcept;
    explicit PaymentRequestEventInit(const emlite::Val &val) noexcept;
    PaymentRequestEventInit() noexcept;
    [[nodiscard]] PaymentRequestEventInit clone() const noexcept;
    /// Getter of the `topOrigin` attribute.
    [[nodiscard]] jsbind::String topOrigin() const;
    /// Setter of the `topOrigin` attribute.
    void topOrigin(const jsbind::String& value);
    /// Getter of the `paymentRequestOrigin` attribute.
    [[nodiscard]] jsbind::String paymentRequestOrigin() const;
    /// Setter of the `paymentRequestOrigin` attribute.
    void paymentRequestOrigin(const jsbind::String& value);
    /// Getter of the `paymentRequestId` attribute.
    [[nodiscard]] jsbind::String paymentRequestId() const;
    /// Setter of the `paymentRequestId` attribute.
    void paymentRequestId(const jsbind::String& value);
    /// Getter of the `methodData` attribute.
    [[nodiscard]] jsbind::TypedArray<PaymentMethodData> methodData() const;
    /// Setter of the `methodData` attribute.
    void methodData(const jsbind::TypedArray<PaymentMethodData>& value);
    /// Getter of the `total` attribute.
    [[nodiscard]] PaymentCurrencyAmount total() const;
    /// Setter of the `total` attribute.
    void total(const PaymentCurrencyAmount& value);
    /// Getter of the `modifiers` attribute.
    [[nodiscard]] jsbind::TypedArray<PaymentDetailsModifier> modifiers() const;
    /// Setter of the `modifiers` attribute.
    void modifiers(const jsbind::TypedArray<PaymentDetailsModifier>& value);
    /// Getter of the `paymentOptions` attribute.
    [[nodiscard]] PaymentOptions paymentOptions() const;
    /// Setter of the `paymentOptions` attribute.
    void paymentOptions(const PaymentOptions& value);
    /// Getter of the `shippingOptions` attribute.
    [[nodiscard]] jsbind::TypedArray<PaymentShippingOption> shippingOptions() const;
    /// Setter of the `shippingOptions` attribute.
    void shippingOptions(const jsbind::TypedArray<PaymentShippingOption>& value);
};

} // namespace webbind