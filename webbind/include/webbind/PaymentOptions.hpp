#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PaymentOptions
/// [`PaymentOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentOptions)
class PaymentOptions : public emlite::Val {
  explicit PaymentOptions(Handle h) noexcept;
public:
    static PaymentOptions take_ownership(Handle h) noexcept;
    explicit PaymentOptions(const emlite::Val &val) noexcept;
    PaymentOptions() noexcept;
    [[nodiscard]] PaymentOptions clone() const noexcept;
    [[nodiscard]] bool requestPayerName() const;
    void requestPayerName(bool value);
    [[nodiscard]] bool requestBillingAddress() const;
    void requestBillingAddress(bool value);
    [[nodiscard]] bool requestPayerEmail() const;
    void requestPayerEmail(bool value);
    [[nodiscard]] bool requestPayerPhone() const;
    void requestPayerPhone(bool value);
    [[nodiscard]] bool requestShipping() const;
    void requestShipping(bool value);
    [[nodiscard]] PaymentShippingType shippingType() const;
    void shippingType(const PaymentShippingType& value);
};

} // namespace webbind