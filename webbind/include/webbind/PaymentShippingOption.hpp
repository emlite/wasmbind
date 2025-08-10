#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentCurrencyAmount.hpp"

namespace webbind {

/// Dictionary type PaymentShippingOption
class PaymentShippingOption : public emlite::Val {
  explicit PaymentShippingOption(Handle h) noexcept;
public:
    static PaymentShippingOption take_ownership(Handle h) noexcept;
    explicit PaymentShippingOption(const emlite::Val &val) noexcept;
    PaymentShippingOption() noexcept;
    [[nodiscard]] PaymentShippingOption clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
    /// Getter of the `label` attribute.
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    void label(const jsbind::String& value);
    /// Getter of the `amount` attribute.
    [[nodiscard]] PaymentCurrencyAmount amount() const;
    /// Setter of the `amount` attribute.
    void amount(const PaymentCurrencyAmount& value);
    /// Getter of the `selected` attribute.
    [[nodiscard]] bool selected() const;
    /// Setter of the `selected` attribute.
    void selected(bool value);
};

} // namespace webbind