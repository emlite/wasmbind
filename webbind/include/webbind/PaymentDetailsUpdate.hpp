#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentDetailsBase.hpp"
#include "PaymentItem.hpp"
#include "AddressErrors.hpp"
#include "PayerErrors.hpp"

namespace webbind {

/// Dictionary type PaymentDetailsUpdate
/// [`PaymentDetailsUpdate`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentDetailsUpdate)
class PaymentDetailsUpdate : public PaymentDetailsBase {
  explicit PaymentDetailsUpdate(Handle h) noexcept;
public:
    static PaymentDetailsUpdate take_ownership(Handle h) noexcept;
    explicit PaymentDetailsUpdate(const emlite::Val &val) noexcept;
    PaymentDetailsUpdate() noexcept;
    [[nodiscard]] PaymentDetailsUpdate clone() const noexcept;
    [[nodiscard]] jsbind::String error() const;
    void error(const jsbind::String& value);
    [[nodiscard]] PaymentItem total() const;
    void total(const PaymentItem& value);
    [[nodiscard]] AddressErrors shippingAddressErrors() const;
    void shippingAddressErrors(const AddressErrors& value);
    [[nodiscard]] PayerErrors payerErrors() const;
    void payerErrors(const PayerErrors& value);
    [[nodiscard]] jsbind::Object paymentMethodErrors() const;
    void paymentMethodErrors(const jsbind::Object& value);
};

} // namespace webbind