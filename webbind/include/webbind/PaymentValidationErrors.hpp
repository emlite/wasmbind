#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PayerErrors.hpp"
#include "AddressErrors.hpp"

namespace webbind {

/// Dictionary type PaymentValidationErrors
/// [`PaymentValidationErrors`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentValidationErrors)
class PaymentValidationErrors : public emlite::Val {
  explicit PaymentValidationErrors(Handle h) noexcept;
public:
    static PaymentValidationErrors take_ownership(Handle h) noexcept;
    explicit PaymentValidationErrors(const emlite::Val &val) noexcept;
    PaymentValidationErrors() noexcept;
    [[nodiscard]] PaymentValidationErrors clone() const noexcept;
    [[nodiscard]] PayerErrors payer() const;
    void payer(const PayerErrors& value);
    [[nodiscard]] AddressErrors shippingAddress() const;
    void shippingAddress(const AddressErrors& value);
    [[nodiscard]] jsbind::String error() const;
    void error(const jsbind::String& value);
    [[nodiscard]] jsbind::Object paymentMethod() const;
    void paymentMethod(const jsbind::Object& value);
};

} // namespace webbind