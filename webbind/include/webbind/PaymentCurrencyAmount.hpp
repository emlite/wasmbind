#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PaymentCurrencyAmount
class PaymentCurrencyAmount : public emlite::Val {
  explicit PaymentCurrencyAmount(Handle h) noexcept;
public:
    static PaymentCurrencyAmount take_ownership(Handle h) noexcept;
    explicit PaymentCurrencyAmount(const emlite::Val &val) noexcept;
    PaymentCurrencyAmount() noexcept;
    [[nodiscard]] PaymentCurrencyAmount clone() const noexcept;
    /// Getter of the `currency` attribute.
    [[nodiscard]] jsbind::String currency() const;
    /// Setter of the `currency` attribute.
    void currency(const jsbind::String& value);
    /// Getter of the `value` attribute.
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    void value(const jsbind::String& value);
};

} // namespace webbind