#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentDetailsBase.hpp"

namespace webbind {

class PaymentItem;
class AddressErrors;
class PayerErrors;

/// Dictionary type PaymentDetailsUpdate
class PaymentDetailsUpdate : public PaymentDetailsBase {
  explicit PaymentDetailsUpdate(Handle h) noexcept;
public:
    static PaymentDetailsUpdate take_ownership(Handle h) noexcept;
    explicit PaymentDetailsUpdate(const emlite::Val &val) noexcept;
    PaymentDetailsUpdate() noexcept;
    [[nodiscard]] PaymentDetailsUpdate clone() const noexcept;
    /// Getter of the `error` attribute.
    [[nodiscard]] jsbind::String error() const;
    /// Setter of the `error` attribute.
    void error(const jsbind::String& value);
    /// Getter of the `total` attribute.
    [[nodiscard]] PaymentItem total() const;
    /// Setter of the `total` attribute.
    void total(const PaymentItem& value);
    /// Getter of the `shippingAddressErrors` attribute.
    [[nodiscard]] AddressErrors shippingAddressErrors() const;
    /// Setter of the `shippingAddressErrors` attribute.
    void shippingAddressErrors(const AddressErrors& value);
    /// Getter of the `payerErrors` attribute.
    [[nodiscard]] PayerErrors payerErrors() const;
    /// Setter of the `payerErrors` attribute.
    void payerErrors(const PayerErrors& value);
    /// Getter of the `paymentMethodErrors` attribute.
    [[nodiscard]] jsbind::Object paymentMethodErrors() const;
    /// Setter of the `paymentMethodErrors` attribute.
    void paymentMethodErrors(const jsbind::Object& value);
};

} // namespace webbind