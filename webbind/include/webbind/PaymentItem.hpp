#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentCurrencyAmount.hpp"

namespace webbind {

/// Dictionary type PaymentItem
class PaymentItem : public emlite::Val {
  explicit PaymentItem(Handle h) noexcept;
public:
    static PaymentItem take_ownership(Handle h) noexcept;
    explicit PaymentItem(const emlite::Val &val) noexcept;
    PaymentItem() noexcept;
    [[nodiscard]] PaymentItem clone() const noexcept;
    /// Getter of the `label` attribute.
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    void label(const jsbind::String& value);
    /// Getter of the `amount` attribute.
    [[nodiscard]] PaymentCurrencyAmount amount() const;
    /// Setter of the `amount` attribute.
    void amount(const PaymentCurrencyAmount& value);
    /// Getter of the `pending` attribute.
    [[nodiscard]] bool pending() const;
    /// Setter of the `pending` attribute.
    void pending(bool value);
};

} // namespace webbind