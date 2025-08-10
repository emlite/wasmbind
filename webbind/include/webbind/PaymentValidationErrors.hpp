#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PayerErrors.hpp"
#include "AddressErrors.hpp"

namespace webbind {

/// Dictionary type PaymentValidationErrors
class PaymentValidationErrors : public emlite::Val {
  explicit PaymentValidationErrors(Handle h) noexcept;
public:
    static PaymentValidationErrors take_ownership(Handle h) noexcept;
    explicit PaymentValidationErrors(const emlite::Val &val) noexcept;
    PaymentValidationErrors() noexcept;
    [[nodiscard]] PaymentValidationErrors clone() const noexcept;
    /// Getter of the `payer` attribute.
    [[nodiscard]] PayerErrors payer() const;
    /// Setter of the `payer` attribute.
    void payer(const PayerErrors& value);
    /// Getter of the `shippingAddress` attribute.
    [[nodiscard]] AddressErrors shippingAddress() const;
    /// Setter of the `shippingAddress` attribute.
    void shippingAddress(const AddressErrors& value);
    /// Getter of the `error` attribute.
    [[nodiscard]] jsbind::String error() const;
    /// Setter of the `error` attribute.
    void error(const jsbind::String& value);
    /// Getter of the `paymentMethod` attribute.
    [[nodiscard]] jsbind::Object paymentMethod() const;
    /// Setter of the `paymentMethod` attribute.
    void paymentMethod(const jsbind::Object& value);
};

} // namespace webbind