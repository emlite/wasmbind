#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PaymentCurrencyAmount.hpp"

namespace webbind {

/// Dictionary type PaymentShippingOption
/// [`PaymentShippingOption`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentShippingOption)
class PaymentShippingOption : public emlite::Val {
  explicit PaymentShippingOption(Handle h) noexcept;
public:
    static PaymentShippingOption take_ownership(Handle h) noexcept;
    explicit PaymentShippingOption(const emlite::Val &val) noexcept;
    PaymentShippingOption() noexcept;
    [[nodiscard]] PaymentShippingOption clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::String label() const;
    void label(const jsbind::String& value);
    [[nodiscard]] PaymentCurrencyAmount amount() const;
    void amount(const PaymentCurrencyAmount& value);
    [[nodiscard]] bool selected() const;
    void selected(bool value);
};

} // namespace webbind