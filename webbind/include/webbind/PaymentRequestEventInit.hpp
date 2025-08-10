#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"
#include "PaymentMethodData.hpp"
#include "PaymentCurrencyAmount.hpp"
#include "PaymentDetailsModifier.hpp"
#include "PaymentOptions.hpp"
#include "PaymentShippingOption.hpp"

namespace webbind {

/// Dictionary type PaymentRequestEventInit
/// [`PaymentRequestEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEventInit)
class PaymentRequestEventInit : public ExtendableEventInit {
  explicit PaymentRequestEventInit(Handle h) noexcept;
public:
    static PaymentRequestEventInit take_ownership(Handle h) noexcept;
    explicit PaymentRequestEventInit(const emlite::Val &val) noexcept;
    PaymentRequestEventInit() noexcept;
    [[nodiscard]] PaymentRequestEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String topOrigin() const;
    void topOrigin(const jsbind::String& value);
    [[nodiscard]] jsbind::String paymentRequestOrigin() const;
    void paymentRequestOrigin(const jsbind::String& value);
    [[nodiscard]] jsbind::String paymentRequestId() const;
    void paymentRequestId(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<PaymentMethodData> methodData() const;
    void methodData(const jsbind::TypedArray<PaymentMethodData>& value);
    [[nodiscard]] PaymentCurrencyAmount total() const;
    void total(const PaymentCurrencyAmount& value);
    [[nodiscard]] jsbind::TypedArray<PaymentDetailsModifier> modifiers() const;
    void modifiers(const jsbind::TypedArray<PaymentDetailsModifier>& value);
    [[nodiscard]] PaymentOptions paymentOptions() const;
    void paymentOptions(const PaymentOptions& value);
    [[nodiscard]] jsbind::TypedArray<PaymentShippingOption> shippingOptions() const;
    void shippingOptions(const jsbind::TypedArray<PaymentShippingOption>& value);
};

} // namespace webbind